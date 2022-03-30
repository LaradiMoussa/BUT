def colone(M,c):
    L=[]
    for i in range (len(M)):
        L.append(M[i][c-1])
    return L

    
def scalaire(M,x):
    L=[]
    for i in range (len(M)):
        l=[]
        for j in range(len(M[1])):
            l.append(M[i][j]*x)
        L.append(l)
    return L
