#include <iostream>
#include "sousProgrammes.h"
#include "fichierTexte.h"
using namespace std;

void produireMoyenne (string nomSysFic)
{
    UnFichierTexte fic;
    associer(fic, nomSysFic);
    ouvrir(fic, consultation);
    int mot;
    bool finFichier;
    float moyenne;
    int compteur;

    moyenne = 0;
    compteur = 0;


    do
    {
        lireMot(fic, mot, finFichier);
        compteur += 1;
        moyenne+=mot;

    }while (!finFichier);

    if (compteur > 1)
    {
        moyenne = moyenne/compteur;
    }
    
    cout << moyenne << endl << compteur;

    fermer(fic);
}


