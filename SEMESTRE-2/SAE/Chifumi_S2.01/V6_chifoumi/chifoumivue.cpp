#include "chifoumivue.h"
#include "chifoumi.h"
#include "ui_chifoumivue.h"
#include "parametres.h"
#include <QMessageBox>
#include <QTimer>
#include <QDialog>
#include <QDebug>

chifoumi MaPartie;


chifoumivue::chifoumivue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::chifoumivue)
{
    ui->setupUi(this);
    QObject::connect(ui->BoutonPartie, SIGNAL(clicked()),this,SLOT(NouvellePartie()));
    QObject::connect(ui->Pierre, SIGNAL(clicked()),this,SLOT(CoupPierre()));
    QObject::connect(ui->Feuille, SIGNAL(clicked()),this,SLOT(CoupFeuille()));
    QObject::connect(ui->Ciseaux, SIGNAL(clicked()),this,SLOT(CoupCiseaux()));
    QObject::connect(ui->Pause, SIGNAL(clicked()),this,SLOT(Pause()));
    QObject::connect(ui->AProposDe, SIGNAL(triggered()),this,SLOT(AProposDe()));
    QObject::connect(ui->Quitter, SIGNAL(triggered()),this,SLOT(Quitter()));
    QObject::connect(ui->Parametres, SIGNAL(triggered()),this,SLOT(Parametres()));
    tps_init = 30;
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(Chrono()));


}

chifoumi::UnCoup Pierre;
chifoumi::UnCoup Feuille;
chifoumi::UnCoup Ciseaux;
int test;


chifoumivue::~chifoumivue()
{
    delete ui;
}

void chifoumivue::NouvellePartie()
{
    ui->Pierre->setEnabled(true);
    ui->Feuille->setEnabled(true);
    ui->Ciseaux->setEnabled(true);
    ui->Pause->setEnabled(true);
    ui->SelectJoueur->setIcon(QIcon(":/chifoumi/images/rien.gif"));
    ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/rien.gif"));
    MaPartie.initCoups();
    MaPartie.initScores();
    QString ScoreJ = QString::number(MaPartie.getScoreJoueur());
    QString ScoreM = QString::number(MaPartie.getScoreMachine());
    ui->ScoreJoueur->setText(ScoreJ);
    ui->ScoreMachine->setText(ScoreM);
    sec = tps_init;
    timer->start();
    Chrono();
}

void chifoumivue::CoupPierre()
{
    MaPartie.setSelectJoueur(MaPartie.Pierre);
    ui->SelectJoueur->setIcon(QIcon(":/chifoumi/images/pierre.gif"));
    chifoumi::UnCoup coup;
    char gagnant;
    coup = MaPartie.genererUnCoup();

    switch (coup)
    {
    case 0 :
        ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/pierre.gif"));
        MaPartie.setSelectMachine(MaPartie.Pierre);
        break;
    case 1 :
        ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/papier.gif"));
        MaPartie.setSelectMachine(MaPartie.Feuille);
        break;
    case 2 :
        ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/ciseau.gif"));
        MaPartie.setSelectMachine(MaPartie.Ciseaux);
        break;
    }

    gagnant = MaPartie.determinerGagnant();
    MaPartie.majScores(gagnant);
    QString ScoreJ = QString::number(MaPartie.getScoreJoueur());
    QString ScoreM = QString::number(MaPartie.getScoreMachine());
    QString ScoreO = QString::number(MaPartie.getScoreObjectif());
    ui->ScoreJoueur->setText(ScoreJ);
    ui->ScoreMachine->setText(ScoreM);
    if (ScoreJ == ScoreO)
    {
        timer->stop();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Fin de la partie");
        QString ScoreEnd ="Bravo Joueur ! Vous gagnez avec un score de ";
        ScoreEnd.append(QString::number(MaPartie.getScoreJoueur()));
        msgBox.setText(ScoreEnd);
        msgBox.exec();
    }
    if (ScoreM == ScoreO)
    {
        timer->stop();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Fin de la partie");
        QString ScoreEnd ="Bravo La Machine ! Vous gagnez avec un score de ";
        ScoreEnd.append(QString::number(MaPartie.getScoreMachine()));
        msgBox.setText(ScoreEnd);
        msgBox.exec();
    }
}

void chifoumivue::CoupFeuille()
{
    MaPartie.setSelectJoueur(MaPartie.Feuille);
    ui->SelectJoueur->setIcon(QIcon(":/chifoumi/images/papier.gif"));
    chifoumi::UnCoup coup;
    char gagnant;
    coup = MaPartie.genererUnCoup();

    switch (coup)
    {
    case 0 :
        ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/pierre.gif"));
        MaPartie.setSelectMachine(MaPartie.Pierre);
        break;
    case 1 :
        ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/papier.gif"));
        MaPartie.setSelectMachine(MaPartie.Feuille);
        break;
    case 2 :
        ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/ciseau.gif"));
        MaPartie.setSelectMachine(MaPartie.Ciseaux);
        break;
    }

    gagnant = MaPartie.determinerGagnant();
    MaPartie.majScores(gagnant);
    QString ScoreJ = QString::number(MaPartie.getScoreJoueur());
    QString ScoreM = QString::number(MaPartie.getScoreMachine());
    QString ScoreO = QString::number(MaPartie.getScoreObjectif());
    ui->ScoreJoueur->setText(ScoreJ);
    ui->ScoreMachine->setText(ScoreM);
    if (ScoreJ == ScoreO)
    {
        timer->stop();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Fin de la partie");
        QString ScoreEnd ="Bravo Joueur ! Vous gagnez avec un score de ";
        ScoreEnd.append(QString::number(MaPartie.getScoreJoueur()));
        msgBox.setText(ScoreEnd);
        msgBox.exec();
    }
    if (ScoreM == ScoreO)
    {
        timer->stop();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Fin de la partie");
        QString ScoreEnd ="Bravo La Machine ! Vous gagnez avec un score de ";
        ScoreEnd.append(QString::number(MaPartie.getScoreMachine()));
        msgBox.setText(ScoreEnd);
        msgBox.exec();
    }

}

