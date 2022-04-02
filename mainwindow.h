#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mymodel.h"
#include "QTableView"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void AddRow();
    void DeleteRow();

private:
    Ui::MainWindow *ui;
    MyModel* myModel;
    QTableView* tableView;
};
#endif // MAINWINDOW_H
