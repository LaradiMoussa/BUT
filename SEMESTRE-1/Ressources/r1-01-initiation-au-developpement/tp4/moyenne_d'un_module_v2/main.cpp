/*
 Programme : Calcule de moyenne de module v2
 But : Calculer les note d'un eleve au même coef jusqu'a ce que soit rentrer 999 et sortir la moyenne 
 Date de dernière modification : 30 Septembre 2021
 Auteur : P. David, T Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

using namespace std;

#include <stdlib.h>
#include <iostream>
#include <time.h> 

int main (void)
{ 
    // VARIABLES
    float note ;        // une note saisie par l'utilisateur
    int total = 0 ;     //Le nombre total de note rentrées
    float moyenne = 0 ; //La somme de tt les notes saisies puis la moyenne de l'eleve

    // TRAITEMENTS

    //Boucle de saisie des note
    while (true)
    {  
        //écran >> saisieVerifNote >> note
        cout << "Saisir une note : ";
        cin >> note ;

        if (note==999)
        {
            cout << "Fin de saisie" << endl  ;
            break ;    
        }
        else if(note<0 || note>20)
        {
            cout << "Note invalide !" << endl ;
        }
        else
        {
            moyenne += note;
            total ++ ;
            cout << "Note saisie" << endl ;
        }
    }

    if (total==0)
    {
        cout << "Pas de moyenne";
    }
    else
    {
        moyenne/=float(total) ;
        cout << "La moyenne de l'eleve est de " << moyenne ;
    }
    

    return 0;
}