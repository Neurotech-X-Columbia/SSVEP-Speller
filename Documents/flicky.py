import pygame
import checkerboard

IMAGES = [
          checkerboard.create(0),
          checkerboard.create(1)
          ]
A = IMAGES[0].get_width()

class FlickyManager:
    def __init__(self,screen):
        self.flickies = []
        self.screen = screen
    def addFlicky(self,f):
        self.flickies.append(f)
    def add(self, typ):
        w, h = self.screen.get_size()
        
        if typ == 1:
            x = 0; y = h-A;
        elif typ == 2:
            x = w/2 - A/2; y = h-A;
        elif typ == 3:
            x = w-A; y = h-A;
        elif typ == 4:
            y = 0; x = w/5;
        elif typ == 5:
            y = 0; x = (w-A) - w/5;
        else: 
            raise ValueError("COM type %s unknown" % typ)
            
        f = Flicky(x,y,typ)
        self.flickies.append(f)
    def process(self):
        for f in self.flickies:
            f.process()
    def draw(self):
        for f in self.flickies:
            f.draw(self.screen)
        
class Flicky(object):
    def __init__(self, x, y, typ, w=A, h=A):
        self.x = x
        self.y = y
        self.w = w
        self.h = h
        self.typ = typ
        self.clock = 0
        self.img_index = 0;
        self.round = 0;
    def process(self):
        self.clock = self.clock + 1
        self.comDriver()
    def draw(self,screen):
        screen.blit(IMAGES[self.img_index], (self.x, self.y))
    
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
    
    
    
    
    
    
    
    
    
    
    
    
    