import asyncio
import websockets

from PipelineClasses import Headset, Processor
from SignalProcessing.ProcessingFunctions import model_one, model_two, model_three
from threading import Thread, Event
from time import sleep


def process_loop(proc, recording_flag, update_flag, on_off, *hs_params):
    headset = Headset(*hs_params)

    headset.initialize()
    headset.start_stream()

    on_time, off_time = on_off

    while headset.stream_open:
        try:
            sleep(off_time)
            recording_flag.set()
            sleep(on_time)
            proc.process_chunk(headset.collect())
            update_flag.set()

        except KeyboardInterrupt:
            headset.end_stream()
            print("Session end.")


async def handler(websocket):
    window_size = 500  # Chunk size
    srate = 125
    serial_port = 'COM3'
    board_id = 2

    on_off = (window_size/srate, window_size/srate)

    states = [1, 2, 3, 4, 5]
    default = 1

    # Tuple of processing functions to apply to every chunk. Should accept data and return state
    funcs = [model_one]

    pro = Processor(states, default, funcs)
    update = Event()
    recording = Event()
    args = [pro, recording, update, on_off, *(window_size, srate, serial_port, board_id)]

    process_thread = Thread(target=process_loop, args=args)
    process_thread.start()

    sleep(4)

    print(f"Socket Receipt: {await websocket.recv()}")

    while True:
        print(f"Starting next recording period in {on_off[1]} seconds.")
        recording.wait()  # Wait until recording period starts
        print("Recording...")
        await websocket.send(str(0))  # Turn on recording period indicator in GUI
        await websocket.recv()  # Confirm update

        update.wait()  # Wait until done processing most recent chunk

        await websocket.send(str(-1))  # Turn off recording period indicator in GUI
        await websocket.recv()  # Confirm update

        new_state = pro.get_state()
        print(f"Sending: {new_state}\n")
        await websocket.send(str(new_state))  # Tell Unity new state
        await websocket.recv()  # Confirm update

        update.clear()  # Reset processing thread to be not ready to update
        recording.clear()  # Reset processing thread to not recording


async def main():
    async with websockets.serve(handler, "localhost", 8000):
        await asyncio.Future()


if __name__ == "__main__":
    asyncio.run(main())
