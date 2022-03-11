/********************************************************************************
** Form generated from reading UI file 'sortbycategory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTBYCATEGORY_H
#define UI_SORTBYCATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sortbycategory
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sortbycategory)
    {
        if (sortbycategory->objectName().isEmpty())
            sortbycategory->setObjectName(QString::fromUtf8("sortbycategory"));
        sortbycategory->resize(800, 600);
        menubar = new QMenuBar(sortbycategory);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        sortbycategory->setMenuBar(menubar);
        centralwidget = new QWidget(sortbycategory);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sortbycategory->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(sortbycategory);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        sortbycategory->setStatusBar(statusbar);

        retranslateUi(sortbycategory);

        QMetaObject::connectSlotsByName(sortbycategory);
    } // setupUi

    void retranslateUi(QMainWindow *sortbycategory)
    {
        sortbycategory->setWindowTitle(QCoreApplication::translate("sortbycategory", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sortbycategory: public Ui_sortbycategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTBYCATEGORY_H
