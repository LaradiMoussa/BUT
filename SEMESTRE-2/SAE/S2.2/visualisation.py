from algorithmes import *
from graphics import *

def main():
    win = GraphWin("Chronoplus", 500, 500)
    c = Circle(Point(-longitude('HDVBAY'),latitude('HDVBAY')), 4)
    c.draw(win)
    c = Circle(Point(-longitude('NOVE'),latitude('NOVE')), 4)
    c.draw(win)
    win.getMouse() # pause for click in window
    win.close()
main()