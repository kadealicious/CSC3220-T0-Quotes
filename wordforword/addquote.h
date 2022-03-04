#ifndef ADDQUOTE_H
#define ADDQUOTE_H

#include <QDialog>

namespace Ui {
class addquote;
}

class addquote : public QDialog
{
    Q_OBJECT

public:
    explicit addquote(QWidget *parent = nullptr);
    ~addquote();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addquote *ui;
};

#endif // ADDQUOTE_H
