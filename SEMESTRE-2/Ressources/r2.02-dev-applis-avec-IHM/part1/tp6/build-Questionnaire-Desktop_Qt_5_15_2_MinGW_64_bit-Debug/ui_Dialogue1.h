/********************************************************************************
** Form generated from reading UI file 'Dialogue1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUE1_H
#define UI_DIALOGUE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogue1
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton;
    QFormLayout *formLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dialogue1)
    {
        if (Dialogue1->objectName().isEmpty())
            Dialogue1->setObjectName(QString::fromUtf8("Dialogue1"));
        Dialogue1->setEnabled(true);
        Dialogue1->resize(323, 170);
        Dialogue1->setMinimumSize(QSize(323, 170));
        Dialogue1->setMaximumSize(QSize(323, 170));
        centralwidget = new QWidget(Dialogue1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(9, 9, 301, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        radioButton = new QRadioButton(formLayoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, radioButton);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pushButton_2);


        formLayout->setLayout(3, QFormLayout::FieldRole, formLayout_2);

        Dialogue1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dialogue1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 323, 20));
        Dialogue1->setMenuBar(menubar);
        statusbar = new QStatusBar(Dialogue1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Dialogue1->setStatusBar(statusbar);

        retranslateUi(Dialogue1);

        QMetaObject::connectSlotsByName(Dialogue1);
    } // setupUi

    void retranslateUi(QMainWindow *Dialogue1)
    {
        Dialogue1->setWindowTitle(QCoreApplication::translate("Dialogue1", "Dialogue1", nullptr));
        label->setText(QCoreApplication::translate("Dialogue1", "Nom", nullptr));
        label_2->setText(QCoreApplication::translate("Dialogue1", "Pr\303\251nom", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialogue1", "Avez-vous plus de 18 ans ?", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialogue1", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialogue1", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogue1: public Ui_Dialogue1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUE1_H
