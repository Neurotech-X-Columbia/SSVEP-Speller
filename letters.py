import pygame

def letters(l, fontsize=40):
    font = pygame.font.SysFont('arial', fontsize)
    text = font.render(l, True, (0, 0, 0))
    return text

OPTION_A = [['A B C/D E F/G H I', 'J K L/M N O/P Q R', 'S T U/V W X/Y Z _']]

OPTION_B = [['A/B/C', 'D/E/F', 'G/H/I'],
            ['J/K/L', 'M/N/O', 'P/Q/R'],
            ['S/T/U', 'V/W/X', 'Y/Z/_']]

OPTION_C = [[' /A/ ', ' /B/ ', ' /C/ '],
            [' /D/ ', ' /E/ ', ' /F/ '],
            [' /G/ ', ' /H/ ', ' /I/ '],
            [' /J/ ', ' /K/ ', ' /L/ '],
            [' /M/ ', ' /N/ ', ' /O/ '],
            [' /P/ ', ' /Q/ ', ' /R/ '],
            [' /S/ ', ' /T/ ', ' /U/ '],
            [' /V/ ', ' /W/ ', ' /X/ '],
            [' /Y/ ', ' /Z/ ', ' /_/ ']]

OPTION_D = ['Delete/Character', 'Previous/Action']

ALL_LETTERS = [OPTION_A, OPTION_B, OPTION_C]

def isValidQuery(query, collection):
    if query >= len(collection):
        return False
    return True

class Letters(object):
    def __init__(self, option, index, locations):
        '''
        

        Parameters
        ----------
        option : int
            The set of letters to use
        index : int
            The subset of letterd to display based on the users selection.
        locations : tuple
            The location on the screen (x,y).

        Returns
        -------
        None.

        '''
        self.option = option
        self.letters = ALL_LETTERS[option][index]  if isValidQuery(option, ALL_LETTERS) and isValidQuery(index, ALL_LETTERS[option]) else []
        self.locations = locations
        
    def isValid(self):
        if self.letters == []:
            return False
        return True
        
    def draw(self, screen):
        '''
        This draws the letters on top of

        Parameters
        ----------
        screen : TYPE
            DESCRIPTION.

        Returns
        -------
        None.

        '''
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
            
            
            
            
            
            
            
            