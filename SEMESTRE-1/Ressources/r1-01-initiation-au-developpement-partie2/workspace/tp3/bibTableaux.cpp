/**
 * @file bibTableaux.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "personne.h"
#include "bibTableaux.h"

void faireMonterLaBulleIci(int tab[], unsigned int ici);

void faireMonterLaBulleIci(Personne tab[], unsigned int ici);

void insererValeur(int tab[], int valeurAInserer, unsigned int i);

void afficher (const Personne tab[],
               unsigned short int lgTab)
{
    if (lgTab > 0)
    {
        cout << "{" << endl;
        for (unsigned short int i = 0; i<lgTab-1; i++)
        {
            afficher(tab[i]) ;
            cout << ", "<< endl ;
        };
        afficher (tab[lgTab-1]);
        cout << endl <<  "} "<< endl;
    }
    else
    {
        cout << "tableau vide " << endl;
    }
}

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

void triBulle(int tab[], unsigned int nbTab)
{
    for ( unsigned int ici = nbTab-1; ici>0; ici--)
    {
        faireMonterLaBulleIci(tab, ici);
    }
    
}

void faireMonterLaBulleIci(int tab[], unsigned int ici)
{
    int copieValeurInferieure; // variable tampon 
    for ( unsigned int j = 0; j < ici; j++)
    {
        if (tab[j]>tab[j+1])
        {
            copieValeurInferieure = tab[j+1];
            tab[j+1] = tab[j];
            tab[j] = copieValeurInferieure;
        }
        
    }
    
}

void triBulle(Personne tab[], unsigned int nbTab)
{
    for ( unsigned int ici = nbTab-1; ici>0; ici--)
    {
        faireMonterLaBulleIci(tab, ici);
    }
    
}

void faireMonterLaBulleIci(Personne tab[], unsigned int ici)
{
    Personne copiePersonne; // variable tampon 
    for ( unsigned int j = 0; j < ici; j++)
    {
        if (tab[j].nom>tab[j+1].nom)
        {
            copiePersonne = tab[j+1];
            tab[j+1] = tab[j];
            tab[j] = copiePersonne;
        }
        
    }
    
}

void triParInsertion(int tab[], unsigned int nbTab)
{
    int valeurAInserer;
    for (unsigned int i = 1; i < nbTab; i++)
    {
        valeurAInserer = tab[i];
        insererValeur(tab, valeurAInserer, i);
    }
    
}

void insererValeur(int tab[], int valeurAInserer, unsigned int i)
{
    do
    {
        tab[i] = tab[i-1];
        i = i-1;
    } while (i > 0 && tab[i-1] > valeurAInserer);
    tab[i] = valeurAInserer;
}

void triParSelectionDePlace(int tab[], unsigned int nbTab)
{
    
}