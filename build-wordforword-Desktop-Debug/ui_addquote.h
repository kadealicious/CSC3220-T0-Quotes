/********************************************************************************
** Form generated from reading UI file 'addquote.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDQUOTE_H
#define UI_ADDQUOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addquote
{
public:
    QComboBox *dropdown_author;
    QComboBox *dropdown_category;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;

    void setupUi(QDialog *addquote)
    {
        if (addquote->objectName().isEmpty())
            addquote->setObjectName(QString::fromUtf8("addquote"));
        addquote->resize(568, 390);
        dropdown_author = new QComboBox(addquote);
        dropdown_author->setObjectName(QString::fromUtf8("dropdown_author"));
        dropdown_author->setGeometry(QRect(340, 40, 181, 31));
        dropdown_category = new QComboBox(addquote);
        dropdown_category->setObjectName(QString::fromUtf8("dropdown_category"));
        dropdown_category->setGeometry(QRect(50, 40, 181, 31));
        pushButton = new QPushButton(addquote);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 320, 93, 28));
        pushButton_2 = new QPushButton(addquote);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 320, 93, 28));
        textEdit = new QTextEdit(addquote);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(110, 100, 351, 201));

        retranslateUi(addquote);

        QMetaObject::connectSlotsByName(addquote);
    } // setupUi

    void retranslateUi(QDialog *addquote)
    {
        addquote->setWindowTitle(QCoreApplication::translate("addquote", "Dialog", nullptr));
        dropdown_author->setPlaceholderText(QCoreApplication::translate("addquote", "Select an Author", nullptr));
        dropdown_category->setPlaceholderText(QCoreApplication::translate("addquote", "Select a Category", nullptr));
        pushButton->setText(QCoreApplication::translate("addquote", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addquote", "Save", nullptr));
        textEdit->setHtml(QCoreApplication::translate("addquote", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addquote: public Ui_addquote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDQUOTE_H
