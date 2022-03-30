#include <iostream>
using namespace std;
#include "pile.h"

int main()
{
    //Déclaration et initialisation de la pile
    UnePile maPile;
    initialiser(maPile);

    // Déclaration et peulement d'un tableau 
    const unsigned int TAILLE = 6;
    int monTab [TAILLE] = {0, 1, 2, 3, 4, 5};

    // maPile, monTab >> remplir pile >> maPile
    for (unsigned int i = 0 ; i < TAILLE; i++)
    {
        empiler(maPile, monTab[i]);
    }

    // Affichage du contenu de la pile
    // AVEC OBSERVATEUR estVide() 
    while (!estVide(maPile))
    {
        cout << sommet(maPile) << "... " ; depiler(maPile);
    }

    cout << endl << "au revoir..." << endl;
   
    return 0;
}

