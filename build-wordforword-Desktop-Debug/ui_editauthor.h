/********************************************************************************
** Form generated from reading UI file 'editauthor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITAUTHOR_H
#define UI_EDITAUTHOR_H

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

class Ui_editauthor
{
public:
    QSpinBox *spinBox;
    QLabel *label_7;
    QLabel *label;
    QTextEdit *textEdit_5;
    QPushButton *pushButton;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QDateEdit *dateEdit_2;
    QLabel *label_4;
    QTextEdit *textEdit_4;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QDialog *editauthor)
    {
        if (editauthor->objectName().isEmpty())
            editauthor->setObjectName(QString::fromUtf8("editauthor"));
        editauthor->resize(587, 581);
        spinBox = new QSpinBox(editauthor);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(160, 180, 42, 22));
        label_7 = new QLabel(editauthor);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 380, 71, 21));
        label = new QLabel(editauthor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 71, 21));
        textEdit_5 = new QTextEdit(editauthor);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(160, 290, 371, 211));
        pushButton = new QPushButton(editauthor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 520, 93, 28));
        label_5 = new QLabel(editauthor);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 230, 91, 31));
        dateEdit = new QDateEdit(editauthor);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(160, 80, 110, 22));
        label_3 = new QLabel(editauthor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 91, 41));
        dateEdit_2 = new QDateEdit(editauthor);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(160, 130, 110, 22));
        label_4 = new QLabel(editauthor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 180, 111, 16));
        textEdit_4 = new QTextEdit(editauthor);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(160, 20, 321, 41));
        pushButton_2 = new QPushButton(editauthor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 520, 93, 28));
        label_2 = new QLabel(editauthor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 91, 31));
        comboBox = new QComboBox(editauthor);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(160, 231, 91, 31));

        retranslateUi(editauthor);

        QMetaObject::connectSlotsByName(editauthor);
    } // setupUi

    void retranslateUi(QDialog *editauthor)
    {
        editauthor->setWindowTitle(QCoreApplication::translate("editauthor", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("editauthor", "Biography", nullptr));
        label->setText(QCoreApplication::translate("editauthor", "Full name", nullptr));
        pushButton->setText(QCoreApplication::translate("editauthor", "Save", nullptr));
        label_5->setText(QCoreApplication::translate("editauthor", "Marital Status", nullptr));
        label_3->setText(QCoreApplication::translate("editauthor", "Date of death", nullptr));
        label_4->setText(QCoreApplication::translate("editauthor", "Number of children", nullptr));
        pushButton_2->setText(QCoreApplication::translate("editauthor", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("editauthor", "Date of birth", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("editauthor", "Unmarried", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("editauthor", "Married", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("editauthor", "Widowed", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("editauthor", "Divorced", nullptr));

    } // retranslateUi

};

namespace Ui {
    class editauthor: public Ui_editauthor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITAUTHOR_H
