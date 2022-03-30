/*
 Programme : Afficher ligne d'étoile inverser
 But : Afficher un triangle d'etoiles inverse
 Date de dernière modification : 30 Septembre 2021
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
    string etoile = "*" ;
    string maxEtoile  ; 

    // TRAITEMENTS

    //ecran >> saisirNbreLigne >> nbreLigne
    cout << "Saisir le nombre de ligne a dessiner : ";
    cin >> nbreLigne;

    maxEtoile = nbreLigne * etoile ;   

    for (i = 1 ; i <=nbreLigne; i++)
    {
        cout << i << " - * * * * *" << endl ;
    }

    return 0;
}