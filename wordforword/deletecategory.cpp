#include "deletecategory.h"
#include "ui_deletecategory.h"
#include"mainwindow.h"

deletecategory::deletecategory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletecategory)
{
    ui->setupUi(this);

    // Initialize SQL queries.
    QString sql_getcategory = "SELECT category_name FROM categories";
    QSqlQuery query;

    // Populate category dropdown.
    if(query.exec(sql_getcategory)) {
        qDebug() << "Category query success!";
    } else {
        qDebug() << "ERROR: Category query failed!";
    }
    while(query.next()) {
        ui->comboBox->addItem(query.value(0).toString());
    }
}

deletecategory::~deletecategory()
{
    delete ui;
}

void deletecategory::on_pushButton_clicked()
{
    this->close();
}


void deletecategory::on_pushButton_2_clicked()
{
    this->close();
}

