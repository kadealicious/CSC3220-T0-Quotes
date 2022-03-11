/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *addquote;
    QAction *addauthor;
    QAction *addcategory;
    QAction *sortby_author;
    QAction *sortby_category;
    QAction *editauthor;
    QAction *editcategory;
    QAction *deleteauthor;
    QAction *deletecategory;
    QWidget *centralwidget;
    QLabel *label_wordforword;
    QLabel *label_welcometo;
    QLabel *label_quoteoftheday;
    QLabel *quoteoftheday;
    QLabel *label_wordforword_2;
    QPushButton *button_category;
    QPushButton *button_author;
    QMenuBar *menubar;
    QMenu *menuWord_ForWord;
    QMenu *menuEdit;
    QMenu *menuDelete;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        addquote = new QAction(MainWindow);
        addquote->setObjectName(QString::fromUtf8("addquote"));
        addauthor = new QAction(MainWindow);
        addauthor->setObjectName(QString::fromUtf8("addauthor"));
        addcategory = new QAction(MainWindow);
        addcategory->setObjectName(QString::fromUtf8("addcategory"));
        sortby_author = new QAction(MainWindow);
        sortby_author->setObjectName(QString::fromUtf8("sortby_author"));
        sortby_category = new QAction(MainWindow);
        sortby_category->setObjectName(QString::fromUtf8("sortby_category"));
        editauthor = new QAction(MainWindow);
        editauthor->setObjectName(QString::fromUtf8("editauthor"));
        editcategory = new QAction(MainWindow);
        editcategory->setObjectName(QString::fromUtf8("editcategory"));
        deleteauthor = new QAction(MainWindow);
        deleteauthor->setObjectName(QString::fromUtf8("deleteauthor"));
        deletecategory = new QAction(MainWindow);
        deletecategory->setObjectName(QString::fromUtf8("deletecategory"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_wordforword = new QLabel(centralwidget);
        label_wordforword->setObjectName(QString::fromUtf8("label_wordforword"));
        label_wordforword->setGeometry(QRect(180, 110, 471, 91));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label_wordforword->setFont(font);
        label_welcometo = new QLabel(centralwidget);
        label_welcometo->setObjectName(QString::fromUtf8("label_welcometo"));
        label_welcometo->setGeometry(QRect(180, 40, 331, 121));
        label_quoteoftheday = new QLabel(centralwidget);
        label_quoteoftheday->setObjectName(QString::fromUtf8("label_quoteoftheday"));
        label_quoteoftheday->setGeometry(QRect(180, 220, 391, 51));
        quoteoftheday = new QLabel(centralwidget);
        quoteoftheday->setObjectName(QString::fromUtf8("quoteoftheday"));
        quoteoftheday->setGeometry(QRect(180, 230, 401, 121));
        QFont font1;
        font1.setItalic(true);
        quoteoftheday->setFont(font1);
        quoteoftheday->setWordWrap(true);
        label_wordforword_2 = new QLabel(centralwidget);
        label_wordforword_2->setObjectName(QString::fromUtf8("label_wordforword_2"));
        label_wordforword_2->setGeometry(QRect(180, 320, 391, 91));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_wordforword_2->setFont(font2);
        label_wordforword_2->setAlignment(Qt::AlignCenter);
        button_category = new QPushButton(centralwidget);
        button_category->setObjectName(QString::fromUtf8("button_category"));
        button_category->setGeometry(QRect(250, 450, 93, 28));
        button_author = new QPushButton(centralwidget);
        button_author->setObjectName(QString::fromUtf8("button_author"));
        button_author->setGeometry(QRect(410, 450, 93, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuWord_ForWord = new QMenu(menubar);
        menuWord_ForWord->setObjectName(QString::fromUtf8("menuWord_ForWord"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuDelete = new QMenu(menubar);
        menuDelete->setObjectName(QString::fromUtf8("menuDelete"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuWord_ForWord->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuDelete->menuAction());
        menuWord_ForWord->addAction(addquote);
        menuWord_ForWord->addAction(addauthor);
        menuWord_ForWord->addAction(addcategory);
        menuEdit->addAction(editauthor);
        menuEdit->addAction(editcategory);
        menuDelete->addAction(deleteauthor);
        menuDelete->addAction(deletecategory);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addquote->setText(QCoreApplication::translate("MainWindow", "Quote", nullptr));
#if QT_CONFIG(shortcut)
        addquote->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        addauthor->setText(QCoreApplication::translate("MainWindow", "Author", nullptr));
#if QT_CONFIG(shortcut)
        addauthor->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        addcategory->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
#if QT_CONFIG(tooltip)
        addcategory->setToolTip(QCoreApplication::translate("MainWindow", "Add a category", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        addcategory->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        sortby_author->setText(QCoreApplication::translate("MainWindow", "Author", nullptr));
#if QT_CONFIG(shortcut)
        sortby_author->setShortcut(QCoreApplication::translate("MainWindow", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        sortby_category->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
#if QT_CONFIG(shortcut)
        sortby_category->setShortcut(QCoreApplication::translate("MainWindow", "Alt+W", nullptr));
#endif // QT_CONFIG(shortcut)
        editauthor->setText(QCoreApplication::translate("MainWindow", "Author", nullptr));
#if QT_CONFIG(shortcut)
        editauthor->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        editcategory->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
#if QT_CONFIG(shortcut)
        editcategory->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+W", nullptr));
#endif // QT_CONFIG(shortcut)
        deleteauthor->setText(QCoreApplication::translate("MainWindow", "Author", nullptr));
#if QT_CONFIG(shortcut)
        deleteauthor->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        deletecategory->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
#if QT_CONFIG(shortcut)
        deletecategory->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+W", nullptr));
#endif // QT_CONFIG(shortcut)
        label_wordforword->setText(QCoreApplication::translate("MainWindow", "Word ForWord", nullptr));
        label_welcometo->setText(QCoreApplication::translate("MainWindow", "Welcome to...", nullptr));
        label_quoteoftheday->setText(QCoreApplication::translate("MainWindow", "Quote of the day: ", nullptr));
        quoteoftheday->setText(QCoreApplication::translate("MainWindow", "\"You never know if you don't go; you'll never shine if you don't glow.\" - Steve Harwell, c. 1998", nullptr));
        label_wordforword_2->setText(QCoreApplication::translate("MainWindow", "Sort by:", nullptr));
        button_category->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        button_author->setText(QCoreApplication::translate("MainWindow", "Author", nullptr));
        menuWord_ForWord->setTitle(QCoreApplication::translate("MainWindow", "Add", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuDelete->setTitle(QCoreApplication::translate("MainWindow", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
