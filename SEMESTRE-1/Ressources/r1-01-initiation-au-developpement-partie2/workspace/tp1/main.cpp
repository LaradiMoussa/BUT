 /*
 Programme : test du module Fractions
 But :  Tester la conformité de chaque fonctionnalité du module Fractions
        par rapport aux jeux d'essais prévus
 Date de dernière modification : 17/11/2021
 Auteur : T. Brierre
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - td n°2
*/

#include "fractions.h"
#include <iostream>
using namespace std;


// Declaration des sous programmes de tests

void testAfficher();

int main()
{

    afficher(additionner(saisir(), saisir()));

    return 0;
}

// Definition des programmes de tests

void testAfficher()
{
    afficher(FRACTION_NULLE);
}

