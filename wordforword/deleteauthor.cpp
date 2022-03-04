#include "deleteauthor.h"
#include "ui_deleteauthor.h"

deleteauthor::deleteauthor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteauthor)
{
    ui->setupUi(this);
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

