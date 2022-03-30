/*
 Programme : Somme d'entier sur un intervalle
 But : Additionner tout les entier de borne inferieur a une borne max
 Date de dernière modification : 2400 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int i; // indice de la boucle 
    int borneInf ; //La valeur de la borne inférieur de l'inervalle
    int borneSup ; //La valeur de la borne supérieur de l'inervalle
    int somme ;    //La valeur de la somme de tout les entier de 1 à borneSup

    // TRAITEMENTS

    //Initialision de somme
    somme = 0;
    
    //ecran >> saisirBorneInf >> borneInf
    cout << "Saisir la borne minimal de l'intervalle : ";
    cin >> borneInf;

    //ecran >> saisirBorneSup >> borneSup
    cout << "Saisir la borne maximal de l'intervalle : ";
    cin >> borneSup;

    if (borneInf < borneSup){
        //borneInf, borneSup, i >> calculSomme >> somme
        for (i = borneInf ; i <= borneSup; i++)
        {
            somme += i ;
        }
        // somme, borneInf, borneSup >> AfficherSomme >> écran
        cout << "La somme des entier de " << borneInf << " a " << borneSup << " est de : " << somme ;
    
    }

    else{
        somme = 0 ;
        // somme, borneInf, borneSup >> AfficherSomme >> écran
        cout << borneSup <<" est inferieur a " << borneInf << " et c'est pas bien ";
    }

    return 0;
}