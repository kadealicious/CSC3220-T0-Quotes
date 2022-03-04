#ifndef DELETEQUOTE_H
#define DELETEQUOTE_H

#include <QDialog>

namespace Ui {
class deletequote;
}

class deletequote : public QDialog
{
    Q_OBJECT

public:
    explicit deletequote(QWidget *parent = nullptr);
    ~deletequote();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::deletequote *ui;
};

#endif // DELETEQUOTE_H
