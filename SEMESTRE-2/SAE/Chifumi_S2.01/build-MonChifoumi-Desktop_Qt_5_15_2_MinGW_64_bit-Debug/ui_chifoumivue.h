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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chifoumivue
{
public:
    QAction *AProposDe;
    QAction *Parametres;
    QAction *Quitter;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_2;
    QLabel *ScoreJoueur;
    QLabel *Machine;
    QPushButton *SelectMachine;
    QLabel *Joueur;
    QLabel *ScoreMachine;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *SelectJoueur;
    QPushButton *Fight;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *Ciseaux;
    QPushButton *Feuille;
    QPushButton *Pierre;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *BoutonPartie;
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
        chifoumivue->setMaximumSize(QSize(50000, 50000));
        AProposDe = new QAction(chifoumivue);
        AProposDe->setObjectName(QString::fromUtf8("AProposDe"));
        Parametres = new QAction(chifoumivue);
        Parametres->setObjectName(QString::fromUtf8("Parametres"));
        Quitter = new QAction(chifoumivue);
        Quitter->setObjectName(QString::fromUtf8("Quitter"));
        centralwidget = new QWidget(chifoumivue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ScoreJoueur = new QLabel(centralwidget);
        ScoreJoueur->setObjectName(QString::fromUtf8("ScoreJoueur"));
        ScoreJoueur->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setPointSize(20);
        ScoreJoueur->setFont(font);
        ScoreJoueur->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(ScoreJoueur, 1, 0, 1, 1);

        Machine = new QLabel(centralwidget);
        Machine->setObjectName(QString::fromUtf8("Machine"));
        Machine->setFont(font);
        Machine->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Machine, 0, 2, 1, 1);

        SelectMachine = new QPushButton(centralwidget);
        SelectMachine->setObjectName(QString::fromUtf8("SelectMachine"));
        SelectMachine->setMinimumSize(QSize(111, 110));
        SelectMachine->setMaximumSize(QSize(111, 110));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/chifoumi/images/rien.gif"), QSize(), QIcon::Normal, QIcon::Off);
        SelectMachine->setIcon(icon);
        SelectMachine->setIconSize(QSize(111, 110));

        gridLayout_2->addWidget(SelectMachine, 2, 2, 1, 1);

        Joueur = new QLabel(centralwidget);
        Joueur->setObjectName(QString::fromUtf8("Joueur"));
        Joueur->setFont(font);
        Joueur->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Joueur, 0, 0, 1, 1);

        ScoreMachine = new QLabel(centralwidget);
        ScoreMachine->setObjectName(QString::fromUtf8("ScoreMachine"));
        ScoreMachine->setMaximumSize(QSize(150, 16777215));
        ScoreMachine->setFont(font);
        ScoreMachine->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(ScoreMachine, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        gridLayout_2->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        SelectJoueur = new QPushButton(centralwidget);
        SelectJoueur->setObjectName(QString::fromUtf8("SelectJoueur"));
        SelectJoueur->setMinimumSize(QSize(111, 110));
        SelectJoueur->setMaximumSize(QSize(111, 110));
        SelectJoueur->setIcon(icon);
        SelectJoueur->setIconSize(QSize(111, 110));

        gridLayout_2->addWidget(SelectJoueur, 2, 0, 1, 1);

        Fight = new QPushButton(centralwidget);
        Fight->setObjectName(QString::fromUtf8("Fight"));
        Fight->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Fight->sizePolicy().hasHeightForWidth());
        Fight->setSizePolicy(sizePolicy);
        Fight->setMinimumSize(QSize(65, 65));
        Fight->setMaximumSize(QSize(65, 65));
        Fight->setSizeIncrement(QSize(0, 0));
        QFont font1;
        font1.setKerning(true);
        Fight->setFont(font1);
        Fight->setLayoutDirection(Qt::RightToLeft);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/chifoumi/images/versus.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Fight->setIcon(icon1);
        Fight->setIconSize(QSize(65, 65));

        gridLayout_2->addWidget(Fight, 2, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        Ciseaux = new QPushButton(groupBox);
        Ciseaux->setObjectName(QString::fromUtf8("Ciseaux"));
        Ciseaux->setEnabled(false);
        Ciseaux->setMinimumSize(QSize(111, 110));
        Ciseaux->setMaximumSize(QSize(111, 110));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/chifoumi/images/ciseau.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Ciseaux->setIcon(icon2);
        Ciseaux->setIconSize(QSize(111, 110));

        horizontalLayout_6->addWidget(Ciseaux);

        Feuille = new QPushButton(groupBox);
        Feuille->setObjectName(QString::fromUtf8("Feuille"));
        Feuille->setEnabled(false);
        Feuille->setMinimumSize(QSize(111, 110));
        Feuille->setMaximumSize(QSize(111, 110));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/chifoumi/images/papier.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Feuille->setIcon(icon3);
        Feuille->setIconSize(QSize(111, 110));

        horizontalLayout_6->addWidget(Feuille);

        Pierre = new QPushButton(groupBox);
        Pierre->setObjectName(QString::fromUtf8("Pierre"));
        Pierre->setEnabled(false);
        Pierre->setMinimumSize(QSize(111, 110));
        Pierre->setMaximumSize(QSize(111, 110));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/chifoumi/images/pierre.gif"), QSize(), QIcon::Normal, QIcon::Off);
        Pierre->setIcon(icon4);
        Pierre->setIconSize(QSize(111, 110));

        horizontalLayout_6->addWidget(Pierre);


        verticalLayout_5->addWidget(groupBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 10, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        BoutonPartie = new QPushButton(centralwidget);
        BoutonPartie->setObjectName(QString::fromUtf8("BoutonPartie"));
        BoutonPartie->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(BoutonPartie);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_4);

        chifoumivue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chifoumivue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 568, 21));
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
        menuFichier->addAction(Parametres);
        menuFichier->addAction(Quitter);
        menuaide->addSeparator();
        menuaide->addAction(AProposDe);

        retranslateUi(chifoumivue);

        QMetaObject::connectSlotsByName(chifoumivue);
    } // setupUi

    void retranslateUi(QMainWindow *chifoumivue)
    {
        chifoumivue->setWindowTitle(QCoreApplication::translate("chifoumivue", "MainWindow", nullptr));
        AProposDe->setText(QCoreApplication::translate("chifoumivue", "A propos de", nullptr));
#if QT_CONFIG(shortcut)
        AProposDe->setShortcut(QCoreApplication::translate("chifoumivue", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        Parametres->setText(QCoreApplication::translate("chifoumivue", "Param\303\250tres", nullptr));
#if QT_CONFIG(shortcut)
        Parametres->setShortcut(QCoreApplication::translate("chifoumivue", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        Quitter->setText(QCoreApplication::translate("chifoumivue", "Quitter", nullptr));
#if QT_CONFIG(shortcut)
        Quitter->setShortcut(QCoreApplication::translate("chifoumivue", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        ScoreJoueur->setText(QCoreApplication::translate("chifoumivue", "0", nullptr));
        Machine->setText(QCoreApplication::translate("chifoumivue", "Machine", nullptr));
        SelectMachine->setText(QString());
        Joueur->setText(QCoreApplication::translate("chifoumivue", "Vous", nullptr));
        ScoreMachine->setText(QCoreApplication::translate("chifoumivue", "0", nullptr));
        SelectJoueur->setText(QString());
        Fight->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("chifoumivue", "Choisissez une figure :", nullptr));
        Ciseaux->setText(QString());
        Feuille->setText(QString());
        Pierre->setText(QString());
        BoutonPartie->setText(QCoreApplication::translate("chifoumivue", "Nouvelle Partie", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("chifoumivue", "Fichier", nullptr));
        menuaide->setTitle(QCoreApplication::translate("chifoumivue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chifoumivue: public Ui_chifoumivue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHIFOUMIVUE_H
