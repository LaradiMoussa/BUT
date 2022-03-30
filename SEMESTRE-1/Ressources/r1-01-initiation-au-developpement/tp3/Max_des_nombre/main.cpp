/*
Programme : Max de deux nombres
But : Trouver le plus grand nombre de deux nombre saisi
Date de dernière modification : 16 Septembre 2021
Auteur : P. David
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int nbre1; // Le nombre 1 a comparer.
    int nbre2; // Le nombre 2 a comparer.
    int max; // La valeur du plus grand nombre

    // TRAITEMENTS
    // clavier >> saisirNbre1 >> nbre1
    cout << "Saisir le premier nombre : ";
    cin >> nbre1;

    // clavier >> saisirNbre2 >> nbre2
    cout << "Saisir le second nombre : ";
    cin >> nbre2;

    //tp >> definirMax >> max
    if (nbre1>nbre2) {
        max = 0; 
    }
    else if (nbre1==nbre2) {
        max = 1;
    }
    else {
        max = 2;
    }

    // td >> afficherMax >> écran
    switch (max)
    {
    case 0:
        cout << "Le plus grand nombre est " << nbre1 << endl ;
        break;

    case 1:
        cout << "Les deux nombre sont egaux" << endl ;
        break;
    
    default:
        cout << "Le plus grand nombre est " << nbre2 << endl ;
        break;
    }

    return 0;
}