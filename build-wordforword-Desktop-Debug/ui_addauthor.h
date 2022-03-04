/********************************************************************************
** Form generated from reading UI file 'addauthor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAUTHOR_H
#define UI_ADDAUTHOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addauthor
{
public:
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QComboBox *comboBox;
    QSpinBox *spinBox;

    void setupUi(QDialog *addauthor)
    {
        if (addauthor->objectName().isEmpty())
            addauthor->setObjectName(QString::fromUtf8("addauthor"));
        addauthor->resize(586, 579);
        textEdit_4 = new QTextEdit(addauthor);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(160, 20, 321, 41));
        textEdit_5 = new QTextEdit(addauthor);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(160, 290, 371, 211));
        pushButton = new QPushButton(addauthor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 520, 93, 28));
        pushButton_2 = new QPushButton(addauthor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 520, 93, 28));
        label = new QLabel(addauthor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 71, 21));
        label_2 = new QLabel(addauthor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 91, 31));
        label_3 = new QLabel(addauthor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 91, 41));
        label_4 = new QLabel(addauthor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 180, 111, 16));
        label_5 = new QLabel(addauthor);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 230, 91, 31));
        label_7 = new QLabel(addauthor);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 380, 71, 21));
        dateEdit = new QDateEdit(addauthor);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(160, 80, 110, 22));
        dateEdit_2 = new QDateEdit(addauthor);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(160, 130, 110, 22));
        comboBox = new QComboBox(addauthor);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(160, 231, 91, 31));
        spinBox = new QSpinBox(addauthor);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(160, 180, 42, 22));

        retranslateUi(addauthor);

        QMetaObject::connectSlotsByName(addauthor);
    } // setupUi

    void retranslateUi(QDialog *addauthor)
    {
        addauthor->setWindowTitle(QCoreApplication::translate("addauthor", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addauthor", "Save", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addauthor", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("addauthor", "Full name", nullptr));
        label_2->setText(QCoreApplication::translate("addauthor", "Date of birth", nullptr));
        label_3->setText(QCoreApplication::translate("addauthor", "Date of death", nullptr));
        label_4->setText(QCoreApplication::translate("addauthor", "Number of children", nullptr));
        label_5->setText(QCoreApplication::translate("addauthor", "Marital Status", nullptr));
        label_7->setText(QCoreApplication::translate("addauthor", "Biography", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("addauthor", "Unmarried", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("addauthor", "Married", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("addauthor", "Widowed", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("addauthor", "Divorced", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addauthor: public Ui_addauthor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAUTHOR_H
