"""

Titouan Brierre

"""


import json
from math import sin, cos, acos, pi
import numpy as np
import time as t

with open('donneesbus.json') as donneesbus:
    databus = json.load(donneesbus)
    
noms_arrets = list(databus.keys()) #liste les arrets du dictionnaire

n=len(noms_arrets) #taille de la liste 

#liste les voisins d'un arret donné
def voisin(nom_som):
    return databus[nom_som][2]

#retourne l'indice à partir du nom de l'arret
def indice_som(nom_som):
    ind=noms_arrets.index(nom_som)
    return ind

#crée le dictionnaire des arrets et de leurs voisins
dic_bus={}
for nom_arret in databus.keys():
    dic_bus[nom_arret]=voisin(nom_arret)
    
#crée la matrice d'adjacence des arrets
mat_bus=[[0 for loop in range(n)] for loop in range(n)]
for nom_arret in noms_arrets:
    for a in voisin(nom_arret):
        mat_bus[indice_som(a)][indice_som(nom_arret)]=1
    
#retourne le nom d'un arret à partir de son indice
def nom(ind):
    nom_som=noms_arrets[ind]
    return nom_som

#retourne la latitude d'un arret donné
def latitude(nom_som):
    latitude=databus[nom_som][0]
    return latitude

#retourne la longitude d'un arret donné
def longitude(nom_som):
    longitude=databus[nom_som][1]
    return longitude

#########################################################
# calcul de la distance entre deux points A et B dont #
# on connait la lattitude et la longitude #
#########################################################
def distanceGPS(latA,latB,longA,longB):
 # Conversions des latitudes en radians
 ltA=latA/180*pi
 ltB=latB/180*pi
 loA=longA/180*pi
 loB=longB/180*pi
 # Rayon de la terre en mètres (sphère IAG-GRS80)
 RT = 6378137
 # angle en radians entre les 2 points 
 S = acos(round(sin(ltA)*sin(ltB) + cos(ltA)*cos(ltB)*cos(abs(loB-loA)),14))
 # distance entre les 2 points, comptée sur un arc de grand cercle
 return S*RT

#retourne la distance à vol d'oiseau entre deux arrets
def distarrets(arret1,arret2):
    return distanceGPS(latitude(arret1), latitude(arret2), longitude(arret1), longitude(arret2))

#retournela distance entre deux arrets voisins donnés
def distarc(arret1,arret2):
    if arret2 in voisin(arret1) or arret1 in voisin(arret2) :
        return distarrets(arret1,arret2)
    else:
        return np.inf

#crée la matrice des poids entre les arrets
poids_bus=[[np.inf for loop in range(n)] for loop in range(n)]
for src in range(n):
    for dest in range(n):
        poids_bus[src][dest]=distarc(nom(src),nom(dest))
            
            
#---------------ETAPE 2---------------
            

#retourne la liste des successeurs d'un sommet donné
def lst_succ(M,s):
    lst_succ=[]
    for i in range(len(M)):
        if M[i][s] != np.inf:
            lst_succ.append(i)
    return(lst_succ)

#calcule le nombre de voisins d'un arrêt
def nb_voisin(arr):
    nbVois = 0
    for vois in voisin(arr):
        nbVois=nbVois+1
    return nbVois



#renvoie un dictionnaire des chemins les plus courts vers tous les arrêts depuis un arrêt selon l'algorithme de Dijkstra
def dijkstra(poids_bus,s0):
    
    tmpdeb = t.time()
    
    aTraiter=[]                             #La file des sommets à traiter
    dic_dist={}
    
    for nom_arret in databus.keys():
        dic_dist[nom_arret]=[np.inf,s0]                    #Initialisation du dictionnaire du nombre de fois q'un arrêt à été vu
        
    aTraiter.append(s0)
    dic_dist[s0][0]=0  
                     
    while aTraiter!=[]:
        som = aTraiter.pop()                #Défiler un sommet
        for succ in voisin(som):
            if distarc(succ, som) + dic_dist[som][0] < dic_dist[succ][0] :
                
                #Relâcher l'arc
                dic_dist[succ][0] = distarc(succ, som) + dic_dist[som][0]
                dic_dist[succ][1] = som
                aTraiter.append(succ)
                
    duree = t.time() - tmpdeb
    print("dijkstra a duré : ", duree, "s")
    return dic_dist
    


