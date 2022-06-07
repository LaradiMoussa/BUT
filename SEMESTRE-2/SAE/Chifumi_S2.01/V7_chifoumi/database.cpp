#include "database.h"

database::database()
{
    
}

bool database::ouvrirDatabase()
{
    db=QSqlDatabase::addDatabase(CONNECT_TYPE);
    db.setDatabaseName(DATABASE_NAME);
    if(db.open())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void database::fermerDatabase()
{
    db.close();
}

bool database::restaurerDatabase()
{
    bool ok = ouvrirDatabase();
    if(ok)
    {
        creationTable();
    }
    return false;
}

bool database::creationTable()
{
    QSqlQuery query;
    bool ok = query.exec("create table Identifiants (utilisateur varchar(5) primary key,mdp varchar(30))");
    if (ok)
    {
        qDebug() <<"table crée";
        return true;
    }
    else
    {
        qDebug() <<"table existance";
        return false;
    }
    QVariantList user;
}

bool database::insertionTable(const QVariantList &data)
{
    QSqlQuery query;
    QString insertions="insert into Identifiants ""values(:utilisateur, :mdp);";
    query.prepare(insertions);
    query.bindValue(":utilisateur", data[0].toString());
    query.bindValue(":mdp", data[1].toString());
    if(!query.exec())
    {
        qDebug() << "Erreur lors de l'insertion : ";
        qDebug() << query.lastError().text();
        return false;
    }
    else
    {
        return true;
    }
}

bool database::verifierMDP(QString nom, QString mdp){
    // On récupére le mot de passe de la BDD
    QSqlQuery query;
    query.exec("SELECT * FROM Utilisateurs");

    // On va vérifier s'il existe dans notre base, le nom d'utilisateur ainsi
    // que la correspondance du mot de passe si celui-ci existe
    for (int i =0; query.next(); i++){
        if(query.value(0).toString() == nom && query.value(1).toString()==mdp){
            return true;
        }
    }
    return false;
}

bool database::updateNomUtilisateur(QString ancienNom, QString nouveauNom){
    QSqlQuery query;
    query.exec("SELECT * FROM Utilisateurs");

    // On va vérifier s'il existe dans notre base, le nouveau nom d'utilisateur
    for (int i =0; query.next(); i++){
        if(query.value(0).toString() == nouveauNom){
            //qDebug() << "Nouveau nom déjà existant";
            return false;
        }
    }

    // Sinon, on effectue la modification
    QString formuleModif="update Utilisateurs "
                       "set nom=:nouveauNom"
                       " where nom=:ancienNom";

    // On va mettre les infos que l'on souhaite
    query.prepare(formuleModif);
    query.bindValue(":nouveauNom", nouveauNom);
    query.bindValue(":ancienNom", ancienNom);
    if(!query.exec()){
        //qDebug() << "Erreur lors de l'insertion : ";
        //qDebug() << query.lastError().text();
        return false;
    }
    else{
        //qDebug() << "Modification du nom d'utilisateur OK";
        return true;
    }
}
