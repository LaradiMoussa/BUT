/*
 Programme : Calculatrice
 But : Calcule valeur1 opérateur valeur2
 Date de dernière modification : 15 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double val1; // premiere valeur a calculer 
    double val2; // seconde valeur a calculer
    char oper; // valeur de l'opérateur de calcul
    double resultat;// resultat du calcul
    
    // TRAITEMENTS
    // clavier >> SaisirCalcul >> val1
    cout << "Saisir le calcul : ";
    cin >> val1 >> oper >> val2;

    //val1, val2, oper >> FaireLeCalcule >> resultat 
    switch (oper)
    {
    case '+': //Addition 
        resultat = val1+val2;
        break;

    case '-': //Soustraction
        resultat = val1-val2;
        break;

    case '*': //Multiplication
        resultat = val1*val2;
        break;

    case '/': //Division 
        if (val2==0){
            cout << "Division par 0 impossible" << endl ;
        }
        else {
            resultat = val1/val2;
        }
        break;
    
    default: //Mauvais operateur
    cout << "operateur invalide";
        break;
    }

    //resultat >> Afficherresultat >> écran
    cout << "Le resultat du calcul est : " << resultat << endl;

    return 0;
}