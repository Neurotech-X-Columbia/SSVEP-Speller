import pygame #@UnusedImport
from manager import addFlicky, drawLetters, process, drawFlickies


pygame.init()
screen = pygame.display.set_mode((1280, 800))
pygame.display.set_caption("pySSVEP")
 
done = False
clock = pygame.time.Clock()

#this calls the method in the manager class to add an Object called Flicky to a list
# a flicky is a box that blinks. 
addFlicky(1, screen)
addFlicky(2, screen)
addFlicky(3, screen)
addFlicky(4, screen)
addFlicky(5, screen)

#the while loop keeps updating the view. 
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
    
    #this is the function in python that calls the pygame.blit method to draw the flicky  
    drawFlickies(screen)
    
    #this is the functions that draws letters on top of the boxes. 
    drawLetters(0, 0, screen)

    pygame.display.flip()

pygame.quit()

