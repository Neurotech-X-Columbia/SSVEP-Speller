import asyncio
import websockets

import time
import random


async def handler(websocket):
    while True:
        received = await websocket.recv()
        print(f"Received: {received}")
        time.sleep(5)
        new_state = random.randint(1, 5)
        print(f"Sending: {new_state}")

        await websocket.send(str(new_state))


async def main():
    async with websockets.serve(handler, "localhost", 8000):
        await asyncio.Future()

asyncio.run(main())
