/*
 Programme : Saisie Verif d'une note avec message d'erreur
 But : verifier si la note saisie est comprise entre 0 et 20 et affiche une erreur sinon 
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

    //Affichage Message demande note
    cout << "Saisir une note comprise entre 0 et 20 incluts : ";
    

    while(true){
        //ecran >> saisirNote >> note
        cin >> note;

        //condition d'arrêt
        if (note>=0 && note<=20){
            break;
        }
        //Affichage redemande de note
        cout << "La valeur doit etre comprise entre 0 et 20. Recommencez : ";
    }
    
    //Affiche remerciment
    cout << "Merci" << endl;
    
    return 0;
}