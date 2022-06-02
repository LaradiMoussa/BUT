/********************************************************************************
** Form generated from reading UI file 'chifoumivue.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHIFOUMIVUE_H
#define UI_CHIFOUMIVUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chifoumivue
{
public:
    QWidget *centralwidget;
    QPushButton *Fight;
    QPushButton *SelectJoueur;
    QPushButton *SelectMachine;
    QPushButton *BoutonPartie;
    QLabel *ScoreJoueur;
    QLabel *ScoreMachine;
    QLabel *Joueur;
    QLabel *Machine;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Ciseaux;
    QPushButton *Feuille;
    QPushButton *Pierre;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuaide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chifoumivue)
    {
        if (chifoumivue->objectName().isEmpty())
            chifoumivue->setObjectName(QString::fromUtf8("chifoumivue"));
        chifoumivue->resize(568, 563);
        chifoumivue->setMinimumSize(QSize(568, 563));
        chifoumivue->setMaximumSize(QSize(568, 563));
        centralwidget = new QWidget(chifoumivue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Fight = new QPushButton(centralwidget);
        Fight->setObjectName(QString::fromUtf8("Fight"));
        Fight->setEnabled(true);
        Fight->setGeometry(QRect(250, 140, 65, 65));
        Fight->setMinimumSize(QSize(65, 65));
        Fight->setMaximumSize(QSize(65, 65));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/chifoumi/images/versus.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Fight->setIcon(icon);
        Fight->setIconSize(QSize(65, 65));
        SelectJoueur = new QPushButton(centralwidget);
        SelectJoueur->setObjectName(QString::fromUtf8("SelectJoueur"));
        SelectJoueur->setGeometry(QRect(40, 120, 111, 110));
        SelectJoueur->setMinimumSize(QSize(111, 110));
        SelectJoueur->setMaximumSize(QSize(111, 110));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/chifoumi/images/rien.gif"), QSize(), QIcon::Normal, QIcon::Off);
        SelectJoueur->setIcon(icon1);
        SelectJoueur->setIconSize(QSize(111, 110));
        SelectMachine = new QPushButton(centralwidget);
        SelectMachine->setObjectName(QString::fromUtf8("SelectMachine"));
        SelectMachine->setGeometry(QRect(420, 120, 111, 110));
        SelectMachine->setMinimumSize(QSize(111, 110));
        SelectMachine->setMaximumSize(QSize(111, 110));
        SelectMachine->setIcon(icon1);
        SelectMachine->setIconSize(QSize(111, 110));
        BoutonPartie = new QPushButton(centralwidget);
        BoutonPartie->setObjectName(QString::fromUtf8("BoutonPartie"));
        BoutonPartie->setGeometry(QRect(450, 480, 81, 23));
        ScoreJoueur = new QLabel(centralwidget);
        ScoreJoueur->setObjectName(QString::fromUtf8("ScoreJoueur"));
        ScoreJoueur->setGeometry(QRect(90, 80, 31, 31));
        QFont font;
        font.setPointSize(20);
        ScoreJoueur->setFont(font);
        ScoreMachine = new QLabel(centralwidget);
        ScoreMachine->setObjectName(QString::fromUtf8("ScoreMachine"));
        ScoreMachine->setGeometry(QRect(470, 80, 31, 31));
        ScoreMachine->setFont(font);
        Joueur = new QLabel(centralwidget);
        Joueur->setObjectName(QString::fromUtf8("Joueur"));
        Joueur->setGeometry(QRect(70, 40, 61, 31));
        Joueur->setFont(font);
        Machine = new QLabel(centralwidget);
        Machine->setObjectName(QString::fromUtf8("Machine"));
        Machine->setGeometry(QRect(430, 40, 101, 31));
        Machine->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 300, 489, 169));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 491, 171));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Ciseaux = new QPushButton(horizontalLayoutWidget);
        Ciseaux->setObjectName(QString::fromUtf8("Ciseaux"));
        Ciseaux->setEnabled(false);
        Ciseaux->setMinimumSize(QSize(111, 110));
        Ciseaux->setMaximumSize(QSize(111, 110));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/chifoumi/images/ciseau.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Ciseaux->setIcon(icon2);
        Ciseaux->setIconSize(QSize(111, 110));

        horizontalLayout->addWidget(Ciseaux);

        Feuille = new QPushButton(horizontalLayoutWidget);
        Feuille->setObjectName(QString::fromUtf8("Feuille"));
        Feuille->setEnabled(false);
        Feuille->setMinimumSize(QSize(111, 110));
        Feuille->setMaximumSize(QSize(111, 110));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/chifoumi/images/papier.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Feuille->setIcon(icon3);
        Feuille->setIconSize(QSize(111, 110));

        horizontalLayout->addWidget(Feuille);

        Pierre = new QPushButton(horizontalLayoutWidget);
        Pierre->setObjectName(QString::fromUtf8("Pierre"));
        Pierre->setEnabled(false);
        Pierre->setMinimumSize(QSize(111, 110));
        Pierre->setMaximumSize(QSize(111, 110));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/chifoumi/images/pierre.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Pierre->setIcon(icon4);
        Pierre->setIconSize(QSize(111, 110));

        horizontalLayout->addWidget(Pierre);

        chifoumivue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chifoumivue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 568, 20));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuaide = new QMenu(menubar);
        menuaide->setObjectName(QString::fromUtf8("menuaide"));
        chifoumivue->setMenuBar(menubar);
        statusbar = new QStatusBar(chifoumivue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chifoumivue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuaide->menuAction());

        retranslateUi(chifoumivue);

        QMetaObject::connectSlotsByName(chifoumivue);
    } // setupUi

    void retranslateUi(QMainWindow *chifoumivue)
    {
        chifoumivue->setWindowTitle(QCoreApplication::translate("chifoumivue", "MainWindow", nullptr));
        Fight->setText(QString());
        SelectJoueur->setText(QString());
        SelectMachine->setText(QString());
        BoutonPartie->setText(QCoreApplication::translate("chifoumivue", "Nouvelle Partie", nullptr));
        ScoreJoueur->setText(QCoreApplication::translate("chifoumivue", "0", nullptr));
        ScoreMachine->setText(QCoreApplication::translate("chifoumivue", "0", nullptr));
        Joueur->setText(QCoreApplication::translate("chifoumivue", "Vous", nullptr));
        Machine->setText(QCoreApplication::translate("chifoumivue", "Machine", nullptr));
        groupBox->setTitle(QCoreApplication::translate("chifoumivue", "Choisissez une figure :", nullptr));
        Ciseaux->setText(QString());
        Feuille->setText(QString());
        Pierre->setText(QString());
        menuFichier->setTitle(QCoreApplication::translate("chifoumivue", "Fichier", nullptr));
        menuaide->setTitle(QCoreApplication::translate("chifoumivue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chifoumivue: public Ui_chifoumivue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHIFOUMIVUE_H
