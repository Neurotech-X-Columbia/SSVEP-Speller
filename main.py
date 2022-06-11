import pygame #@UnusedImport
from manager import addFlicky, drawLetters, process, drawFlickies

pygame.init()
screen = pygame.display.set_mode((1280, 800))
pygame.display.set_caption("pySSVEP")
 
done = False
clock = pygame.time.Clock()

addFlicky(1, screen)
addFlicky(2, screen)
addFlicky(3, screen)
addFlicky(4, screen)
addFlicky(5, screen)

while done==False:
    
    for event in pygame.event.get():
        if (event.type == pygame.KEYUP) or (event.type == pygame.KEYDOWN):
            if (event.key == pygame.K_ESCAPE):
                done = True
        if event.type == pygame.QUIT:
            done = True
            
    screen.fill((0,0,0))
    clock.tick(60) # 16 ms between frames ~ 60FPS
    
    process()
    drawFlickies(screen)
    drawLetters(0, 0, screen)

    pygame.display.flip()

pygame.quit()