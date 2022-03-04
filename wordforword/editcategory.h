#ifndef EDITCATEGORY_H
#define EDITCATEGORY_H

#include <QDialog>

namespace Ui {
class editcategory;
}

class editcategory : public QDialog
{
    Q_OBJECT

public:
    explicit editcategory(QWidget *parent = nullptr);
    ~editcategory();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::editcategory *ui;
};

#endif // EDITCATEGORY_H
