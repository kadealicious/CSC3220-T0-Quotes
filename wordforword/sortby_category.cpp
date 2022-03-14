#include<QSqlTableModel>
#include"mainwindow.h"
#include "sortby_category.h"
#include "ui_sortby_category.h"

sortby_category::sortby_category(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortby_category)
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
    QTableView *table = parent->findChild<QTableView*>("maintable");
    table->setModel(model);

    // Visual modifications to table.
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    table->horizontalHeader()->setMaximumSectionSize(450);
    table->resizeRowsToContents();

    table->setWordWrap(true);
    table->setColumnHidden(0, true);
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);

    table->show();
}

sortby_category::~sortby_category()
{
    delete ui;
}
