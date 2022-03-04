#ifndef EDITAUTHOR_H
#define EDITAUTHOR_H

#include <QDialog>

namespace Ui {
class editauthor;
}

class editauthor : public QDialog
{
    Q_OBJECT

public:
    explicit editauthor(QWidget *parent = nullptr);
    ~editauthor();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::editauthor *ui;
};

#endif // EDITAUTHOR_H
