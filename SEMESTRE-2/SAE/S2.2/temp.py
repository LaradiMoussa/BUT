import json

with open('donneesbus.json') as donneesbus:
    databus = json.load(donneesbus)
    
noms_arrets = list(databus.keys())

print(noms_arrets)

n=len(noms_arrets)

def voisin(nom_som):
    return databus[nom_som][2]


def indice_som(nom_som):
    ind=noms_arrets.index(nom_som)
    return ind

dic_bus={}
for nom_arret in databus.keys():
    dic_bus[nom_arret]=voisin(nom_arret)
    
mat_bus=[[0 for loop in range(n)] for loop in range(n)]
for nom_arret in noms_arrets:
    for a in voisin(nom_arret):
        mat_bus[indice_som(a)][indice_som(nom_arret)]=1
    

def nom(ind):
    nom_som=noms_arrets[ind]
    return nom_som


def latitude(nom_som):
    latitude=databus[nom_som][0]
    return latitude

def longitude(nom_som):
    longitude=databus[nom_som][1]
    return longitude



