/********************************************************************************
** Form generated from reading UI file 'convertisseurtempv2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTISSEURTEMPV2_H
#define UI_CONVERTISSEURTEMPV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConvertisseurTempV2
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTitre;
    QGridLayout *gridLayout;
    QLabel *labelFarenheit;
    QLabel *labelCelsius;
    QLabel *labelResultat;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *boutonEffacer;
    QPushButton *boutonConvertir;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *boutonQuitter;
    QMenuBar *menubar;
    QMenu *menuConvertisseurTemp;
    QMenu *menuaide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConvertisseurTempV2)
    {
        if (ConvertisseurTempV2->objectName().isEmpty())
            ConvertisseurTempV2->setObjectName(QString::fromUtf8("ConvertisseurTempV2"));
        ConvertisseurTempV2->resize(390, 410);
        centralwidget = new QWidget(ConvertisseurTempV2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelTitre = new QLabel(centralwidget);
        labelTitre->setObjectName(QString::fromUtf8("labelTitre"));

        verticalLayout_2->addWidget(labelTitre);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelFarenheit = new QLabel(centralwidget);
        labelFarenheit->setObjectName(QString::fromUtf8("labelFarenheit"));

        gridLayout->addWidget(labelFarenheit, 0, 1, 1, 1);

        labelCelsius = new QLabel(centralwidget);
        labelCelsius->setObjectName(QString::fromUtf8("labelCelsius"));

        gridLayout->addWidget(labelCelsius, 0, 0, 1, 1);

        labelResultat = new QLabel(centralwidget);
        labelResultat->setObjectName(QString::fromUtf8("labelResultat"));

        gridLayout->addWidget(labelResultat, 1, 1, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        boutonEffacer = new QPushButton(centralwidget);
        boutonEffacer->setObjectName(QString::fromUtf8("boutonEffacer"));

        horizontalLayout->addWidget(boutonEffacer);

        boutonConvertir = new QPushButton(centralwidget);
        boutonConvertir->setObjectName(QString::fromUtf8("boutonConvertir"));
        boutonConvertir->setAutoDefault(true);

        horizontalLayout->addWidget(boutonConvertir);


        horizontalLayout_4->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        boutonQuitter = new QPushButton(centralwidget);
        boutonQuitter->setObjectName(QString::fromUtf8("boutonQuitter"));

        horizontalLayout_2->addWidget(boutonQuitter);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);

        ConvertisseurTempV2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConvertisseurTempV2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 390, 20));
        menuConvertisseurTemp = new QMenu(menubar);
        menuConvertisseurTemp->setObjectName(QString::fromUtf8("menuConvertisseurTemp"));
        menuaide = new QMenu(menubar);
        menuaide->setObjectName(QString::fromUtf8("menuaide"));
        ConvertisseurTempV2->setMenuBar(menubar);
        statusbar = new QStatusBar(ConvertisseurTempV2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ConvertisseurTempV2->setStatusBar(statusbar);

        menubar->addAction(menuConvertisseurTemp->menuAction());
        menubar->addAction(menuaide->menuAction());

        retranslateUi(ConvertisseurTempV2);
        QObject::connect(boutonQuitter, SIGNAL(clicked()), ConvertisseurTempV2, SLOT(close()));

        QMetaObject::connectSlotsByName(ConvertisseurTempV2);
    } // setupUi

    void retranslateUi(QMainWindow *ConvertisseurTempV2)
    {
        ConvertisseurTempV2->setWindowTitle(QCoreApplication::translate("ConvertisseurTempV2", "ConvertisseurTempV2", nullptr));
        labelTitre->setText(QCoreApplication::translate("ConvertisseurTempV2", "Convertisseur temp\303\251rature", nullptr));
        labelFarenheit->setText(QCoreApplication::translate("ConvertisseurTempV2", "degr\303\251 Farenheit", nullptr));
        labelCelsius->setText(QCoreApplication::translate("ConvertisseurTempV2", "degr\303\251 Celsius", nullptr));
        labelResultat->setText(QCoreApplication::translate("ConvertisseurTempV2", "---.---", nullptr));
        boutonEffacer->setText(QCoreApplication::translate("ConvertisseurTempV2", "Effacer", nullptr));
        boutonConvertir->setText(QCoreApplication::translate("ConvertisseurTempV2", "Convertir", nullptr));
        boutonQuitter->setText(QCoreApplication::translate("ConvertisseurTempV2", "Quitter", nullptr));
        menuConvertisseurTemp->setTitle(QCoreApplication::translate("ConvertisseurTempV2", "Fichier", nullptr));
        menuaide->setTitle(QCoreApplication::translate("ConvertisseurTempV2", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConvertisseurTempV2: public Ui_ConvertisseurTempV2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTISSEURTEMPV2_H
