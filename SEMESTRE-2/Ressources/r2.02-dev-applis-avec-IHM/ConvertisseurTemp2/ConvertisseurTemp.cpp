#include "ConvertisseurTemp.h"

ConvertisseurTemp::ConvertisseurTemp(QWidget *parent)
    : QWidget(parent)
{
    champCelsius= new QLineEdit(this);
    intitule= new QLabel("Convertisseur de température", this);
    intituleSource= new QLabel("degré Celsius", this);
    intituleResultat= new QLabel("degré Farenheit", this);
    resultat= new QLabel(this);
    bouttonEffacer= new QPushButton("effacer", this);
    bouttonConvertir= new QPushButton("convertir", this);
    bouttonQuitter= new QPushButton("quitter", this);

    bouttonQuitter->setGeometry(336, 160, 93, 29);
    bouttonConvertir->setGeometry(116, 160, 93, 29);
    bouttonEffacer->setGeometry(16, 160, 93, 29);
    intitule->setGeometry(16, 20, 430, 30);
    intituleResultat->setGeometry(256,70,125,20);
    intituleSource->setGeometry(116,70,101,20 );
    champCelsius->setGeometry(116,92,91,26);
    resultat->setGeometry(256, 93, 63, 20);


}

ConvertisseurTemp::~ConvertisseurTemp()
{
}

ConvertisseurTemp::convertir(float source){
    float result;
    result = 9/5*source+32;
    return result;
}


