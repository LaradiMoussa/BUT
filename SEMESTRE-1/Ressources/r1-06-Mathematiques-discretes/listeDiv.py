def listeDiv(nombre):
    L = []
    for i in range (1, nombre+1):
        if (nombre%i) == 0:
            L.append(i)
            if len(L) == 2:
                print ("C'est un nombre premier !")
    return L
