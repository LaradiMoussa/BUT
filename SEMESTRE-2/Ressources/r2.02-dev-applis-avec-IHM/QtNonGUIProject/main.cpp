#include <QCoreApplication>
#include "maclasse.h"

void etape1();
void etape2();
void etape2();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    etape1();

    return a.exec();
}

void etape1()
{
    MaClasse objet1(1);
    MaClasse objet2(2);

    QObject::connect(&objet1, SIGNAL(estEmis(int)), &objet2, SLOT(recevoir(int)));

    objet1.emettre();
}
