#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect (ui->btnOui, SIGNAL(clicked()), this, SLOT(accept()));
    connect (ui->btnNon, SIGNAL(clicked()), this, SLOT(reject()));
}

Dialog::~Dialog()
{
    delete ui;
}
