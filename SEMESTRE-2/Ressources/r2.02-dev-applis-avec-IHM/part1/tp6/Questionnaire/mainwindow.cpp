#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);  
    connect (ui->DebQ, SIGNAL(clicked()), this, SLOT(accept()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

