#ifndef CHIFOUMI_H
#define CHIFOUMI_H

#include <iostream>
using namespace std;

class chifoumi
{
    public:
        enum UnCoup {Pierre, Feuille, Ciseaux, rien};

    public:
        chifoumi();
        virtual ~chifoumi();

        UnCoup getSelectJoueur();
        UnCoup getSelectMachine();
        unsigned int getScoreJoueur();
        unsigned int getScoreMachine();
        char determinerGagnant();
        UnCoup genererUnCoup();

    public:
        void setSelectJoueur(UnCoup p_coup);
        void setSelectMachine(UnCoup p_coup);
        void setScoreJoueur(unsigned int p_score);
        void setScoreMachine(unsigned int p_score);
        void majScores(char p_gagnant);
        void initScores();
        void initCoups();

    private:
        unsigned int ScoreJoueur;
        unsigned int ScoreMachine;
        UnCoup SelectJoueur;
        UnCoup SelectMachine;

};

#endif // CHIFOUMI_H
