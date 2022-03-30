/*
 Programme : CalculePromo
 But : Calcule le prix d'un produit apres la reduction en pourcentage
 Date de dernière modification : 15 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double prixProduit; // Le prix initial du produit.
    double pourcentage; // La valeur de la promotion en pourcent.
    double prixReduit; // Le prix du produit apres reduction.

    // TRAITEMENTS
    // clavier >> saisirPrixProduit >> prixProduit
     cout << "Saisir le prix du produit en euro : ";
     cin >> prixProduit;

    // clavier >> saisirPourcentage >> pourcentage
     cout << "Saisir la promotion en pourcentage : ";
     cin >> pourcentage;

    // prixProduit, pourcentage >> CalculerLePrixReduit >> prixReduit
    prixReduit = prixProduit*(1-(pourcentage/100))  ;

    // prixReduit >> afficherLePrixReduit >> écran
    cout << "Le prix apres reduction est de :  " << prixReduit << " euro " << endl;

    return 0;
}