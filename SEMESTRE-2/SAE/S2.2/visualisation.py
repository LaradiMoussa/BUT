from algorithmes import *
from graphics import *

def xmin():
    xmin = longitude(noms_arrets[0])
    for arret in noms_arrets:
        if longitude(arret) < xmin:
            xmin = longitude(arret)
    return xmin
            
def ymin():
    ymin = latitude(noms_arrets[0])
    for arret in noms_arrets:
        if longitude(arret) < ymin:
            ymin = latitude(arret)
    return ymin
    
def xmax():
    xmax = longitude(noms_arrets[0])
    for arret in noms_arrets:
        if longitude(arret) > xmax:
            xmax = longitude(arret)
    return xmax
    
def ymax():
    ymax = latitude(noms_arrets[0])
    for arret in noms_arrets:
        if longitude(arret) > ymax:
            ymax = latitude(arret)
    return ymax

def ratiolon(arret):
    return longitude(arret)-xmin()
    
def ratiola(arret):
    return latitude(arret)-ymin()

def ratiox():
    return 4*xmax()/500

def ratioy():
    return 4*ymax()/500
    
    
def main():
    win = GraphWin("Chronoplus", 10000*(xmax()-xmin()), 10000*(ymax()-ymin()))
    win.setCoords(0, 0, xmax()-xmin(), ymax()-ymin())
    for arret in databus:
        p = Point(ratiolon(arret),ratiola(arret))
        p.draw(win)
    win.getMouse() # pause for click in window
    win.close()
main()