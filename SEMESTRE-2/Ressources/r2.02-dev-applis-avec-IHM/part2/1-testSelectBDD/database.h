#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>

#define DATABASE_NAME "BD_Accident_Lakartxela"
#define CONNECT_TYPE "QODBC"

class Database
{
public:
    Database();
    bool opendatabase();
    void closedatabase();
    bool exec(const QString &query);

private:
    QSqlDatabase mydb;
};

#endif // DATABASE_H
