#include "addauthor.h"
#include "ui_addauthor.h"

addauthor::addauthor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addauthor)
{
    ui->setupUi(this);
}

addauthor::~addauthor()
{
    delete ui;
}

void addauthor::on_pushButton_2_clicked()
{
    this->close();
}


void addauthor::on_pushButton_clicked()
{
    this->close();
}

