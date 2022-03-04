#ifndef DELETEAUTHOR_H
#define DELETEAUTHOR_H

#include <QDialog>

namespace Ui {
class deleteauthor;
}

class deleteauthor : public QDialog
{
    Q_OBJECT

public:
    explicit deleteauthor(QWidget *parent = nullptr);
    ~deleteauthor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::deleteauthor *ui;
};

#endif // DELETEAUTHOR_H
