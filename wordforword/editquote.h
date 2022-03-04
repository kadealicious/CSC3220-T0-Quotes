#ifndef EDITQUOTE_H
#define EDITQUOTE_H

#include <QDialog>

namespace Ui {
class editquote;
}

class editquote : public QDialog
{
    Q_OBJECT

public:
    explicit editquote(QWidget *parent = nullptr);
    ~editquote();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::editquote *ui;
};

#endif // EDITQUOTE_H
