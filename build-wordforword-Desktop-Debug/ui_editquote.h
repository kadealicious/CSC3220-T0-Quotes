/********************************************************************************
** Form generated from reading UI file 'editquote.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITQUOTE_H
#define UI_EDITQUOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editquote
{
public:
    QComboBox *comboBox;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *editquote)
    {
        if (editquote->objectName().isEmpty())
            editquote->setObjectName(QString::fromUtf8("editquote"));
        editquote->resize(554, 449);
        comboBox = new QComboBox(editquote);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(210, 40, 131, 22));
        plainTextEdit = new QPlainTextEdit(editquote);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(140, 90, 281, 221));
        pushButton = new QPushButton(editquote);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 340, 93, 28));
        pushButton_2 = new QPushButton(editquote);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 340, 93, 28));

        retranslateUi(editquote);

        QMetaObject::connectSlotsByName(editquote);
    } // setupUi

    void retranslateUi(QDialog *editquote)
    {
        editquote->setWindowTitle(QCoreApplication::translate("editquote", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("editquote", "Category", nullptr));

        pushButton->setText(QCoreApplication::translate("editquote", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("editquote", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editquote: public Ui_editquote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITQUOTE_H
