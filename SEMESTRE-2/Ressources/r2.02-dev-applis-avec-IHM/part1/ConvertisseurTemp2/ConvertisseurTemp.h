#ifndef CONVERTISSEURTEMP_H
#define CONVERTISSEURTEMP_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class ConvertisseurTemp : public QWidget
{
    Q_OBJECT

public:
    ConvertisseurTemp(QWidget *parent = nullptr);
    ~ConvertisseurTemp();

public slots:
    float convertir(float);

private:
    QLineEdit*champCelsius;
    QLabel*intitule;             //intitulé de l'application
    QLabel*intituleSource;       //intitulé au dessus du champ de saisie
    QLabel*intituleResultat;     //intitulé au dessus de l'affichage du résultat
    QLabel*resultat;
    QPushButton*bouttonEffacer;
    QPushButton*bouttonConvertir;
    QPushButton*bouttonQuitter;

};
#endif // CONVERTISSEURTEMP_H
