/**
 * @file bibTableau.cpp
 * @author T.Brierre
 * @brief le corps du module bibTableau
 * @version 0.1
 * @date 2021-11-23
 * 
 * 
 */



#include "bibtableau.h"
#include <iostream>
using namespace std;


// entrées sorties
void afficher (const int tab[], unsigned short int lgTab)
{
    if (lgTab > 0)
    {
        cout << "{";
        for (unsigned short int i = 0; i<lgTab-1; i++)
        {
            cout << tab[i] << ", " ;

        };
        cout << tab[lgTab-1] << "} "<< endl;
    }
    else
    {
        cout << "tableau vide " << endl;
    }
}

// observateur

bool recherchePremiereOccDichoEntier(const int tab[], unsigned short int lgTab, int val, unsigned int& pos)
{

    bool trouve; // indique si la valeur été trouvée dans le tableau
    unsigned int borneInf; // borne inférieure de la zone de recherche
    unsigned int borneSup; // borne supérieure de la zone de recherche
    unsigned int milieu; // milieu de la zone de recherche

    // initialiser la recherche

    trouve = false;
    borneInf = 0;
    borneSup = lgTab - 1;

    // effectuer la recherche

    while (true)
    {
        if (borneInf > borneSup)
        {
            break;
        }

        //calcul du milieu
        milieu = (borneInf+borneSup) / 2;

        if (val == tab[milieu])
        {
            trouve = true;
            pos = milieu;
            break;
        }

        //progresser dans l'espace de recherche
        if (val > tab[milieu])
        {
            borneSup = milieu-1;
        }
        else
        {
            borneInf = milieu+1;
        }
    }

    return trouve;

}