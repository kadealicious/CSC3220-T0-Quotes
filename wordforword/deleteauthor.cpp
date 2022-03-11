#include "deleteauthor.h"
#include "ui_deleteauthor.h"
#include"mainwindow.h"

deleteauthor::deleteauthor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteauthor)
{
    ui->setupUi(this);

    // Initialize SQL queries.
    QString sql_getauthor = "SELECT author_name FROM author";
    QSqlQuery query;

    // Populate category dropdown.
    if(query.exec(sql_getauthor)) {
        qDebug() << "Author query success!";
    } else {
        qDebug() << "ERROR: Author query failed!";
    }
    while(query.next()) {
        ui->comboBox->addItem(query.value(0).toString());
    }
}

deleteauthor::~deleteauthor()
{
    delete ui;
}

void deleteauthor::on_pushButton_clicked()
{
    this->close();
}


void deleteauthor::on_pushButton_2_clicked()
{
    this->close();
}

