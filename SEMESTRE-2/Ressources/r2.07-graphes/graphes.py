def lst_succ(M,s):
    
    lst_succ=[]
    for i in range(len(M)):
        if M[i][s] == 1:
            lst_succ.append(i)
    return(lst_succ)


def parcours_largeur(M,s0):
    
    n=len(M)
    vu=[False]*n
    pred=[None]*n
    
    vu[s0]=True
    file=[s0]
    
    while file!=[]:
        s=file.pop(0)
        for succ in lst_succ(M,s):
            if vu[succ]==False:
                vu[succ]=True
                pred[succ]=s
                file.append(succ)
    return(pred)

def parcours_profondeur(M,s0):
    
    n=len(M)
    vu=[False]*n
    pred=[None]*n
    
    vu[s0]=True
    pile=[s0]
    
    while pile!=[]:
        s=pile.pop(len(pile)-1)
        for succ in lst_succ(M,s):
            if vu[succ]==False:
                vu[succ]=True
                pred[succ]=s
                print(succ)
                pile.append(succ)
    return(pred)