/*
 Programme : test du module bibTableauxEntiers
 But :  Tester la conformité de chaque fonctionnalité du module bibTableauxEntiers
        par rapport aux jeux d'essais prévus
 Date de dernière modification : 23/11/2021
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - TD n°3
*/

#include "bibtableau.h"
#include <iostream>
using namespace std;

int main()
{
    const int NB_CASES = 5;
    int tab[NB_CASES] = {1,2,3,4,5};
    int val;
    unsigned int pos;

    val = 2;
    afficher(tab,NB_CASES);
    recherchePremiereOccDichoEntier(tab,NB_CASES,val, pos);
    cout << pos;

    return 0;
}