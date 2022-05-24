/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelQuestionOuiNon;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOui;
    QPushButton *btnNon;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(214, 88);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelQuestionOuiNon = new QLabel(Dialog);
        labelQuestionOuiNon->setObjectName(QString::fromUtf8("labelQuestionOuiNon"));

        verticalLayout->addWidget(labelQuestionOuiNon);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnOui = new QPushButton(Dialog);
        btnOui->setObjectName(QString::fromUtf8("btnOui"));

        horizontalLayout->addWidget(btnOui);

        btnNon = new QPushButton(Dialog);
        btnNon->setObjectName(QString::fromUtf8("btnNon"));

        horizontalLayout->addWidget(btnNon);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialogue et valeur de retour", nullptr));
        labelQuestionOuiNon->setText(QCoreApplication::translate("Dialog", "Etes-vous d'accord ?", nullptr));
        btnOui->setText(QCoreApplication::translate("Dialog", "Oui", nullptr));
        btnNon->setText(QCoreApplication::translate("Dialog", "Non", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
