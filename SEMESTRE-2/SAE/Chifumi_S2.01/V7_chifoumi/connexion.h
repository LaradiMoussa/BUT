#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>
#include "database.h"

namespace Ui {
class connexion;
}

class connexion : public QDialog
{
    Q_OBJECT

public:
    explicit connexion(QWidget *parent = nullptr);
    ~connexion();

public:
    QString getNom();
    bool infoConnexion();

private:
    Ui::connexion *ui;
    bool estConnecte;
    database *db = new database();

private slots:
    void demanderConnexion();

};


#endif // CONNEXION_H
