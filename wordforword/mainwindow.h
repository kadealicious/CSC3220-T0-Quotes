#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QDataWidgetMapper>
#include<QSqlError>
#include<QLineEdit>
#include<QDebug>

#include"sortby_category.h"
#include"sortby_author.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addcategory_triggered();

    void on_addauthor_triggered();

    void on_addquote_triggered();

    void on_editauthor_triggered();

    void on_editcategory_triggered();

    void on_deleteauthor_triggered();

    void on_deletecategory_triggered();

    void on_button_category_clicked();

    void on_button_author_clicked();

private:
    Ui::MainWindow *ui;
    sortby_category *sortby_categoryUI;
    sortby_author *sortby_authorUI;
};
#endif // MAINWINDOW_H
