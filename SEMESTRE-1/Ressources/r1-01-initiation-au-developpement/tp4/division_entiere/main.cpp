/*
 Programme : Division entière
 But : Donner le quotien et le reste d'une division en n'utilisant que l'addition et la soustraction 
 Date de dernière modification : 24 Septembre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    unsigned long long int diviseur; // Le divisieur de la division 
    unsigned long long int dividende;// Le dividende de la division 
    int quotient = 0; // Le quotient de la division 

    // TRAITEMENTS

    //ecran >> SaisirDividende >> dividende
    cout << "Saisir le dividende : ";
    cin >> dividende;

    //ecran >> SaisirDiviseur >> diviseur
    cout << "Saisir le diviseur : ";
    cin >> diviseur;

    do{
        dividende-=diviseur;
        quotient++;
    }
    while (dividende>=diviseur);

    cout << "La division a pour quotien " << quotient << " et pour reste " << dividende;

    return 0;
}