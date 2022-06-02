#include "chifoumi.h"

#include <cstdlib>
#include <ctime>

chifoumi::chifoumi()
{
    (*this).SelectJoueur = rien;
    (*this).SelectMachine = rien;
    (*this).ScoreJoueur = 0;
    (*this).ScoreMachine = 0;
}

chifoumi::~chifoumi()
{
    delete [] (this);
}

chifoumi::UnCoup chifoumi::getSelectJoueur()
{
    return (*this).SelectJoueur;
}

chifoumi::UnCoup chifoumi::getSelectMachine()
{
    return (*this).SelectMachine;
}

unsigned int chifoumi::getScoreJoueur()
{
    return (*this).ScoreJoueur;
}

unsigned int chifoumi::getScoreMachine()
{
    return (*this).ScoreMachine;
}

char chifoumi::determinerGagnant()
{
    char gagnantARetourner;

    gagnantARetourner = 'N';

    switch (getSelectJoueur())
    {
    case (Pierre):
        if (getSelectMachine() == Feuille)
        {
            gagnantARetourner = 'M';
        }
        else if (getSelectMachine() == Ciseaux)
        {
            gagnantARetourner = 'J';
        }
        break;

    case (Feuille):
        if (getSelectMachine() == Ciseaux)
        {
            gagnantARetourner = 'M';
        }
        else if (getSelectMachine() == Pierre)
        {
            gagnantARetourner = 'J';
        }
        break;

    case (Ciseaux):
        if (getSelectMachine() == Pierre)
        {
            gagnantARetourner = 'M';
        }
        else if (getSelectMachine() == Feuille)
        {
            gagnantARetourner = 'J';
        }
        break;
    }
    return gagnantARetourner;
}

int randMinMax(int min, int max)
{
    return rand()%(max-min) + min;
}

chifoumi::UnCoup chifoumi::genererUnCoup()
{
    UnCoup valeurGeneree;
    unsigned int nbAleatoire;
    nbAleatoire = randMinMax(1,4);
    switch (nbAleatoire)
    {
    case 1:
        valeurGeneree = Pierre;
        break;
    case 2:
        valeurGeneree = Feuille;
        break;
    case 3:
        valeurGeneree = Ciseaux;
        break;
    }
    return valeurGeneree;
}

void chifoumi::setSelectJoueur(UnCoup p_coup)
{
    (*this).SelectJoueur = p_coup;
}

void chifoumi::setSelectMachine(UnCoup p_coup)
{
    (*this).SelectMachine = p_coup;
}

void chifoumi::setScoreJoueur(unsigned int p_score)
{
    (*this).ScoreJoueur = p_score;
}

void chifoumi::setScoreMachine(unsigned int p_score)
{
    (*this).ScoreMachine = p_score;
}

void chifoumi::majScores(char p_gagnant)
{
    if (p_gagnant == 'J')
    {
        setScoreJoueur(getScoreJoueur() + 1);
    }
    else if (p_gagnant == 'M')
    {
        setScoreMachine(getScoreMachine() + 1);
    }
}

void chifoumi::initScores()
{
    setScoreJoueur(0);
    setScoreMachine(0);
}

void chifoumi::initCoups()
{
    setSelectJoueur(rien);
    setSelectMachine(rien);
}
