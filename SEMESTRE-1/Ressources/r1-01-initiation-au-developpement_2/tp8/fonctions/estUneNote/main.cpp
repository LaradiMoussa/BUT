/*
 Programme : 
 But :  
 Date de dernière modification : 
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

bool estUneNote(float nb);

int main (void)
{
    float note;

    cout << "Saisissez une note : ";
    cin >> note;
    cout << (estUneNote(note)?"est bien une note":"n'est pas une note");

    return(0);
}

bool estUneNote(float nb)
{
    bool resultat;
    if (nb >= 0 && nb <= 20)
    {
        resultat = true;
    }
    else
    {
        resultat = false;
    }
    return resultat;
}

