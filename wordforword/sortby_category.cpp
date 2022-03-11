#include "sortby_category.h"
#include "ui_sortby_category.h"

sortby_category::sortby_category(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortby_category)
{
    ui->setupUi(this);
}

sortby_category::~sortby_category()
{
    delete ui;
}
