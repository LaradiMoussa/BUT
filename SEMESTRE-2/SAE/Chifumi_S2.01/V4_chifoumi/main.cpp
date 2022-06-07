#include "chifoumivue.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chifoumivue w;
    w.show();
    return a.exec();
}
