#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addcategory_triggered();

    void on_addauthor_triggered();

    void on_addquote_triggered();

    void on_editauthor_triggered();

    void on_editcategory_triggered();

    void on_deleteauthor_triggered();

    void on_deletecategory_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
