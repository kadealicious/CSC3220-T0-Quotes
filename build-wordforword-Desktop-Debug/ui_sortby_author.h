/********************************************************************************
** Form generated from reading UI file 'sortby_author.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTBY_AUTHOR_H
#define UI_SORTBY_AUTHOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_sortby_author
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *sortby_author)
    {
        if (sortby_author->objectName().isEmpty())
            sortby_author->setObjectName(QString::fromUtf8("sortby_author"));
        sortby_author->resize(801, 593);
        tableView = new QTableView(sortby_author);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 781, 531));
        pushButton = new QPushButton(sortby_author);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 550, 93, 28));

        retranslateUi(sortby_author);

        QMetaObject::connectSlotsByName(sortby_author);
    } // setupUi

    void retranslateUi(QDialog *sortby_author)
    {
        sortby_author->setWindowTitle(QCoreApplication::translate("sortby_author", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("sortby_author", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sortby_author: public Ui_sortby_author {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTBY_AUTHOR_H
