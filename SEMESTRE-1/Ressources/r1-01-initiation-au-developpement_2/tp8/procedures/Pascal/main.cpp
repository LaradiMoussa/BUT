/*
 Programme : 
 But :  
 Date de dernière modification : 
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

void afficherPascal(int nbColonnes, int nbLignes, int tabPascal[50][50]);

int main (void)
{

    int tabPascal[50][50];
    int nbColonnes;
    int nbLignes;

    for ( int i = 0; i < 50; i++)
    {
        for ( int j = 0; j < 50; j++)
        {
            tabPascal[i][j]=0;
        }
        
    }
    

    cout << "Saisir le nombre de lignes voulues : "; cin >> nbLignes;
    nbColonnes = nbLignes;

    afficherPascal(nbColonnes, nbLignes, tabPascal);


    return 0;
}

void afficherPascal(int nbColonnes, int nbLignes, int tabPascal[50][50])
{
    int indiceLigne;
    int indiceColonne;
    int val;

    val = 0;

    for ( indiceLigne = 0; indiceLigne < nbLignes; indiceLigne++)
    {
        cout << endl;
        for (indiceColonne = 0; indiceColonne < nbColonnes; indiceColonne++)
        {
            if (indiceLigne == indiceColonne)
            {
                val = 1;
                tabPascal[indiceLigne][indiceColonne] = val;
                cout << " " << val;
                break;
            }

            else if (indiceColonne < 1)
            {
                val = 1;
                tabPascal[indiceLigne][indiceColonne] = val;
                cout << " " << val;
            }

            else if (indiceLigne < 1)
            {
                val = 1;
                tabPascal[indiceLigne][indiceColonne] = val;
                cout << " " << val;
            }
            
            else
            {
                val = tabPascal[indiceLigne-1][indiceColonne] + tabPascal[indiceLigne-1][indiceColonne-1];
                tabPascal[indiceLigne][indiceColonne] = val;
                cout << " " << val;
            }
        }
    }
}