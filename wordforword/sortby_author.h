#ifndef SORTBY_AUTHOR_H
#define SORTBY_AUTHOR_H

#include <QDialog>

namespace Ui {
class sortby_author;
}

class sortby_author : public QDialog
{
    Q_OBJECT

public:
    explicit sortby_author(QWidget *parent = nullptr);
    ~sortby_author();

private slots:
    void on_pushButton_clicked();

private:
    Ui::sortby_author *ui;
};

#endif // SORTBY_AUTHOR_H
