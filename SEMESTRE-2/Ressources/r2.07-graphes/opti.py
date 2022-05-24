P=[[float('inf'),10,float('inf'),float('inf'),5],
   [float('inf'),float('inf'),1,float('inf'),2],
   [float('inf'),float('inf'),float('inf'),4,float('inf')],
   [7,float('inf'),6,float('inf'),float('inf')],
   [float('inf'),3,9,2,float('inf')]]



def lst_succ(M,s):
    lst_succ=[]
    for i in range(len(M)):
        if M[i][s] == 1:
            lst_succ.append(i)
    return(lst_succ)

def nb_pred(M,s):
    n=len(M)
    nbPred=0
    for i in range(n):
        if(M[i][s]==1):
            nbPred=nbPred+1
    return nbPred

def poidsAdj(P):
    n=len(P)
    M=[[0 for i in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            if(P[i][j]!=float('inf')):
                M[i][j]=1
    return M
           

def dijkstra(P,s):
    n=len(P)
    som=[s]
    M=poidsAdj(P)
    lstPred=[]
    for i in range(n):
        lstPred.append(nb_pred(M,i))
    dist=[]
    aTraiter=[True]*n
    while True in aTraiter:
        dist.append([0]*n)
        for i in range(len(som)):
            s=som.pop(0)
            for succ in lst_succ(M,s):
                if P[s][succ] + dist[s][i]  < dist[succ][i]:
                    dist[succ][i] = P[s][succ] + dist[s][i]
                    lstPred[succ][i] = s
    return dist 



        