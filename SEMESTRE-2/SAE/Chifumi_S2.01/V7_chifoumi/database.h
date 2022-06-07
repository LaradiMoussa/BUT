#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QtSql/QSqlError>
#include <QVariantList>

#define DATABASE_NAME "bdd_chifoumi"
#define CONNECT_TYPE "QODBC"


class database
{
public:
    database();
    bool ouvrirDatabase();
    void fermerDatabase();
    bool restaurerDatabase();
    bool verifierMDP(QString nom, QString mdp);
    bool updateNomUtilisateur(QString ancienNom, QString nouveauNom);
    
private:
    QSqlDatabase db;
    
private:
    bool creationTable();
    bool insertionTable(const QVariantList &);
};

#endif // DATABASE_H
