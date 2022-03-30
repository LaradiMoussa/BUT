/*
tbrierre





*/

#include "Fenetre.h"
#include "Couleur.h"
#include "Souris.h"

int main (int argc, char **argv){

    gtk_init(&argc, &argv);
    Fenetre F;

    F.apparait("cible",200,200,0,0,255,255,255);
    F.traceArc(0,0,200,200,0,360,1);
    F.delai(5000);
    F.disparait();

    return 0;}
