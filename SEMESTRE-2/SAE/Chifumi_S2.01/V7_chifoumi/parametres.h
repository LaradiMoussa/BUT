#ifndef PARAMETRES_H
#define PARAMETRES_H

#include <QDialog>

namespace Ui {
class parametres;
}

class parametres : public QDialog
{
    Q_OBJECT

public:
    explicit parametres(QWidget *parent = nullptr);
    ~parametres();
    QString TempsPartie();
    QString NomJoueur();
    QString ScoreObjectif();

private:
    Ui::parametres *ui;
    QString Temps;
    QString Nom;
    QString ScoreMax;
    int TempsSec;
};

#endif // PARAMETRES_H


