/********************************************************************************
** Form generated from reading UI file 'sortby_category.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTBY_CATEGORY_H
#define UI_SORTBY_CATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_sortby_category
{
public:
    QTableView *tableView;

    void setupUi(QDialog *sortby_category)
    {
        if (sortby_category->objectName().isEmpty())
            sortby_category->setObjectName(QString::fromUtf8("sortby_category"));
        sortby_category->resize(801, 596);
        tableView = new QTableView(sortby_category);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 50, 451, 501));

        retranslateUi(sortby_category);

        QMetaObject::connectSlotsByName(sortby_category);
    } // setupUi

    void retranslateUi(QDialog *sortby_category)
    {
        sortby_category->setWindowTitle(QCoreApplication::translate("sortby_category", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sortby_category: public Ui_sortby_category {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTBY_CATEGORY_H
