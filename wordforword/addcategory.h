#ifndef ADDCATEGORY_H
#define ADDCATEGORY_H

#include <QDialog>

namespace Ui {
class addcategory;
}

class addcategory : public QDialog
{
    Q_OBJECT

public:
    explicit addcategory(QWidget *parent = nullptr);
    ~addcategory();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addcategory *ui;
};

#endif // ADDCATEGORY_H
