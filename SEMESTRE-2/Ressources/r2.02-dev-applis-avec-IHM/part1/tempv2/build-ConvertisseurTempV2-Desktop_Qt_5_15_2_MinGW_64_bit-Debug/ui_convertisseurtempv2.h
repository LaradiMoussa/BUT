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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConvertisseurTempV2
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConvertisseurTempV2)
    {
        if (ConvertisseurTempV2->objectName().isEmpty())
            ConvertisseurTempV2->setObjectName(QString::fromUtf8("ConvertisseurTempV2"));
        ConvertisseurTempV2->resize(800, 600);
        centralwidget = new QWidget(ConvertisseurTempV2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ConvertisseurTempV2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConvertisseurTempV2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        ConvertisseurTempV2->setMenuBar(menubar);
        statusbar = new QStatusBar(ConvertisseurTempV2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ConvertisseurTempV2->setStatusBar(statusbar);

        retranslateUi(ConvertisseurTempV2);

        QMetaObject::connectSlotsByName(ConvertisseurTempV2);
    } // setupUi

    void retranslateUi(QMainWindow *ConvertisseurTempV2)
    {
        ConvertisseurTempV2->setWindowTitle(QCoreApplication::translate("ConvertisseurTempV2", "ConvertisseurTempV2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConvertisseurTempV2: public Ui_ConvertisseurTempV2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTISSEURTEMPV2_H
