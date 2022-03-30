def decomp(n):
    l = []
    for i in range (2, n+1):
        while n%i==0:
            l.append(i)
            n=n/i
    return l
    
