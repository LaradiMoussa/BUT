/********************************************************************************
** Form generated from reading UI file 'ampoulevue.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPOULEVUE_H
#define UI_AMPOULEVUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AmpouleVue
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelEtat;
    QHBoxLayout *horizontalLayout;
    QPushButton *bAllumer;
    QPushButton *bEteindre;

    void setupUi(QWidget *AmpouleVue)
    {
        if (AmpouleVue->objectName().isEmpty())
            AmpouleVue->setObjectName(QString::fromUtf8("AmpouleVue"));
        AmpouleVue->resize(205, 112);
        verticalLayout = new QVBoxLayout(AmpouleVue);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelEtat = new QLabel(AmpouleVue);
        labelEtat->setObjectName(QString::fromUtf8("labelEtat"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelEtat->sizePolicy().hasHeightForWidth());
        labelEtat->setSizePolicy(sizePolicy);
        labelEtat->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelEtat);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bAllumer = new QPushButton(AmpouleVue);
        bAllumer->setObjectName(QString::fromUtf8("bAllumer"));

        horizontalLayout->addWidget(bAllumer);

        bEteindre = new QPushButton(AmpouleVue);
        bEteindre->setObjectName(QString::fromUtf8("bEteindre"));

        horizontalLayout->addWidget(bEteindre);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AmpouleVue);

        QMetaObject::connectSlotsByName(AmpouleVue);
    } // setupUi

    void retranslateUi(QWidget *AmpouleVue)
    {
        AmpouleVue->setWindowTitle(QCoreApplication::translate("AmpouleVue", "Ampoule", nullptr));
        labelEtat->setText(QCoreApplication::translate("AmpouleVue", "-----", nullptr));
        bAllumer->setText(QCoreApplication::translate("AmpouleVue", "Allumer", nullptr));
        bEteindre->setText(QCoreApplication::translate("AmpouleVue", "Eteindre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AmpouleVue: public Ui_AmpouleVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPOULEVUE_H
