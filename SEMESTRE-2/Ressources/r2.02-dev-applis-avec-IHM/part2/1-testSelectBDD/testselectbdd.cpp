#include "testselectbdd.h"
#include "ui_testselectbdd.h"
#include <QtDebug>
#include <iostream>
using namespace std;

testSelectBDD::testSelectBDD(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testSelectBDD)
{
    ui->setupUi(this);
    db = new Database();
    db->opendatabase();
    QSqlQuery query;
    query.exec("SELECT * FROM MAccident");

}

testSelectBDD::~testSelectBDD()
{
    delete ui;
}
