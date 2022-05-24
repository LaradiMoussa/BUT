#include "Dialogue1.h"
#include "ui_Dialogue1.h"
#include "mainwindow.h"
#include <QDebug>

Dialogue1::Dialogue1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialogue1)
{
    ui->setupUi(this);
}

Dialogue1::~Dialogue1()
{
    delete ui;
}

