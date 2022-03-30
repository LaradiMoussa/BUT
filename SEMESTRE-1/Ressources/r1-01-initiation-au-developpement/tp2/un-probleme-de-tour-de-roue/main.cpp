/*
 Programme : UnProblemeDeTourDeRoue
 But : Déterminer le nombre de tour que fera une roue de vélo pour parcourir une distance donnée
 Date de dernière modification : 15 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double rayonRoue; // Le rayon de la roue en cm.
    double distance; // La distance a parcourir en km.
    const double pi = 3.14159265; //Valeur approchée de pi .
    double nombreDeTours; // Le nombre de tour que la roue fera

    // TRAITEMENTS
    // clavier >> saisirRayonRoue >> rayonRoue
     cout << "Saisir la distance a parcourir en Km :   ";
     cin >> distance;

    // clavier >> saisirDistance >> distance
     cout << "Saisir le rayon de la roue en Cm :   ";
     cin >> rayonRoue;

    // rayonRoue, distance, pi >> CalculerLeNombreDeTours >> nombreDeTours
    nombreDeTours = 100000*distance/(2*pi*rayonRoue)  ;

    // nombreDeTours >> afficherLesNombres >> écran
    cout << "La roue fera environ " << nombreDeTours << " tours " << endl;

    return 0;
}