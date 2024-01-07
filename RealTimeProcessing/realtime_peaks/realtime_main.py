from brainflow.board_shim import BoardIds
from PipelineClasses import Headset, Processor
from ProcessingFunctions import find_peak
from time import sleep


def process_loop(proc, delay=0, *hs_params):
    headset = Headset(*hs_params)
    headset.initialize()
    headset.start_stream()

    chunk_num = 0
    wsize = hs_params[0]

    while headset.is_active:
        try:
            if (chunk := headset.collect()).any() and len(chunk[0, :]) >= wsize:
                proc.process_chunk(chunk)
                chunk_num += 1
            else:
                print("Collecting initial data...")
                sleep(delay)
                continue

            new = proc.get_state()
            print(f"State: {new}")
            sleep(delay)

        except KeyboardInterrupt:
            headset.end_stream()
            print("Session end.")


if __name__ == '__main__':
    # For both live and simulated
    window_length = 20  # seconds of data in one chunk
    delay = 5  # minimum time to wait before processing next chunk

    # For live data collection
    srate = 250
    serial_port = 'COM3'
    board_id = BoardIds.CYTON_BOARD

    states = ['12 Hz', '15 Hz', '18 Hz', 'No stimulus (weak peak)', 'No stimulus (wrong peak)']
    default = 'No stimulus (weak peak)'

    # Tuple of processing functions to apply to every chunk. Should accept data and return state
    funcs = (find_peak)

    pro = Processor(states, default, funcs, logfile=None)

    hs_params = (window_length*srate, srate, serial_port, board_id)
    process_loop(pro, delay, *hs_params)
