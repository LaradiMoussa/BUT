import pandas as pd

def tab_add(n):
    add = []
    for i in range (n):
        add.append([])
        for j in range (n):
            add[i].append((i+j)%n)
    df = pd.DataFrame(add,columns=[i for i in range (n)],index=[j for j in range (n)])
    return(df)

def tab_mult(n):
    mult = []
    for i in range (n):
        mult.append([])
        for j in range (n):
            mult[i].append((i*j)%n)
    df = pd.DataFrame(mult,columns=[i for i in range (n)],index=[j for j in range (n)])
    return(df)
