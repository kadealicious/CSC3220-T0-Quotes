#include "deletecategory.h"
#include "ui_deletecategory.h"

deletecategory::deletecategory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletecategory)
{
    ui->setupUi(this);
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

