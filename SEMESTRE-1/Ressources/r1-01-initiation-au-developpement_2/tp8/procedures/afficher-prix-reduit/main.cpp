/*
 Programme : afficherPrixReduit
 But :  
 Date de dernière modification : 18/10/2021
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void) // programme principal 
{
    // variables du programme principal
    float prixInitial; // le prix initial
    unsigned short int reduction; // le pourcentage de reduction

    // (clavier)  >> saisir le prix initial et le poucentage de reduction >> prixInitial, reduction
    cout << "Saisir le prix initial : "; cin >> prixInitial;
    cout << endl << "Saisir la reduction : "; cin >> reduction;

    // appel de la procédure afficherPrixReduit
    afficherPrixReduit(prixInitial, reduction);
    return 0;
}


//Afficher un prix réduit à partir d'un prix initial et d'une reduction
void afficherPrixReduit(float prixInitial, unsigned short int reduction)
{
    cout << endl << prixInitial*(1.0-reduction/100.0) << endl;
}