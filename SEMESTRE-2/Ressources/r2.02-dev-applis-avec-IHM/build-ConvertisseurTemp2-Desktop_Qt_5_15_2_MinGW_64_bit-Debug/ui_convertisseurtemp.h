/********************************************************************************
** Form generated from reading UI file 'convertisseurtemp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTISSEURTEMP_H
#define UI_CONVERTISSEURTEMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConvertisseurTemp
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConvertisseurTemp)
    {
        if (ConvertisseurTemp->objectName().isEmpty())
            ConvertisseurTemp->setObjectName(QString::fromUtf8("ConvertisseurTemp"));
        ConvertisseurTemp->resize(800, 600);
        centralwidget = new QWidget(ConvertisseurTemp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ConvertisseurTemp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConvertisseurTemp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        ConvertisseurTemp->setMenuBar(menubar);
        statusbar = new QStatusBar(ConvertisseurTemp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ConvertisseurTemp->setStatusBar(statusbar);

        retranslateUi(ConvertisseurTemp);

        QMetaObject::connectSlotsByName(ConvertisseurTemp);
    } // setupUi

    void retranslateUi(QMainWindow *ConvertisseurTemp)
    {
        ConvertisseurTemp->setWindowTitle(QCoreApplication::translate("ConvertisseurTemp", "ConvertisseurTemp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConvertisseurTemp: public Ui_ConvertisseurTemp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTISSEURTEMP_H
