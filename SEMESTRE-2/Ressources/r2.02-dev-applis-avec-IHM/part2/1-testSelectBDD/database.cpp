#include "database.h"

Database::Database()
{
    mydb = QSqlDatabase::addDatabase(CONNECT_TYPE);
    mydb.setDatabaseName(DATABASE_NAME);
}

bool Database::opendatabase()
{
    return mydb.open();
}

void Database::closedatabase()
{
    mydb.close();
}

bool Database::exec(const QString &query)
{
    QSqlQuery req;
    req.exec(query);
    bool estExecute = true;
    return estExecute;
}
