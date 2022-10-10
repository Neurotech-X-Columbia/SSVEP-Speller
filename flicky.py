import pygame

def square(flag, w=200, h=200):
    square = pygame.Surface((w, h))
    c = (0, 0, 0) if flag else (255, 255, 255)
    square.fill(c)
    return square

def letters(l):
    font = pygame.font.SysFont('arial', 20)
    text = font.render(l, True, (0, 255, 0))
    return text

COLORS = [square(0), square(1)]

class Flicky(object):
    '''
    The main things to observe here are the coms that determine the frequency by 
    determining the count after which to switch from a white to a black box. 
    '''
    def __init__(self, x, y, typ):
        self.x = x
        self.y = y
        self.typ = typ
        
        self.clock = 0
        self.img_index = 1
        self.round = 0
    
    def process(self):
        self.clock = self.clock + 1
        self.comDriver()
    
    def draw(self, screen):
        screen.blit(COLORS[self.img_index], (self.x, self.y))
    
    def comDriver(self):   
        if self.typ == 1:
            self.com1();
        elif self.typ == 2:
            self.com2()     
        elif self.typ == 3:
            self.com3()
        elif self.typ == 4:
            self.com4()
        elif self.typ == 5:
            self.com5()
    
    def com1(self):
        if self.img_index == 1 and self.clock >= 5:
            self.clock = 0
            self.img_index = 0
        elif self.img_index == 0 and self.clock >= 4:
            self.clock = 0
            self.img_index = 1
            self.round = 1 if self.round == 0 else 0
            
    def com2(self):
        if self.img_index == 1 and self.clock >= 4:
            self.clock = 0
            self.img_index = 0
        elif self.img_index == 0 and self.clock >= 4:
            self.clock = 0
            self.img_index = 1
            self.round = 1 if self.round == 0 else 0
    
    def com3(self):
        if self.img_index == 1 and self.clock >= 4:
            self.clock = 0
            self.img_index = 0
        elif self.img_index == 0 and self.clock >= 3:
            self.clock = 0
            self.img_index = 1
            self.round = 1 if self.round == 0 else 0
    
    def com4(self):
        if self.round == 0:
            self.com1()
        else:
            self.com2()
    
    def com5(self):
        if self.round == 0:
            self.com2()
        else:
            self.com3()