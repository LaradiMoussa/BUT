/*
 Programme : Opération de base sur les tableau
 But : Jouer avec des tableau
 Date de dernière modification : 07 Octobre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{

    //VARIABLES

    short int i ; //Iteration i

    const unsigned short int NB_CASES= 12 ;//Nombre de case du tableau de temperature
    float tabTemp [NB_CASES];              //Tableau de 12 Temperature

    const unsigned short int NB_LETRES= 4 ;//Nombre de case du tableau de lettre
    char tabLetre [NB_LETRES]={'a','b'};   //Tableau de 4 lettre avec initialisation des deux premiere

    //Assignation de valeur dans la 2eme et 3eme case du tableau
    tabLetre[2]='c';
    tabLetre[3]='d';

    //TRAITEMENTS

    //tabLettre >> AffichageTabLettre >> écran
    cout << "Lettre en deuxieme position : " << tabLetre[1] << "et en troisieme : " << tabLetre[2] << endl ;

    //Affectation par l'utilisateur de tout le tableau tabTemp
    for ( i = 0; i < NB_CASES ; i++)
    {
        cout << "Saisir temperature numero " << i+1 << " : ";
        cin >> tabTemp[i];
    }

return 0;
}