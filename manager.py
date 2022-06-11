from flicky import Flicky
from letters import Letters

flickies = []

def addFlicky(typ, screen):
    w, h = screen.get_size()
    x, y = determineLocation(typ, w, h, 200)
       
    f = Flicky(x,y,typ)
    flickies.append(f)

def drawLetters(option, index, screen):
    w, h = screen.get_size()
    locations = allLocations(w, h, 200)
    
    letters = Letters(option, index, locations)
    letters.draw(screen)

def process():
    for f in flickies:
        f.process()
    
def drawFlickies(screen):
    for f in flickies:
        f.draw(screen)
        
def determineLocation(typ, w, h, A):
    x, y = 0, 0
    
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
        
    return x, y

def allLocations(w, h, A):
    locations = []
    for i in range(1,6):
        locations.append(determineLocation(i, w, h, A))
    return locations