/***************************************************************
 * Name:      chifoumiMain.h
 * Author:    P.Dagorret ()
 * Created:   2021-05-10
 * Description : classe m�tier (= mod�le) Chifoumi-v1
 **************************************************************/
#include "chifoumi.h"

#include <cstdlib>
#include <ctime>


    ///* ---- PARTIE MOD�LE ---------------------------

Chifoumi::Chifoumi()
{
    coupJoueur = rien;
    coupMachine = rien;
    scoreJoueur = 0;
    scoreMachine = 0;

}

Chifoumi::~Chifoumi()
{
    delete [] (this);
}

        /// Getters

Chifoumi::UnCoup Chifoumi::getCoupJoueur() {
	return (*this).coupJoueur;
}

Chifoumi::UnCoup Chifoumi::getCoupMachine() {
	return (*this).coupMachine;
}

unsigned int Chifoumi::getScoreJoueur() {
	return (*this).scoreJoueur;
}

unsigned int Chifoumi::getScoreMachine() {
	return (*this).scoreMachine;
}

char Chifoumi::determinerGagnant()
{
    char gagnantARetourner;

    // avant de commencer : match nul
    gagnantARetourner = 'N';

    switch(getCoupJoueur()){
        case pierre :
            if (getCoupMachine() == papier){
                gagnantARetourner = 'M';
            }

            else if (getCoupMachine() == ciseau){
                gagnantARetourner = 'J';
            }
            break;

        case papier :
            if (getCoupMachine() == ciseau){
                gagnantARetourner = 'M';
            }

            else if (getCoupMachine() == pierre){
                gagnantARetourner = 'J';
            }
            break;

        case ciseau :
            if (getCoupMachine() == pierre){
                gagnantARetourner = 'M';
            }

            else if (getCoupMachine() == papier){
                gagnantARetourner = 'J';
            }
            break;
    }


    return gagnantARetourner;
}

         ///* M�thodes utilitaires du Mod�le

int randMinMax(int min, int max){
    /* pr�-condition : min<max ;
       Le nbre al�atoire est compris entre [min, max[ */
   return rand()%(max-min) + min;
}

Chifoumi::UnCoup Chifoumi::genererUnCoup()
{
    UnCoup valeurGeneree;   // valeur � retourner

	valeurGeneree = rien;
    return valeurGeneree;
}

        /// Setters

void Chifoumi::setCoupJoueur(UnCoup p_coup) {
    (*this).coupJoueur = p_coup;
}

void Chifoumi::setCoupMachine(UnCoup p_coup) {
    (*this).coupMachine = p_coup;
}

void Chifoumi::setScoreJoueur(unsigned int p_score) {
    (*this).scoreJoueur = p_score;
}

void Chifoumi::setScoreMachine(unsigned int p_score) {
    (*this).scoreMachine = p_score;
}

void Chifoumi::majScores(char p_gagnant) {
    if (p_gagnant == 'J'){

        setScoreJoueur(getScoreJoueur() +1);
    }

    else if (p_gagnant == 'M'){

        setScoreMachine(getScoreMachine() +1);
    }
}

void Chifoumi::initScores() {
    setScoreMachine(0);
    setScoreJoueur(0);
}

void Chifoumi::initCoups() {
    setCoupJoueur(rien);
    setCoupJoueur(rien);  
}
