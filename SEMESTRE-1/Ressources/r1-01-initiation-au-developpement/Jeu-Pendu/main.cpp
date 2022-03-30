/*
 Programme : 
 But :  
 Date de dernière modification : 
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    string Themes [2][5] = {};
    unsigned short int noTheme;
    unsigned short int noMot;

    // TRAITEMENTS

    cout << "*** Jeu du pendu ***" << endl << endl; 
    do
    {
        cout << "Choisissez un thème (entrez le numero pour choisir) : " << endl << "1 - Informatique" << endl << "2 - Animaux" << endl << " 3 - Aliments" << endl << endl << "Votre choix : ";
        cin >> noTheme;

    } while (noTheme < 1 || noTheme > 3);
    
        

    return 0;
}