/********************************************************************************
** Form generated from reading UI file 'deletequote.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEQUOTE_H
#define UI_DELETEQUOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_deletequote
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *deletequote)
    {
        if (deletequote->objectName().isEmpty())
            deletequote->setObjectName(QString::fromUtf8("deletequote"));
        deletequote->resize(400, 300);
        label = new QLabel(deletequote);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 301, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        pushButton = new QPushButton(deletequote);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 240, 93, 28));
        pushButton_2 = new QPushButton(deletequote);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 240, 93, 28));
        textBrowser = new QTextBrowser(deletequote);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 80, 231, 121));

        retranslateUi(deletequote);

        QMetaObject::connectSlotsByName(deletequote);
    } // setupUi

    void retranslateUi(QDialog *deletequote)
    {
        deletequote->setWindowTitle(QCoreApplication::translate("deletequote", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deletequote", "Are you sure you want to delete?", nullptr));
        pushButton->setText(QCoreApplication::translate("deletequote", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("deletequote", "Delete", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("deletequote", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an...&quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-unknown</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletequote: public Ui_deletequote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEQUOTE_H
