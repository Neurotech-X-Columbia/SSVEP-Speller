import pygame

def letters(l, fontsize=40):
    font = pygame.font.SysFont('arial', fontsize)
    text = font.render(l, True, (0, 0, 0))
    return text

OPTION_A = [['A B C/D E F/G H I', 'J K L/M N O/P Q R', 'S T U/V W X/Y Z _']]

OPTION_B = [['A B C', 'D E F', 'G H I'],
            ['J K L', 'M N O', 'P Q R'],
            ['S T U', 'V W X', 'Y Z _']]

OPTION_C = [['A', 'B', 'C'],
            ['D', 'E', 'F'],
            ['G', 'H', 'I'],
            ['J', 'K', 'L'],
            ['M', 'N', 'O'],
            ['P', 'Q', 'R'],
            ['S', 'T', 'U'],
            ['V', 'W', 'X'],
            ['Y', 'Z', '_']]

OPTION_D = ['Delete/Character', 'Previous/Action']

ALL_LETTERS = [OPTION_A, OPTION_B, OPTION_C]

class Letters(object):
    def __init__(self, option, index, locations):
        self.option = option
        self.letters = ALL_LETTERS[option][index]
        self.locations = locations
    
    def draw(self, screen):
        allOptions = self.letters + OPTION_D
        i = 0
        
        for block in allOptions:
            
            letlist = block.split('/')
            j = 50
            
            for l in letlist:
                text = letters(l)
                textRect = text.get_rect()
                textRect.center = (self.locations[i][0] + 100, self.locations[i][1] + j)
                screen.blit(text, textRect)
                j+= 52
            
            i += 1
            
            
            
            
            
            
            
            