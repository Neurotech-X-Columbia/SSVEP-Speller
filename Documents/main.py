import pygame #@UnusedImport
from flicky import FlickyManager

pygame.init()
screen=pygame.display.set_mode([1024,768])
pygame.display.set_caption("pySSVEP")
 
done=False
clock=pygame.time.Clock()
flickymanager = FlickyManager(screen)

flickymanager.add(1)
flickymanager.add(2)
flickymanager.add(3)
flickymanager.add(4)
flickymanager.add(5)

while done==False:
    for event in pygame.event.get():
        if (event.type == pygame.KEYUP) or (event.type == pygame.KEYDOWN):
            if (event.key == pygame.K_ESCAPE):
                done = True
        if event.type == pygame.QUIT:
            done = True
    screen.fill((0,0,0))
    clock.tick(60) # 16 ms between frames ~ 60FPS
    flickymanager.process()
    flickymanager.draw()
    pygame.display.flip()

pygame.quit()