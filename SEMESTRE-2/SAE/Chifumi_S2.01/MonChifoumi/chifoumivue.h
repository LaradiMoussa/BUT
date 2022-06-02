#ifndef CHIFOUMIVUE_H
#define CHIFOUMIVUE_H

#include <QMainWindow>

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


private:
    Ui::chifoumivue *ui;
};

#endif // CHIFOUMIVUE_H
