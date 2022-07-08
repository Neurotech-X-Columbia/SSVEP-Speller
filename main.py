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
option = 0
user_input = 0
index = 0
start_usr_input = 0
# Note: user ınput ıs and pygame.KEYDOWN are just dummy varıables.
isValid = True
while done==False and isValid == True:
    
    for event in pygame.event.get():
        if (event.type == pygame.KEYUP) or (event.type == pygame.KEYDOWN):
            if (event.key == pygame.K_ESCAPE):
                done = True
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_a:
                print('Here')
                #change text
                #userInput ıs a number
                #draws only the boxes
                option += 1
                index = start_usr_input + user_input
                start_usr_input = (option)*user_input*3
                print(start_usr_input)
        
        if event.type == pygame.QUIT:
            done = True
        
        
    
    screen.fill((0,0,0))
    clock.tick(60) # 16 ms between frames ~ 60FPS
    #QUESTION: If we add more flickies does this change?
    process()
    drawFlickies(screen)
    isValid = drawLetters(option, index, screen)
    print(isValid)
    
    pygame.display.flip()


pygame.quit()