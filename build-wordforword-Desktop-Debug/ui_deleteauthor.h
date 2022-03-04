/********************************************************************************
** Form generated from reading UI file 'deleteauthor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEAUTHOR_H
#define UI_DELETEAUTHOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteauthor
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *deleteauthor)
    {
        if (deleteauthor->objectName().isEmpty())
            deleteauthor->setObjectName(QString::fromUtf8("deleteauthor"));
        deleteauthor->resize(400, 210);
        pushButton = new QPushButton(deleteauthor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 150, 93, 28));
        pushButton_2 = new QPushButton(deleteauthor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 150, 93, 28));
        label = new QLabel(deleteauthor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 301, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        comboBox = new QComboBox(deleteauthor);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 70, 291, 51));
        QFont font1;
        font1.setPointSize(11);
        comboBox->setFont(font1);

        retranslateUi(deleteauthor);

        QMetaObject::connectSlotsByName(deleteauthor);
    } // setupUi

    void retranslateUi(QDialog *deleteauthor)
    {
        deleteauthor->setWindowTitle(QCoreApplication::translate("deleteauthor", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("deleteauthor", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("deleteauthor", "Delete", nullptr));
        label->setText(QCoreApplication::translate("deleteauthor", "Are you sure you want to delete?", nullptr));
        comboBox->setPlaceholderText(QCoreApplication::translate("deleteauthor", "Select an Author", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteauthor: public Ui_deleteauthor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEAUTHOR_H
