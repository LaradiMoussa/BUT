def gauss(coeff):
    for i in range(len(coeff)-1):
        pivot = coeff[i][i]
        if (pivot != 0):
            for j in range(len(coeff[i])-1):
                annul = coeff[j+1][i]
                if (annul != 0):
                    coeff[j+1][j]=coeff[j+1][j]-(annul/pivot*coeff[i][j])
                    print(coeff)
                    
def remontee(t,v):
    x=v
    som=0
    long=len(v)-1
    for i in range(long):
        if(i>0):
            for j in range(i):
                som = som - (t[long-i][j]*x[long-i+j])
        x[long-i] = (v[long-i] - som) / t[long-i]
    print(x)