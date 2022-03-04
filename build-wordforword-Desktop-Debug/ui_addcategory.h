/********************************************************************************
** Form generated from reading UI file 'addcategory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCATEGORY_H
#define UI_ADDCATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addcategory
{
public:
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addcategory)
    {
        if (addcategory->objectName().isEmpty())
            addcategory->setObjectName(QString::fromUtf8("addcategory"));
        addcategory->resize(564, 186);
        plainTextEdit = new QPlainTextEdit(addcategory);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(170, 46, 331, 31));
        label = new QLabel(addcategory);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 101, 41));
        pushButton = new QPushButton(addcategory);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 120, 93, 28));
        pushButton_2 = new QPushButton(addcategory);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 120, 93, 28));

        retranslateUi(addcategory);

        QMetaObject::connectSlotsByName(addcategory);
    } // setupUi

    void retranslateUi(QDialog *addcategory)
    {
        addcategory->setWindowTitle(QCoreApplication::translate("addcategory", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addcategory", "Category Name", nullptr));
        pushButton->setText(QCoreApplication::translate("addcategory", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addcategory", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addcategory: public Ui_addcategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCATEGORY_H
