#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionNew_triggered();

    void on_actionQuit_triggered();

    void on_actionZom_In_triggered();

    void on_actionZoom_Out_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
