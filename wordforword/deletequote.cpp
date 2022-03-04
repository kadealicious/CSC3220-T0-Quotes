#include "deletequote.h"
#include "ui_deletequote.h"

deletequote::deletequote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletequote)
{
    ui->setupUi(this);
}

deletequote::~deletequote()
{
    delete ui;
}

void deletequote::on_pushButton_clicked()
{
    this->close();
}


void deletequote::on_pushButton_2_clicked()
{
    this->close();
}

