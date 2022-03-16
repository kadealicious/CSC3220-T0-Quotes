#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"addcategory.h"
#include"addauthor.h"
#include"addquote.h"
#include"editauthor.h"
#include"editcategory.h"
#include"deleteauthor.h"
#include"deletecategory.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialize database.
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString db_path = "C:/Users/kades/OneDrive/Documents/school/2021-2022/winter/Apps. Programming/CSC3220-T0-Quotes/wordforword-db.db";
    db.setDatabaseName(db_path);

    // Open database.
    db.open();
    if(db.isOpen()) {
        qDebug() << "Connection success!";
    } else {
        qDebug() << "ERROR: Connection failed!";
    }

    sortby_categoryUI = new sortby_category(this);
    sortby_categoryUI->hide();

    sortby_authorUI = new sortby_author(this);
    sortby_authorUI->hide();
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
    delete sortby_categoryUI;
    delete sortby_authorUI;
}


void MainWindow::on_addcategory_triggered()
{
    addcategory addUI;
    addUI.setModal(true);
    addUI.exec();
}


void MainWindow::on_addauthor_triggered()
{
    addauthor addUI;
    addUI.setModal(true);
    addUI.exec();
}


void MainWindow::on_addquote_triggered()
{
    addquote addUI;
    addUI.setModal(true);
    addUI.exec();
}


void MainWindow::on_editauthor_triggered()
{
    editauthor editUI;
    editUI.setModal(true);
    editUI.exec();
}


void MainWindow::on_editcategory_triggered()
{
    editcategory editUI;
    editUI.setModal(true);
    editUI.exec();
}


void MainWindow::on_deleteauthor_triggered()
{
    deleteauthor deleteUI;
    deleteUI.setModal(true);
    deleteUI.exec();
}

void MainWindow::on_deletecategory_triggered()
{
    deletecategory deleteUI;
    deleteUI.setModal(true);
    deleteUI.exec();
}

void MainWindow::on_button_category_clicked()
{
    hide();
    sortby_categoryUI->show();
}

void MainWindow::on_button_author_clicked()
{
    hide();
    sortby_authorUI->show();
}
