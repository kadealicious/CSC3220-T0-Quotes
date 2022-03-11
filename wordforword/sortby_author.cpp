#include "sortby_author.h"
#include "ui_sortby_author.h"

sortby_author::sortby_author(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortby_author)
{
    ui->setupUi(this);
}

sortby_author::~sortby_author()
{
    delete ui;
}
