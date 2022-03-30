/*
 Programme : EchangeDeDeuxNombre
 But : Echanger deux nombre entrée au clavier
 Date de dernière modification : 15 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nombre1; // Le nombre a échanger avec le nombre 2.
    double nombre2; // Le nombre a échanger avec le nombre 1.
    double copieNombre1; // Le taux de conversion utilisé pour convertir des euros en dollars.

    // TRAITEMENTS
    // clavier >> saisirNombre1 >> nombre1
     cout << "Entrez la valeur du nombre 1 :   ";
     cin >> nombre1;

    // clavier >> saisirNombre2 >> nombre2
     cout << "Entrez la valeur du nombre 2 :   ";
     cin >> nombre2;

    // nombres 1, nombre2, copieNombre1 >> EchangerLesNombres >> nombre 1 ,nombre2
    copieNombre1 = nombre1 ;
    nombre1 = nombre2 ;
    nombre2 = copieNombre1 ;

    // nombre1 , nombre2 >> afficherLesNombres >> écran
    cout << "Apres echange le nombre 1 =  " << nombre1 << " et le nombre 2 =  " << nombre2 << endl;

    return 0;
}