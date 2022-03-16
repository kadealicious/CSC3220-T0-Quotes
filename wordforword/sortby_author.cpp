#include<QSqlTableModel>
#include"mainwindow.h"
#include "sortby_author.h"
#include "ui_sortby_author.h"

sortby_author::sortby_author(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortby_author)
{
    ui->setupUi(this);

    // Populate table model.
    QSqlTableModel *model = new QSqlTableModel();
    model->setTable("quote");
    model->select();

    // Visual modifications for table model.
    model->setHeaderData(1, Qt::Horizontal, "Author");
    model->setHeaderData(2, Qt::Horizontal, "Category");
    model->setHeaderData(3, Qt::Horizontal, "Quote");
    model->setHeaderData(4, Qt::Horizontal, "Date");

    // Set table and its model.
    QTableView *table = parent->findChild<QTableView*>("tableView");
    table->setModel(model);

    // Visual modifications to table.
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    table->horizontalHeader()->setMaximumSectionSize(525);
    table->resizeRowsToContents();

    table->setWordWrap(true);
    table->setColumnHidden(0, true);
    // table->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

sortby_author::~sortby_author()
{
    delete ui;
}

void sortby_author::on_pushButton_clicked()
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

