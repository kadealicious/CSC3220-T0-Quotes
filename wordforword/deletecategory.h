#ifndef DELETECATEGORY_H
#define DELETECATEGORY_H

#include <QDialog>

namespace Ui {
class deletecategory;
}

class deletecategory : public QDialog
{
    Q_OBJECT

public:
    explicit deletecategory(QWidget *parent = nullptr);
    ~deletecategory();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::deletecategory *ui;
};

#endif // DELETECATEGORY_H
