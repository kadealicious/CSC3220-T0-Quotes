#ifndef SORTBY_CATEGORY_H
#define SORTBY_CATEGORY_H

#include <QDialog>

namespace Ui {
class sortby_category;
}

class sortby_category : public QDialog
{
    Q_OBJECT

public:
    explicit sortby_category(QWidget *parent = nullptr);
    ~sortby_category();

private:
    Ui::sortby_category *ui;
};

#endif // SORTBY_CATEGORY_H
