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
}

MainWindow::~MainWindow()
{
    delete ui;
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

