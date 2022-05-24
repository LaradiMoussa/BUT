import graph as g


def execute(req,date):
    if(req==1):
        g.reqAI(date)
    elif(req==2):
        g.reqAP(date)
    elif(req==3): 
        g.reqAE(date)
    else:
        g.reqAL(date)
        
#--------- MAIN ---------#
actif=True
print("\n .... Bienvenue .... \n")
while(actif):
    print("Veuillez choisir l'une des possible incohérence : ")
    print("1 | Les accidents avec un sol incoherent par rapport au temps")
    print("2 | Les accidents sous la pluie ou non")
    print("3 | Les accidents dû à un éblouissement par phare en plein jour")
    print("4 | Les accidents ayant lieu toujours au même endroit")
    choixReq=int(input("Entrez 1, 2, 3, ou 4 : "))
    while(choixReq>5 or choixReq<1):
        print("Erreur")
        choixReq=int(input("Entrez 1, 2, 3, ou 4 : "))
    choixDate=int(input("Selectionez une année entre 1984 et 1998 ou toutes(0) : "))
    while((choixDate>1998 or choixDate<1984) and choixDate!=0):
        print("Erreur")
        choixDate=int(input("Selectionez une année entre 1984 et 1998 ou toutes(0) : "))
    execute(choixReq,choixDate)
    choixQuit=int(input("Accèdez a l'acceuil(1) ou quittez(0) : "))
    while(choixQuit>1 or choixQuit<0):
        print("Erreur")
        choixQuit=int(input("\n Accèder a l'acceuil(1) ou quitter(0) : "))
    if(choixQuit==0):
        actif=False
