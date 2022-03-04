#ifndef ADDAUTHOR_H
#define ADDAUTHOR_H

#include <QDialog>

namespace Ui {
class addauthor;
}

class addauthor : public QDialog
{
    Q_OBJECT

public:
    explicit addauthor(QWidget *parent = nullptr);
    ~addauthor();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::addauthor *ui;
};

#endif // ADDAUTHOR_H
