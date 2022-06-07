#include "chifoumivue.h"
#include "parametres.h"
#include "connexion.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chifoumivue w;
    w.setWindowTitle("Chifoumi");
    w.show();
    return a.exec();
}
