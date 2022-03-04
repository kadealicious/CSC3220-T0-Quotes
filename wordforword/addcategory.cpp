#include "addcategory.h"
#include "ui_addcategory.h"

addcategory::addcategory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addcategory)
{
    ui->setupUi(this);
}

addcategory::~addcategory()
{
    delete ui;
}

void addcategory::on_pushButton_clicked()
{
    this->close();
}


void addcategory::on_pushButton_2_clicked()
{
    this->close();
}

