 /*
 Programme : 
 But :  
 Date de dernière modification : 
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

#include "game-tools.h"
#include <iostream>
using namespace std;

bool courseLT(void);

int main (void)
{
    for (int i=0; i<10; i++)
    {
        cout << (courseLT()?"Le lapin a gagne !":"La tortue a gagne !");
        cout << endl;
    }

    return 0; 
}

bool courseLT(void)
{
    int avanceTortue = 0;
    int intMax = 6;
    int de;
    bool resultat = false;

    cout << endl;

    while (avanceTortue < intMax)
    {
        de = random(0, intMax);
        if (de == 6)
        {
            resultat = true;
            break;
        }
        else
        {
            cout << "La tortue avance d'une case !" << endl;
            avanceTortue++;
            if (avanceTortue == intMax)
            {
                break;
            }
        }
    }
    return resultat;

}