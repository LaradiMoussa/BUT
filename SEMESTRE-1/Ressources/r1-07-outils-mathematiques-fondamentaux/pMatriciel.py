def pMatriciel(MA,MB):
    la=len(MA)
    ca=len(MA[0])
    lb=len(MB)
    cb=len(MB[0])
    p=[]
    for i in range (la):
        for j in range (lb):
            p.append([])
            for k in range (ca):
                p[j].append(MA[k][i]*MB[j][k])
    return p