void chifoumivue::CoupCiseaux()
{
    MaPartie.setSelectJoueur(MaPartie.Ciseaux);
    ui->SelectJoueur->setIcon(QIcon(":/chifoumi/images/ciseau.gif"));
    chifoumi::UnCoup coup;
    char gagnant;
    coup = MaPartie.genererUnCoup();

    switch (coup)
    {
    case 0 :
        ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/pierre.gif"));
        MaPartie.setSelectMachine(MaPartie.Pierre);
        break;
    case 1 :
        ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/papier.gif"));
        MaPartie.setSelectMachine(MaPartie.Feuille);
        break;
    case 2 :
        ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/ciseau.gif"));
        MaPartie.setSelectMachine(MaPartie.Ciseaux);
        break;
    }

    gagnant = MaPartie.determinerGagnant();
    MaPartie.majScores(gagnant);
    QString ScoreJ = QString::number(MaPartie.getScoreJoueur());
    QString ScoreM = QString::number(MaPartie.getScoreMachine());
    QString ScoreO = QString::number(MaPartie.getScoreObjectif());
    ui->ScoreJoueur->setText(ScoreJ);
    ui->ScoreMachine->setText(ScoreM);
    if (ScoreJ == ScoreO)
    {
        timer->stop();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Fin de la partie");
        QString ScoreEnd ="Bravo Joueur ! Vous gagnez avec un score de ";
        ScoreEnd.append(QString::number(MaPartie.getScoreJoueur()));
        msgBox.setText(ScoreEnd);
        msgBox.exec();
    }
    if (ScoreM == ScoreO)
    {
        timer->stop();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Fin de la partie");
        QString ScoreEnd ="Bravo La Machine ! Vous gagnez avec un score de ";
        ScoreEnd.append(QString::number(MaPartie.getScoreMachine()));
        msgBox.setText(ScoreEnd);
        msgBox.exec();
    }
}

void chifoumivue::AProposDe()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("A propos de cette application.");
    msgBox.setText("Version actuelle : V6 \nAuteur : Pierre DAVID, Titouan BRIERRE, Evan SPICKA");
    msgBox.exec();
}

void chifoumivue::Quitter()
{
    QWidget::close();
}

void chifoumivue::Chrono()
{
    if (sec == 0)
    {
        timer->stop();
        if (MaPartie.getScoreJoueur() > MaPartie.getScoreMachine())
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("Temps écoulé");
            QString ScoreEnd ="Bravo Joueur ! Vous gagnez avec un score de ";
            ScoreEnd.append(QString::number(MaPartie.getScoreJoueur()));
            msgBox.setText(ScoreEnd);
            msgBox.exec();
        }
        else if (MaPartie.getScoreJoueur() < MaPartie.getScoreMachine())
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("Temps écoulé");
            QString ScoreEnd ="Bravo La Machine ! Vous gagnez avec un score de ";
            ScoreEnd.append(QString::number(MaPartie.getScoreMachine()));
            msgBox.setText(ScoreEnd);
            msgBox.exec();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setWindowTitle("Fin de la partie");
            msgBox.setText("Egalité");
            msgBox.exec();
        }
    }

    else
    {
        sec--;
        QString affichageTemps = QString::number(sec);
        ui->Temps->setText(affichageTemps);
    }
}

void chifoumivue::Parametres()
{
    parametres * settings = new parametres(this);
    settings->setWindowTitle("Paramètres");
    int renvoi = settings->exec();
    qDebug() << renvoi << parametres::Accepted;

    if(renvoi == QDialog::Accepted)
    {
        if (!settings->NomJoueur().isEmpty())
        {
           nomJoueur = settings->NomJoueur();
           ui->Joueur->setText(nomJoueur);
        }
        if(!settings->TempsPartie().isEmpty())
        {
            tps_init = settings->TempsPartie().toInt();
        }
        if(!settings->ScoreObjectif().isEmpty())
        {
            point_gagnant = settings->ScoreObjectif().toInt();
            MaPartie.setScoreObjectif(point_gagnant);
            ui->ScoreObjectif->setText(QString::number(point_gagnant));
        }
    }

}

void chifoumivue::Pause()
{
    if ( enPause == false )
    {
        enPause = true;
        ui->Pause->setText("Reprendre");
        timer->stop();
        ui->Pierre->setDisabled(true);
        ui->Feuille->setDisabled(true);
        ui->Ciseaux->setDisabled(true);
    }
    else
    {
        enPause = false;
        ui->Pause->setText("Pause");
        timer->start();
        ui->Pierre->setEnabled(true);
        ui->Feuille->setEnabled(true);
        ui->Ciseaux->setEnabled(true);
    }
}
