#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Dialog *maDlg = new Dialog(this);
    int retour = maDlg ->exec();
    switch(retour)
    {
        case QDialog::Accepted :
                ui->reponse->setText ("il/elle a dit OUI !");
                break;
        case QDialog::Rejected :
                ui->reponse->setText ("il/elle a dit NON !");
                break;
        default:break;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

