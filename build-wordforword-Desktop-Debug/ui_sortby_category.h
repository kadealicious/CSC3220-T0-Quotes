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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_sortby_category
{
public:
    QTableView *maintable;
    QPushButton *pushButton;

    void setupUi(QDialog *sortby_category)
    {
        if (sortby_category->objectName().isEmpty())
            sortby_category->setObjectName(QString::fromUtf8("sortby_category"));
        sortby_category->resize(801, 596);
        maintable = new QTableView(sortby_category);
        maintable->setObjectName(QString::fromUtf8("maintable"));
        maintable->setGeometry(QRect(10, 10, 781, 531));
        pushButton = new QPushButton(sortby_category);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 550, 93, 28));

        retranslateUi(sortby_category);

        QMetaObject::connectSlotsByName(sortby_category);
    } // setupUi

    void retranslateUi(QDialog *sortby_category)
    {
        sortby_category->setWindowTitle(QCoreApplication::translate("sortby_category", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("sortby_category", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sortby_category: public Ui_sortby_category {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTBY_CATEGORY_H
