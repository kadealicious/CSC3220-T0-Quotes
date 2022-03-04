/********************************************************************************
** Form generated from reading UI file 'editcategory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCATEGORY_H
#define UI_EDITCATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editcategory
{
public:
    QPushButton *pushButton_2;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *editcategory)
    {
        if (editcategory->objectName().isEmpty())
            editcategory->setObjectName(QString::fromUtf8("editcategory"));
        editcategory->resize(562, 180);
        pushButton_2 = new QPushButton(editcategory);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 120, 93, 28));
        label = new QLabel(editcategory);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 101, 41));
        plainTextEdit = new QPlainTextEdit(editcategory);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(170, 46, 331, 31));
        pushButton = new QPushButton(editcategory);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 120, 93, 28));

        retranslateUi(editcategory);

        QMetaObject::connectSlotsByName(editcategory);
    } // setupUi

    void retranslateUi(QDialog *editcategory)
    {
        editcategory->setWindowTitle(QCoreApplication::translate("editcategory", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("editcategory", "Save", nullptr));
        label->setText(QCoreApplication::translate("editcategory", "Category Name", nullptr));
        pushButton->setText(QCoreApplication::translate("editcategory", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editcategory: public Ui_editcategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCATEGORY_H
