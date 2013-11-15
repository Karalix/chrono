/********************************************************************************
** Form generated from reading UI file 'chrono.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHRONO_H
#define UI_CHRONO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chrono
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *startStop;
    QPushButton *reset;
    QSpacerItem *horizontalSpacer;
    QPushButton *quit;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *affichageM;
    QLCDNumber *affichageS;
    QLCDNumber *affichageMs;

    void setupUi(QWidget *chrono)
    {
        if (chrono->objectName().isEmpty())
            chrono->setObjectName(QString::fromUtf8("chrono"));
        chrono->resize(495, 129);
        gridLayout = new QGridLayout(chrono);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startStop = new QPushButton(chrono);
        startStop->setObjectName(QString::fromUtf8("startStop"));

        horizontalLayout->addWidget(startStop);

        reset = new QPushButton(chrono);
        reset->setObjectName(QString::fromUtf8("reset"));

        horizontalLayout->addWidget(reset);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        quit = new QPushButton(chrono);
        quit->setObjectName(QString::fromUtf8("quit"));

        horizontalLayout->addWidget(quit);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        affichageM = new QLCDNumber(chrono);
        affichageM->setObjectName(QString::fromUtf8("affichageM"));

        horizontalLayout_2->addWidget(affichageM);

        affichageS = new QLCDNumber(chrono);
        affichageS->setObjectName(QString::fromUtf8("affichageS"));

        horizontalLayout_2->addWidget(affichageS);

        affichageMs = new QLCDNumber(chrono);
        affichageMs->setObjectName(QString::fromUtf8("affichageMs"));

        horizontalLayout_2->addWidget(affichageMs);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(chrono);
        QObject::connect(quit, SIGNAL(clicked()), chrono, SLOT(close()));

        QMetaObject::connectSlotsByName(chrono);
    } // setupUi

    void retranslateUi(QWidget *chrono)
    {
        chrono->setWindowTitle(QApplication::translate("chrono", "Chronom\303\250tre", 0, QApplication::UnicodeUTF8));
        startStop->setText(QApplication::translate("chrono", "Start/Stop", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("chrono", "Reset", 0, QApplication::UnicodeUTF8));
        quit->setText(QApplication::translate("chrono", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Chrono: public Ui_chrono {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHRONO_H
