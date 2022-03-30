/*
 Programme : Manipulation de carte a jouer
 But : Comparer des cartes a jouer
 Date de dernière modification : 07 Octobre 2021
 Auteur : P. David
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{ 
    short int i ;
    string saisievalcart;
    string saisiecoulcart;

    //VARIABLES
    enum Valeur {deux,trois,quatre,cinq,six,sept,huit,neuf,dix,valet,dame,roi,as}; //Type de valuer de toute les cartes 
    enum Couleur {carreau,coeur,trefle,pique}; //Type des couleur des cartes

    //Definition des carte a jouer
    struct carte
    {
        Valeur valcart; //La valeur de la carte
        Couleur coulcart;//la couleur de la carte
    };

    const unsigned short int NB_CARTES= 2 ;
    carte jeuxCartes [NB_CARTES];

    //TRAITEMENTS

    for ( i = 1; i<=NB_CARTES; i++)
    {   
        //Définition de la valeur d'une carte
        cout << "Saisir valeur de la carte Numero "<< i << " : ";
        cin >> saisievalcart;
        jeuxCartes[i]=;
        if (saisievalcart == "deux")
        {
            i.valcart=deux;
        }


        cout << "Saisir couluer de la carte Numero "<< i << " : ";
        cin >> saisiecoulcart;
    }
    
    


return 0;
}