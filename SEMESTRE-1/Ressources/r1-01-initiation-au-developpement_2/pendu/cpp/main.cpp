/*
 Programme : JeuDuPendu
 But : Faire un parie du jeu du pendu dans les règles
 Date de dernière modification : 15 Octobre 2021
 Auteur : P. David, T Brierre
 Remarques : Code conforme aux spécification internes données en cours
*/

#include "game-tools.h"
#include <iostream>

using namespace std;

int main (void)
{

// VARIABLES

    bool jouer = true ;                  //Definit si le joueur continue a jouer ou non 
    bool presence = false;               //Definit si la lettre saisie par le joueur est dans le mot rechercher
    bool dejaSaisie = false;             //Definit si la lettre saisie par le joueur a deja été saisie ou non

    unsigned short int choix;            //Le nombre qui definie si le joueur rejoue ou non
    unsigned short int nbreEssais = 7;   //Le nombre de chance restante au joueur 
    unsigned short int categorie;        //Le chiffre de la categorie choisie par le joueur

    const unsigned short int NBMOTS = 6; // Le nombre de mots dans les tableau de mot a devinier

    string nomCategorie;                 //La chaine de carractère de la catégorie choisie par le joueur
    string lettre;                       //La lettre saisie par le joueur (n'est pas de type 'char' afin de verifier sa longueur avec 'string.size' et de s'assurer qu'une seul lettre est saise)
    string motDevine;                    //Le mot que le joueur devra deviner
    string motJoueur;                    //Le mot que le joueur saisiera le long de la partie
    string listeMauvaiseLettre;          //Une chaine de caractère qui contient toute les mauvaise lettre saisie

    
    //Les trois tableaux de taille 'NBMOTS' qui contiennent les mots en fonction de chaque categorie

    string MotInformatique[NBMOTS]={"ordinateur","programme","clavier","souris","processeur","algorithme"};

    string MotPays[NBMOTS]={"france","australie","ouzbekistan","bresil","congo","canada"};

    string MotAnimaux[NBMOTS]={"chat","tortue","elephant","crocodile","ours","aigle"};

// TRAITEMENTS

    while (jouer == true)
    {
        //INITIALISATION DU JEU
        cout << " ** Jeu du pendu **" << endl << endl;
        cout << "Choisissez une catergorie : " << endl << endl << "1-Informatique" <<endl << "2-Animaux" << endl <<"3-Pays" << endl << endl ;

        // saisiesVerifCategorie >> categorie ∈ [1,3]
        while (categorie<1 || categorie>3)
        {            
            cout << "Saisir 1, 2 ou 3 : ";
            cin >> categorie;
        }

        // categorie >> attributionMotAleatoire >> nomCategorie,MotDevine   
        switch (categorie)
        {
        case 1:
            motDevine=MotInformatique[random(0,NBMOTS-1)];
            nomCategorie="Informatique";
            break;
        case 2:
            motDevine=MotAnimaux[random(0,NBMOTS-1)];
            nomCategorie="Animaux";
            break;
        case 3:
            motDevine=MotPays[random(0,NBMOTS-1)];
            nomCategorie="Pays";
            break;
        }

        // motDevine >> definitionMotJoueur >> motJoueur
        motJoueur=motDevine;

        // motJoueur >> cachageMotJoueur >> motJoueur
        for (unsigned short int i = 0; i < int(motJoueur.size()); i++)
        {
            motJoueur[i]='-';
        }

        effacer();

        //DERROULEMENT DU JEU
        do
        {   
            // nomCategorie, motJoueur >> affichageInterface
            cout << "** Jeu du pendu **" << endl ;
            cout << "Categorie : " << nomCategorie<< endl << endl ;
            cout << "Mot a deviner : " << motJoueur << endl ;

            // nbreEssaie >> afficheNbreEssaie -- Affiche avec un couleur différente en fonction de la valeur de nbreEssaie
            if(nbreEssais > 3)
            {
                afficherTexteEnCouleur("Tentatives restantes : ", vert);
                afficherNombreEnCouleur(nbreEssais, vert);
            }
            else if (nbreEssais > 1 ){
                afficherTexteEnCouleur("Tentatives restantes : ", violet);
                afficherNombreEnCouleur(nbreEssais, violet);
            }
            else{
                afficherTexteEnCouleur("Tentatives restantes : ", rouge);
                afficherNombreEnCouleur(nbreEssais, rouge);
            }
            
            //SaisieVerifLettre >> lettre -> max 1 caractère
            while (lettre.size()!=1 || lettre[0]=='-')
            {
                cout << endl << "Choisir une lettre : ";
                cin >> lettre ;
            }

            // lettre, motJouer >> verifLettreDansMotJoueur >> dejaSaisie
            for (unsigned short int i = 0; i < int(motJoueur.size()); i++)
            {
                if (motJoueur[i]==lettre[0])
                {
                    dejaSaisie = true ;
                    cout << "Lettre '"<< lettre << "' deja trouvee dans le mot";
                    break ;
                }
            }
            
            //dejaSaisie, lettre, listeMauvaiseLettre >> verifLettreDansListeMauvaiseLettre >> dejaSaisie
            if (dejaSaisie == false)
            {
                for (unsigned short int i = 0; i < int(listeMauvaiseLettre.size()); i++)
                {
                    if (listeMauvaiseLettre[i]==lettre[0])
                    {
                        dejaSaisie = true ;
                        cout << "Lettre '" << lettre <<"' deja essayee !";
                        nbreEssais--;
                        break ;
                    }
                }
            }

            //deja,Saisie lettre, motJouer >> verifLettreDansMotDevine >> presence, listeMauvaiseLettre
            if(dejaSaisie == false)
            {
                for (unsigned short int i = 0; i < int(motDevine.size()); i++)//Ajout de la lettre dans le motJoueur si elle y est
                {
                    if (motDevine[i]==lettre[0])
                    {   
                        motJoueur[i]=lettre[0];
                        presence = true;
                    }
                }
                //presence >> afficheStatuePresenceLettre
                if (presence)
                {
                    cout << "Il y a bien un '" << lettre <<"' dans le mot";
                } 
                else
                {
                    cout << "Il n'y a pas de '" << lettre <<"' dans le mot";
                    //nbreEssais, listeMauvaiseLettre >> traitementLettreAbsente >> nbreEssais, listeMauvaiseLettre
                    listeMauvaiseLettre += lettre;
                    nbreEssais--;
                }
            }

            //dejaSaisie, presence, lettre >> reinitialisationVariablePourProchaineSaisie >>dejaSaisie, presence, lettre
            dejaSaisie=false;
            presence=false;
            lettre[0]='-';
            pause(1);
            effacer();

            // nbreEssais >> gestionDefaite
            if(nbreEssais==0)
            {
                cout << "DEFAITE !!!" << endl ;
                cout << "	 __" << endl << "        |  |" << endl << "        o  |" << endl << "       /0\\ |" << endl << "       / \\ |" << endl <<"      _____|_ "<< endl ;
                cout << "Le mot etait " << motDevine ;
                pause(2);
                break;
            }
        } while (motJoueur != motDevine);

        //FIN DU JEU
        // nbreEssais >> affichageVictoire
        if (nbreEssais!=0)
        {
            cout << "BRAVO TU AS GAGNE !!";
            pause(2);
        }
        // saisieVerifChoix >> choix
        while (choix<1 || choix>2) 
        {
            cout << endl << "Voulez vous rejouer(1) ou arreter(2) : ";
            cin >> choix ;
        }
        if(choix == 1)
        {
            //choix, categorie, listeMauvaiseLettre >> gestionRelancerPartie >> choix, categorie, listeMauvaiseLettre
            choix=0 ;
            categorie=0;
            nbreEssais = 7;
            for (unsigned short int i = 0; i < int(listeMauvaiseLettre.size()); i++)
            {
                listeMauvaiseLettre[i]='-';
            }
            effacer();
        }
            // jouer >> finDePartie >> jouer
        else
        {   
            jouer=false;
        }
    }
    return 0;
}