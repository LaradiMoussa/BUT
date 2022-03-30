/*
 Programme : echangerDeuxNombres
 But :  
 Date de dernière modification : 18/10/2021
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

void echangeDeuxEntiers(int &entier1, int& entier2);

int main(void) // programme principal 
{

    // variables du programme principal
    int ent1; // le prix initial
    int ent2; // le pourcentage de reduction

    

    // (clavier)  >> saisir les nombres a echanger >> ent1, ent2
    cout << "Saisir le premier entier : "; cin >> ent1;
    cout << endl << "Saisir le deuxieme entier : "; cin >> ent2;

    // appel de la procédure echangeDeuxEntiers
    echangeDeuxEntiers(ent1, ent2);
    return 0;
}

//Echange des deux entiers
void echangeDeuxEntiers(int &entier1, int &entier2)
{
    //declaration d'une variable enregistrant la valeur de l'entier 2
    int cpentier2;

    //echange des valeurs des entiers
    cpentier2 = entier2;
    entier2 = entier1;
    entier1 = cpentier2;

    //affichage des valeurs echangees 
    cout << entier1 << endl << entier2;
}