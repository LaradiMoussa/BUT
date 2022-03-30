/*
 Programme : Saisie Verif d'une note
 But : verifier si la note saisie est comprise entre 0 et 20
 Date de dernière modification : 23 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    float note ; //La note a saisir sur [0,20]

    // TRAITEMENTS

    do{
        //ecran >> saisirNote >> note
        cout << "Saisir une note comprise entre 0 et 20 incluts : ";
        cin >> note;
    }
    while (note<0 || note>20);
    
    return 0;
}