/*
 Programme : JeuxDesMultiples
 But : Faire un parie du jeu des muliples dans les règles
 Date de dernière modification : 02 Octobre 2021
 Auteur : P. David, T Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

using namespace std;

#include <stdlib.h>
#include <iostream>
#include <time.h> 

int main (void)
{

    // VARIABLES 
    unsigned long int nbreDepart; //Le nombre dont le joueur doit trouver le multiple
    int score;                    //Le nombre de fois que le joueur a répondu correctement 
    unsigned long int multiple;   //La valeur saisie par le joueur pour trouver un multiple à la valeur de départ
    int difficulte;               //Le nombre de fois que le joueur doit répondre correctement pour gagner
    int defaite;                  //Définis la raison de la défaite (s’il y a défaite) ou la victoire

    // TRAITEMENTS
    
//INITIALISATION DU JEU

    // Initialisation du score
    score = 0;

    // Initialisation de defaite 
    defaite = 0;

    // Initialisation d'une graine aléatoire 
    srand ((unsigned long int) time(NULL)); 

    // Nombre aléatoire entre 6 et 29 pour nbreDepart
    cout << "Generation du nombre de depart : "; 
    nbreDepart = rand() % 23 + 6 ; //séléction d'un nombre aléatoire
    cout << nbreDepart << endl ;

    //clavier >> SaisirDifficulte >> difficulte
    // La difficulte doit être supérieur ou égal à 1 
    do{
        cout << "Choisir le nombre de multiple que vous allez donner (Minimum 1) : ";
        cin >> difficulte;
    }
    while(difficulte<1);

//DERROULEMENT DU JEU

    do{
        // clavier >> SaisirMultile >> multiple
        cout << "Saisir un multiple superieur a "<< nbreDepart << " : "; 
        cin >> multiple;

        // Vérification de la réponse

        //Bonne réponse
        if(multiple>nbreDepart && multiple%nbreDepart==0){
            cout << "Bien joue !!" << endl ; 
            score++;
            nbreDepart=multiple;
        }
        //Mauvaise réponse
        else{
            cout << "Mauvaise reponse dommage !! ";

            difficulte=score; //Pour briser la boucle en cas de défaite

            //Définition du type de defaite

            if(multiple<=nbreDepart && multiple%nbreDepart==0){
                defaite=1;
            }
            else if(multiple>nbreDepart && multiple%nbreDepart!=0){
                defaite=2;
            }
            else{
                defaite=3;
            }
        }
    }
    while(difficulte!=score);

//FIN DU JEU

    // defaite << affichageMessageDeFin << écran
    switch (defaite)
    {
    case 0:
        cout << "Victoire !! ";
        break;

    case 1:
        cout << "Perdu ! Vous avez donne un nombre egal ou inferieur a " << nbreDepart << endl ;
        break;

    case 2:
        cout << "Perdu ! Vous avez donne un mauvais multiple de " << nbreDepart << endl ;
        break;

    default:
        cout << "Perdu ! Vous avez donne un nombre qui est inferieur et qui n'est pas un multiple de " << nbreDepart << endl ;
        break;
    }
    // score << affichageScore << écran
    cout << "Vous aviez un score de " << score << " point(s)." << endl ;
    return 0;
}