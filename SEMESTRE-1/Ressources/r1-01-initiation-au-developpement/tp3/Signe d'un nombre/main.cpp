/*
 Programme : Signe d'un nombre
 But : Déterminer le signe d'un nombre donné
 Date de dernière modification : 15 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nbre; // Le nombre dont il  faut déterminer le signe.

    // TRAITEMENTS
    // clavier >> saisirnbre >> nbre
     cout << "Saisir un nombre : ";
     cin >> nbre;

    // nbre >> determinerSigne >> écran
    if (nbre < 0) {
        cout << "Le nombre est negatif" << endl;
    }
    else if (nbre == 0) {
        cout << "Le nombre est nul" << endl;
    }
    else {
    cout << "Le nombre est positif " << endl;
    }

    return 0;
}