#include "connexion.h"
#include "ui_connexion.h"
#include <QMessageBox>
#include <QDebug>

connexion::connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connexion)
{
    estConnecte = false;

    ui->setupUi(this);
    connect(ui->Entrer,SIGNAL(clicked()),this,SLOT(demanderConnexion()));

    if (!db->restaurerDatabase()){
        ui->Entrer->setDisabled(true);
    }
}

connexion::~connexion()
{
    delete ui;
}

void connexion::demanderConnexion(){
    // On récupére les données saisies dans les champs
    QString username = ui->SelectUtilisateur->text();
    QString password = ui->SelectMdP->text();

    // Tentative de connexion
    if(db->verifierMDP(username, password)){
        estConnecte=true;
        close();
    }
    else{
        QMessageBox::information(this, "Identifiant incorrect",
                                 "Votre identifiant semble incorrect, veuillez réessayer.");
    }
}

QString connexion::getNom(){
    return ui->SelectUtilisateur->text();
}


bool connexion::infoConnexion(){
    return estConnecte;
}
