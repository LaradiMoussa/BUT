/*
 Programme : Numéro groupe de TD
 But : Déterminer le fgroupe de TD d'un eleve en fonction de son TP 
 Date de dernière modification : 16 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int tp; // Le groupe de tp de l'eleve.
    int td; // Le groupe de td de l'eleve.

    // TRAITEMENTS
    // clavier >> saisirgroupeTp >> tp
    cout << "Saisir le numero du groupe de tp : ";
    cin >> tp;

    //tp >> definirGroupeTd >> td
    if (tp<=2) {
        td = 1; 
    }
    else if (tp<=4) {
        td = 2;
    }
    else {
        td = 3;
    }

    // td >> afficherGroupeTd >> écran
    cout << "L'eleve est dans le TD " << td << endl; 

    return 0;
}