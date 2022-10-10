from flicky import Flicky
from letters import Letters

flickies = []

def addFlicky(typ, screen):
    '''

    Adds a flicky- a box that flashes on and off- to the screen

    Parameters
    ----------
    typ : int
        1 through 5. It deterimines the location of the boxes
    screen : pygame.display
        The screen to display the UI.

    Returns
    -------
    None.


    '''
    w, h = screen.get_size()
    x, y = determineLocation(typ, w, h, 200)
       
    f = Flicky(x,y,typ)
    flickies.append(f)

def drawLetters(option, index, screen):

    This method is responsible for placing the letters in the boxes. 

    Parameters
    ----------
    option : int
        The ındex of the group of letters to be usıng..
    index : int
        The group of letters to draw.
    screen : pygame.display
        The screen where everythıng ıs dısplayed.

    Returns
    -------
    Boolean
        Just a method to check whether letters is valid. 


    '''
    w, h = screen.get_size()
    locations = allLocations(w, h, 200)
    
    letters = Letters(option, index, locations)
    letters.draw(screen)
    return letters.getLetters()
    
    

def process():
    '''

    Updates the count as a way to determine the frequency 

    Returns
    -------
    None.


    '''
    for f in flickies:
        f.process()
    
def drawFlickies(screen):
    '''
    

    Parameters
    ----------
    screen : pygame.display
        This calls the function that calls Pygame's screen.blit..

    Returns
    -------
    None.

    '''

    for f in flickies:
        f.draw(screen)
        
def determineLocation(typ, w, h, A):
    '''
    

    Parameters
    ----------
    typ : integer
        to determine the location of the box..
    w : integer
        width of screen.
    h : integer
        height of screen.
    A : integer
        width of box..

    Raises
    ------
    ValueError
        DESCRIPTION.

    Returns
    -------
    x : integer
        x-location.
    y : integer
        y-location.

    '''
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