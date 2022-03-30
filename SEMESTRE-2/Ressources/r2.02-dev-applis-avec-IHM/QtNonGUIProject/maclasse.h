#ifndef MACLASSE_H
#define MACLASSE_H

#include <QObject>

class MaClasse : public QObject
{
    Q_OBJECT
public:
    explicit MaClasse(QObject *parent = nullptr);
    MaClasse(int);
    void emettre();
public slots:
    void recevoir(int);
private:
    int _numero;
signals:
    void estEmis(int);

};

#endif // MACLASSE_H
