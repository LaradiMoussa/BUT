/*
 Programme : 
 But :  
 Date de dernière modification : 
 Auteur : T.Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

float valeurAbsolue(float nb);

int main (void)
{
    float x;

    cout << "Saisissez un nombre : ";
    cin >> x;
    cout << valeurAbsolue(x);

    return(0);
}

float valeurAbsolue(float nb)
{
    return(nb>0?nb:-nb);
}