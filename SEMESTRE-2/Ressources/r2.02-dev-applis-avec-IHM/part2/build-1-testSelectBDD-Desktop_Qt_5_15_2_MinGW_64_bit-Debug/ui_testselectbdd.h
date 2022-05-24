/********************************************************************************
** Form generated from reading UI file 'testselectbdd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSELECTBDD_H
#define UI_TESTSELECTBDD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testSelectBDD
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *testSelectBDD)
    {
        if (testSelectBDD->objectName().isEmpty())
            testSelectBDD->setObjectName(QString::fromUtf8("testSelectBDD"));
        testSelectBDD->resize(296, 252);
        centralwidget = new QWidget(testSelectBDD);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 10, 256, 192));
        testSelectBDD->setCentralWidget(centralwidget);
        menubar = new QMenuBar(testSelectBDD);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 296, 20));
        testSelectBDD->setMenuBar(menubar);
        statusbar = new QStatusBar(testSelectBDD);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        testSelectBDD->setStatusBar(statusbar);

        retranslateUi(testSelectBDD);

        QMetaObject::connectSlotsByName(testSelectBDD);
    } // setupUi

    void retranslateUi(QMainWindow *testSelectBDD)
    {
        testSelectBDD->setWindowTitle(QCoreApplication::translate("testSelectBDD", "testSelectBDD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testSelectBDD: public Ui_testSelectBDD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSELECTBDD_H
