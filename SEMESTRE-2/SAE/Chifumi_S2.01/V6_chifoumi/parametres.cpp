#include "parametres.h"
#include "ui_parametres.h"

parametres::parametres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::parametres)
{
    ui->setupUi(this);
}

parametres::~parametres()
{
    delete ui;
}

QString parametres::TempsPartie()
{
    Temps=ui->SelectTemps->text();

    return Temps;
}

QString parametres::NomJoueur()
{
    Nom=ui->SelectNom->text();
    return Nom;
}

QString parametres::ScoreObjectif()
{
    ScoreMax=ui->SelectScoreMax->text();
    return ScoreMax;
}
