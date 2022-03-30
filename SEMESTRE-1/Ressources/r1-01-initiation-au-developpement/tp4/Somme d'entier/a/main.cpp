/*
 Programme : Somme d'entier sur un intervalle
 But : Additionner tout les entier de 1 a une borne max
 Date de dernière modification : 23 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int i; // indice de la boucle 
    int borneSup ; //La valeur de la borne supérieur de l'inervalle
    int somme ;    //La valeur de la somme de tout les entier de 1 à borneSup

    // TRAITEMENTS

    //Initialision de somme
    somme = 0;
    
    //ecran >> SaisirBorne >> borneSup
    cout << "Saisir la borne maximal de l'intervalle : ";
    cin >> borneSup;

    //borneSup, i >> calculSomme >> somme
    for (i = 0 ; i <= borneSup; i++)
    {
        somme += i ;
    }

    // somme borneSup >> AfficherSomme >> écran
    cout << "La somme des entier de 1 a " << borneSup << " est de : " << somme ;
    
    return 0;
}