/*
 Programme : Afficher ligne d'étoile
 But : verifier si la note saisie est comprise entre 0 et 20
 Date de dernière modification : 24 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int i; // indice de la boucle 
    int nbreLigne ; //Le nombre de lige de 5 étoile a dessiner

    // TRAITEMENTS

    //ecran >> saisirNbreLigne >> nbreLigne
    cout << "Saisir le nombre de ligne a dessiner : ";
    cin >> nbreLigne;

    for (i = 1 ; i <=nbreLigne; i++)
    {
        cout << i << " - * * * * *" << endl ;
    }

    return 0;
}