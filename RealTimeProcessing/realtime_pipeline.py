import asyncio
import websockets

from PipelineClasses import Headset, Processor
from SignalProcessing.ProcessingFunctions import model_one, model_two, model_three
from threading import Thread, Event
from time import sleep


def process_loop(proc, update_flag, wait_time, *hs_params):
    headset = Headset(*hs_params)

    headset.initialize()
    headset.start_stream()

    while headset.stream_open:
        try:
            proc.process_chunk(headset.collect())
            print(f"State: {proc.get_state()}")
            sleep(wait_time)
            update_flag.set()
        except KeyboardInterrupt:
            headset.end_stream()
            print("Session end.")


async def handler(websocket):
    window_size = 500  # Chunk size
    srate = 125
    serial_port = 'COM3'
    board_id = 2
    update_time = window_size/srate

    states = [1, 2, 3, 4, 5]
    default = 1

    # Tuple of processing functions to apply to every chunk. Should accept data and return state
    funcs = model_one, model_two, model_three

    pro = Processor(states, default, funcs)
    update = Event()
    args = [pro, update, update_time, *(window_size, srate, serial_port, board_id)]

    process_thread = Thread(target=process_loop, args=args)
    process_thread.start()

    while True:
        await websocket.recv()
        update.wait()
        update.clear()

        new_state = pro.get_state()
        print(f"\nSending: {new_state}")

        await websocket.send(str(new_state))


async def main():
    async with websockets.serve(handler, "localhost", 8000):
        await asyncio.Future()


if __name__ == "__main__":
    asyncio.run(main())
