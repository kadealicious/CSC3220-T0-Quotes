#include "addquote.h"
#include "ui_addquote.h"

addquote::addquote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addquote)
{
    ui->setupUi(this);
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

