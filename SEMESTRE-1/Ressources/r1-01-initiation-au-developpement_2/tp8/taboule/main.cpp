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

    bool tabool[10] = {false, false, false, false, false, false, false, false, false, false};
    char lettre;
    int i;

    // TRAITEMENTS

    cin >> lettre;
    switch (lettre)
    {
    case 'a':
        tabool[0]=true;
        break;
    case 'b':
        tabool[1]=true;
        break;    
    case 'c':
        tabool[2]=true;
        break;
    case 'd':
        tabool[3]=true;
        break;
    case 'e':
        tabool[4]=true;
        break;
    case 'f':
        tabool[5]=true;
        break;
    case 'g':
        tabool[6]=true;
        break;
    case 'h':
        tabool[7]=true;
        break;
    case 'i':
        tabool[8]=true;
        break;
    case 'j':
        tabool[9]=true;      
        break;
    }
    for (i = 0; i < 9; i++)
    {
        cout << tabool[i];
    }


    return 0;
}