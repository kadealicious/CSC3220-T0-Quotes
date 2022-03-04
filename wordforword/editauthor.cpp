#include "editauthor.h"
#include "ui_editauthor.h"

editauthor::editauthor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editauthor)
{
    ui->setupUi(this);
}

editauthor::~editauthor()
{
    delete ui;
}

void editauthor::on_pushButton_2_clicked()
{
    this->close();
}


void editauthor::on_pushButton_clicked()
{
    this->close();
}

