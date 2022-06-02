#include "chifoumivue.h"
#include "chifoumi.h"
#include "ui_chifoumivue.h"
#include <QMessageBox>

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
    QObject::connect(ui->AProposDe, SIGNAL(triggered()),this,SLOT(AProposDe()));
    QObject::connect(ui->Quitter, SIGNAL(triggered()),this,SLOT(Quitter()));
}

chifoumi::UnCoup Pierre;
chifoumi::UnCoup Feuille;
chifoumi::UnCoup Ciseaux;

chifoumivue::~chifoumivue()
{
    delete ui;
}

void chifoumivue::NouvellePartie()
{
    ui->Pierre->setEnabled(true);
    ui->Feuille->setEnabled(true);
    ui->Ciseaux->setEnabled(true);
    ui->SelectJoueur->setIcon(QIcon(":/chifoumi/images/rien.gif"));
    ui->SelectMachine->setIcon(QIcon(":/chifoumi/images/rien.gif"));
    MaPartie.initCoups();
    MaPartie.initScores();
    QString ScoreJ = QString::number(MaPartie.getScoreJoueur());
    QString ScoreM = QString::number(MaPartie.getScoreMachine());
    ui->ScoreJoueur->setText(ScoreJ);
    ui->ScoreMachine->setText(ScoreM);
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
    ui->ScoreJoueur->setText(ScoreJ);
    ui->ScoreMachine->setText(ScoreM);
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
    ui->ScoreJoueur->setText(ScoreJ);
    ui->ScoreMachine->setText(ScoreM);

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
    ui->ScoreJoueur->setText(ScoreJ);
    ui->ScoreMachine->setText(ScoreM);
}

void chifoumivue::AProposDe()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("A propos de cette application.");
    msgBox.setText("Version actuelle : V3 \nAuteur : Pierre DAVID, Titouan BRIERRE, Evan SPICKA");
    msgBox.exec();
}

void chifoumivue::Quitter()
{
    QWidget::close();
}


