import asyncio
import time
import websockets


class HeadsetBridge(websockets.WebSocketServerProtocol):
    def __init__(self, proc):
        self.proc = proc

    async def handler(self, websocket):
        while True:
            try:
                data = await websocket.recv()
            except websocket.ConnectionClosed:
                print(f"Connection Terminated")
                break

            print(f"Receipt: {data}")
            print(f"Sending: {self.proc.get_state()}")

            time.sleep(5)

            await websocket.send(str(self.proc.get_state()))

    def start_loop(self):
        start_server = await websockets.serve(self.handler, "localhost", 8000)
        asyncio.get_event_loop().run_until_complete(start_server)
        asyncio.get_event_loop().run_forever()


# async def handler(websocket):
#     while True:
#         try:
#             data = await websocket.recv()
#         except websockets.ConnectionClosed:
#             print(f"Connection Terminated")
#             break
#         receipt = f"Receipt: {data}"
#
#         await websocket.send(proc.get_state())
#
# start_server = websockets.serve(handler, "localhost", 8000)
# asyncio.get_event_loop().run_until_complete(start_server)
# asyncio.get_event_loop().run_forever()
