#include "editquote.h"
#include "ui_editquote.h"

editquote::editquote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editquote)
{
    ui->setupUi(this);
}

editquote::~editquote()
{
    delete ui;
}

void editquote::on_pushButton_2_clicked()
{
    this->close();

}


void editquote::on_pushButton_clicked()
{
    this->close();
}

