import json

with open('donneesbus.json') as donneesbus:
    databus = json.load(donneesbus)
    
noms_arrets = list(databus.keys())
    
print(noms_arrets)