#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QInputDialog>
#include <QColorDialog>
#include <QErrorMessage>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect (ui->btnQInputDialog, SIGNAL(clicked()), this, SLOT(slotQInputDialog()));
    connect (ui->btnQColorDialog, SIGNAL(clicked()), this, SLOT(slotQColorDialog()));
    connect (ui->btnQErrorMessage, SIGNAL(clicked()), this, SLOT(slotQErrorMessage()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotQInputDialog()
{
/*
    bool ok;
    QString chaineAge = "";
    int age = QInputDialog::getInt(this,
                                   tr("Exemple de QInputDialog::getInt()"),
                                   tr("Nombre de coins d'un carré ? "),
                                   0, 0, 5, 1, &ok);
    if (ok)
    {
         chaineAge.setNum(age);
         ui->labelEntier->setText(chaineAge);
    }
    else
    {
        chaineAge = "pas de réponse";
        ui->labelEntier->setText(chaineAge);
    }
   */
    bool ok;
    QString prenom = QInputDialog::getText(this,
                                   tr("Exemple de QInputDialog::getText()"),
                                   tr("Votre prénom ? "),
                                   QLineEdit::Normal, "", &ok);
    if (ok && !prenom.isEmpty())
    {
         ui->labelEntier->setText(prenom);
    }
    else
    {
        ui->labelEntier->setText("pas de réponse");
    }

}

void MainWindow::slotQColorDialog()
{
    QColor color = QColorDialog::getColor(Qt::green, this);
    if (color.isValid())
    {
        this->setPalette(QPalette(color));
        this->setAutoFillBackground(true);
    }
}

void MainWindow::slotQErrorMessage()
{
    QErrorMessage*bteErrorMessage = new QErrorMessage(this);
    bteErrorMessage->showMessage("ceci est un message d'erreur dans une boîte non modale");
}