#renvoie un dictionnaire des chemins les plus courts vers tous les arrêts depuis un arrêt selon l'algorithme de Bellman
def bellman(poids_bus,s0):
    
    tmpdeb = t.time()
    
    n=len(poids_bus)
    dic_dist={}
    
    for nom_arret in databus.keys():
        dic_dist[nom_arret]=[np.inf,s0]     #Initialisation du dictionnaire des chemins les plus courts
    
    dic_dist[s0][0]=0
    
    for i in range(n-1):
        for som in dic_dist:
            for succ in voisin(som):
                if distarc(succ, som) + dic_dist[som][0] < dic_dist[succ][0]:
                    
                    #Relâcher l'arc
                    dic_dist[succ][0] = distarc(succ, som) + dic_dist[som][0]
                    dic_dist[succ][1] = som
                    
            
    duree = t.time() - tmpdeb
    print("Bellman a duré : ", duree, "s")
    return dic_dist



#renvoie un dictionnaire des chemins les plus courts depuis tous arrêt vers tous les arrêts selon l'algorithme de Floyd-Warshall
def Floyd_Warshall(poids_bus):
    
    tmpdeb = t.time()
    
    n=len(poids_bus)  
    dist=poids_bus
    pred=[[None for i in range(n)]for i in range(n)]
    for i in range(n):
        for j in range(n):
            if dist[i][j] != np.inf and dist[i][j] != 0:
                pred[i][j]=i
            
    for i in range(n):
        for j in range(n):
            for k in range(n):
                if dist[j][k] > dist[j][i] + dist[i][k]:
                    dist[j][k] = dist[j][i] + dist[i][k]
                    pred[j][k] = pred[i][k]
                    
    duree = t.time() - tmpdeb
    print("Floyd Warshall a duré : ", duree, "s")                
    return dist, pred
        
    
#Retrace le chemin emprunté par les algorithmes du dessus
def chemins(dep, arv):
    
    dic_dij = dijkstra(poids_bus, dep)
    dic_bel = bellman(poids_bus, dep)
    distFW, predFW = Floyd_Warshall(poids_bus)
        
    pile_chemin_dij = []
    pile_chemin_bel = []
    pile_chemin_FW = []
    
    pile_chemin_dij.append(arv)
    pile_chemin_bel.append(arv)
    pile_chemin_FW.append(arv)
    
    som=arv
    i=1
    
    while som != dep:                               #Reconstitution de dijkstra
        
        som = pile_chemin_dij[i-1]
        pile_chemin_dij.append(dic_dij[som][1])
        i=i+1
        
    som = arv
    i=0
        
    while som != dep:                               #Reconstitution de Bellman
        
        som = pile_chemin_bel[i]
        pile_chemin_bel.append(dic_bel[som][1])
        i=i+1
     
    som = indice_som(arv)
        
    while nom(som) != dep:                               #Reconstitution de Floyd Warshall
        
        pred=predFW[indice_som(dep)][som]
        pile_chemin_FW.append(nom(pred))
        som=pred
        
    #affichage
    chemin_dij=[]
    chemin_bel=[]
    chemin_FW=[]
    
    for i in range(len(pile_chemin_dij)-1):
        som = pile_chemin_dij.pop(len(pile_chemin_dij)-2)
        chemin_dij.append(som)
    print("Dijkstra : chemin : ", chemin_dij, "distance : ", dic_dij[arv][0])
    
    for i in range(len(pile_chemin_bel)-1):
        som = pile_chemin_bel.pop(len(pile_chemin_bel)-2)
        chemin_bel.append(som)
    print("Bellman : chemin : ", chemin_bel, "distance : ", dic_bel[arv][0])
    
    for i in range(len(pile_chemin_FW)-1):
        som = pile_chemin_FW.pop(len(pile_chemin_bel)-2)
        chemin_FW.append(som)
    print("Floyd Warshall : chemin : ", chemin_FW, "distance : ", distFW[indice_som(dep)][indice_som(arv)])
    


    
    

