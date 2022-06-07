#ifndef CHIFOUMIVUE_H
#define CHIFOUMIVUE_H

#include <QDialog>
#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class chifoumivue; }
QT_END_NAMESPACE

class chifoumivue : public QMainWindow
{
    Q_OBJECT

public:
    chifoumivue(QWidget *parent = nullptr);
    ~chifoumivue();

public slots:
    void NouvellePartie();
    void CoupPierre();
    void CoupFeuille();
    void CoupCiseaux();
    void AProposDe();
    void Quitter();
    void Chrono();
    void Parametres();
    void Pause();


private:
    Ui::chifoumivue *ui;
    QTimer *timer;
    int sec;
    int tps_init;
    bool enPause = false;
    int point_gagnant;
    QString nomJoueur;
};

#endif // CHIFOUMIVUE_H

