#include "addquote.h"
#include "ui_addquote.h"
#include"mainwindow.h"

addquote::addquote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addquote)
{
    ui->setupUi(this);

    // Initialize SQL queries.
    QString sql_getcategories = "SELECT category_name FROM categories";
    QString sql_getauthor = "SELECT author_name FROM author";
    QSqlQuery query;

    // Populate category dropdown.
    if(query.exec(sql_getcategories)) {
        qDebug() << "Category query success!";
    } else {
        qDebug() << "ERROR: Category query failed!";
    }
    while(query.next()) {
        ui->dropdown_category->addItem(query.value(0).toString());
    }

    // Populate author dropdown.
    if(query.exec(sql_getauthor)) {
        qDebug() << "Author query success!";
    } else {
        qDebug() << "ERROR: Author query failed!";
    }
    while(query.next()) {
        ui->dropdown_author->addItem(query.value(0).toString());
    }
}

addquote::~addquote()
{
    delete ui;
}

void addquote::on_pushButton_clicked()
{
    this->close();
}


void addquote::on_pushButton_2_clicked()
{
    this->close();
}

