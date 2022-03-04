#include "editcategory.h"
#include "ui_editcategory.h"

editcategory::editcategory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editcategory)
{
    ui->setupUi(this);
}

editcategory::~editcategory()
{
    delete ui;
}

void editcategory::on_pushButton_clicked()
{
    this->close();
}


void editcategory::on_pushButton_2_clicked()
{
    this->close();
}

