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
        if latitude(arret) < ymin:
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
        if latitude(arret) > ymax:
            ymax = latitude(arret)
    return ymax

def ratiolon(arret):
    return longitude(arret)-xmin()+0.025*(xmax()-xmin())
    
def ratiola(arret):
    return latitude(arret)-ymin()+0.025*(ymax()-ymin())

ratioxy =  (xmax()-xmin())/(ymax()-ymin())

listepoi = []   # Liste des points
listearr = []   # Liste des cercles 
listeche = []   # Liste des chemins bleus
listet   = []   # Liste des traits noirs
lister   = []   # Liste des traits jaunes

fenx = 650
feny = 1300

def dijkstraw(poids_bus,s0,arv,win):
    
    aTraiter=[]                             #La file des sommets à traiter
    dic_dist={}
    
    for nom_arret in databus.keys():
        dic_dist[nom_arret]=[np.inf,s0]                    #Initialisation du dictionnaire du nombre de fois q'un arrêt à été vu
        
    aTraiter.append(s0)
    dic_dist[s0][0]=0 
    j=0
                     
    while aTraiter!=[]:
        som = aTraiter.pop(0)             #Défiler un sommet
        listearr[indice_som(som)].setFill("red")
        for succ in voisin(som):
            lister.append(Line(listepoi[indice_som(som)], listepoi[indice_som(succ)]))
            lister[j].draw(win)
            lister[j].setOutline("red")
            j+=1
            if distarc(succ, som) + dic_dist[som][0] < dic_dist[succ][0] :
                
                #Relâcher l'arc
                dic_dist[succ][0] = distarc(succ, som) + dic_dist[som][0]
                dic_dist[succ][1] = som
                aTraiter.append(succ)
            #time.sleep(0.0001)
                
    dep = s0
    dic_dij = dic_dist
    pile_chemin_dij = []
    pile_chemin_dij.append(arv)
    
    som=arv
    i=1         #☺initialiser i à 1
    j=0
    
    while som != dep:                               #Reconstitution du chemin
        
        listearr[indice_som(som)].setFill("blue")
        succ = som
        som = pile_chemin_dij[i-1]
        listeche.append(Line(listepoi[indice_som(som)], listepoi[indice_som(succ)]))
        listeche[j].draw(win)
        listeche[j].setOutline("blue")

        pile_chemin_dij.append(dic_dij[som][1])
        i=i+1 #i prend la valeur de i et y ajoute 1
        j+=1  #incrémenter j
    return dic_dist

def bellmanw(poids_bus,s0,arv,win):
    
    n=len(poids_bus)    # n prend comme valeur les nombre de valeurs présentes dans poids_bus
    dic_dist={}
    
    for nom_arret in databus.keys():
        dic_dist[nom_arret]=[np.inf,s0]     #Initialisation du dictionnaire des chemins les plus courts
    
    dic_dist[s0][0]=0
    traite=[]
    
    for i in range(n-1):
        for som in dic_dist:
            for succ in voisin(som):
                if distarc(succ, som) + dic_dist[som][0] < dic_dist[succ][0]:
                    
                    #Relâcher l'arc
                    dic_dist[succ][0] = distarc(succ, som) + dic_dist[som][0]
                    dic_dist[succ][1] = som
                    if indice_som(succ) not in traite:
                        listearr[indice_som(succ)].setFill("red")
                        traite.append(indice_som(succ))
                
    dep = s0
    dic_bel = dic_dist
    pile_chemin_bel = []
    pile_chemin_bel.append(arv)
    
    som=arv
    i=1
    j=0
    
    while som != dep:                               #Reconstitution du chemin
        
        listearr[indice_som(som)].setFill("blue")
        succ = som
        som = pile_chemin_bel[i-1]
        listeche.append(Line(listepoi[indice_som(som)], listepoi[indice_som(succ)]))
        
        listeche[j].draw(win)
        listeche[j].setOutline("blue")

        pile_chemin_bel.append(dic_bel[som][1])
        i=i+1
        j+=1
    return dic_dist

def Floyd_Warshallw(poids_bus,s0,arv,win):
    
    n=len(poids_bus)
    dic_dist={}
    
    n=len(poids_bus)  
    dist=poids_bus
    pred=[[None for i in range(n)]for i in range(n)]
    for i in range(n):
        for j in range(n):
            if dist[i][j] != np.inf and dist[i][j] != 0:
                pred[i][j]=i
            
    for i in range(n):
        listearr[i].setFill("red")
        for j in range(n):
            for k in range(n):
                lister.append(Line(listepoi[j], listepoi[k]))
                lister[k].draw(win)
                lister[k].setOutline("red")
                if dist[j][k] > dist[j][i] + dist[i][k]:
                    dist[j][k] = dist[j][i] + dist[i][k]
                    pred[j][k] = pred[i][k]
            for v in range(len(lister)):
                lister[i].undraw()
                lister[i].setOutline("black")
                
    dep = s0
    pile_chemin_FW = []
    pile_chemin_FW.append(arv)
    
    som=arv
    i=1
    j=0
    
    while som != dep:                               #Reconstitution du chemin
        
        listearr[indice_som(som)].setFill("blue")
        succ = som
        som=nom(pred[indice_som(dep)][indice_som(som)])
        listeche.append(Line(listepoi[indice_som(som)], listepoi[indice_som(succ)]))
        listeche[j].draw(win)
        listeche[j].setOutline("blue")

        pile_chemin_FW.append(som)
        i=i+1
        j+=1
    return dic_dist

def aff(win):
    i=0
    for arret in databus:
        listepoi.append(Point(ratiolon(arret),ratiola(arret)))
        listepoi[i].draw(win)
        listearr.append(Oval(Point(listepoi[i].getX()-4/4500,listepoi[i].getY()-4/9000*ratioxy), Point(listepoi[i].getX()+4/4500, listepoi[i].getY()+4/9000*ratioxy)))
        listearr[i].draw(win)
        i+=1
    i=0
    k=0
    for arret in databus:
        for vois in voisin(arret):
            listet.append(Line(listepoi[indice_som(arret)], Point(ratiolon(vois), ratiola(vois))))
            listet[k].draw(win)
            k+=1
    
def main():
    
    
    win = GraphWin("Chronoplus", fenx*ratioxy, feny/ratioxy)
    win.setCoords(0, 0, xmax()-xmin()+0.05*(xmax()-xmin()), ymax()-ymin()+0.05*(ymax()-ymin()))
    
    aff(win)
    
    while True:
            
        touche = win.getKey()
        
        if touche == "f" :
            Floyd_Warshallw(poids_bus, "NOVE", "BTZG", win)
        elif touche == "b" :
            bellmanw(poids_bus, "NOVE", "BTZG", win)
        elif touche == "d" :
            dijkstraw(poids_bus, "NOVE", "BTZG", win)
        
        time.sleep(5)
                
        for i in range(len(listearr)):
            listearr[i].undraw()
            listearr[i].setFill("white")
        for i in range(len(listet)):
            listet[i].undraw()
        for i in range(len(listeche)):
            listeche[i].undraw()
            listeche[i].setOutline("black")
        for i in range(len(lister)):
            lister[i].undraw()
            lister[i].setOutline("black")
        for i in range(len(listepoi)):
            listepoi[i].undraw()
            
        aff(win)
        
main()
