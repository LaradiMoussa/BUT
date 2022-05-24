#include <iostream>
#include "maclasse.h"
using namespace std;

MaClasse::MaClasse(QObject *parent) : QObject(parent)
{

}

MaClasse::MaClasse(int num)
{
    MaClasse::_numero=num;
}

void MaClasse::emettre()
{
    cout << "Moi, " << MaClasse::_numero << ", j'emets un signal" << endl;
    estEmis(MaClasse::_numero);
}

void MaClasse::recevoir(int x)
{
    cout << "Moi, " << MaClasse::_numero << ", j'ai recu un signal de " << x << endl;
}
