/*
 Programme : Validation d'un module
 But : Déterminer si un eleve a valider un module en fonction de ses notes
 Date de dernière modification : 16 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    float oral; // La note d'oral de l'eleve.
    float ecrit; // La note d'ecrit de l'eleve.
    float moyenne; // La moyenne de l'eleve

    // TRAITEMENTS
    // clavier >> saisirNoteOral >> oral
    cout << "Saisir la note de l'oral : ";
    cin >> oral;

    // clavier >> saisirNoteEcrit >> ecrit
    cout << "Saisir la note de l'ecrit : ";
    cin >> ecrit;

    // oral, ecrit >> calculMoyenne >> moyenne
    moyenne = (oral+(2*ecrit))/3;

    //moyenne >> afficherResultat >> écran
    if (moyenne>=10) {
        cout << "Recu" << endl ; 
    }
    else {
        cout << "Non recu" << endl ;
    }
    return 0;
}