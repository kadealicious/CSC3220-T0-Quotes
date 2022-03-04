/********************************************************************************
** Form generated from reading UI file 'deletecategory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECATEGORY_H
#define UI_DELETECATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deletecategory
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QComboBox *comboBox;

    void setupUi(QDialog *deletecategory)
    {
        if (deletecategory->objectName().isEmpty())
            deletecategory->setObjectName(QString::fromUtf8("deletecategory"));
        deletecategory->resize(400, 210);
        pushButton = new QPushButton(deletecategory);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 150, 93, 28));
        label = new QLabel(deletecategory);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 301, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        pushButton_2 = new QPushButton(deletecategory);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 150, 93, 28));
        comboBox = new QComboBox(deletecategory);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 70, 291, 51));
        QFont font1;
        font1.setPointSize(11);
        comboBox->setFont(font1);

        retranslateUi(deletecategory);

        QMetaObject::connectSlotsByName(deletecategory);
    } // setupUi

    void retranslateUi(QDialog *deletecategory)
    {
        deletecategory->setWindowTitle(QCoreApplication::translate("deletecategory", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("deletecategory", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("deletecategory", "Are you sure you want to delete?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("deletecategory", "Delete", nullptr));
        comboBox->setPlaceholderText(QCoreApplication::translate("deletecategory", "Select a Category", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletecategory: public Ui_deletecategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECATEGORY_H
