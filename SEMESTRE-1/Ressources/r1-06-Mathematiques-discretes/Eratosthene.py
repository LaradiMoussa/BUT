import timeit 
import math as m
import matplotlib.pyplot as plt

def nbpremier(n):
    for i in range (2,m.floor(m.sqrt(n))+1):
        if n%i==0:
            return False
    return True

def eratosthene(n):
    Liste=[]
    for i in range (2,n+1):
        if nbpremier(i) :
            Liste.append(i)
    return Liste


entier = [i for i in range(0,10000,10)]
temps = []
for i in entier:
    debut = timeit.default_timer()
    eratosthene(i)
    fin = timeit.default_timer()
    duree = fin - debut
    temps.append(duree)
    
plt.plot(entier,temps)
plt.show()

