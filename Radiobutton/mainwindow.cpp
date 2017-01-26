#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButtonW->isChecked()) {
        QMessageBox::information(this,"title","Good choice");
    }
    if(ui->radioButtonM->isChecked()){
        QMessageBox::critical(this,"title","You have gone Nuts");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->radioButtonA->isChecked()) {
        QMessageBox::information(this,"title","Good choice again");
    }
    if(ui->radioButtonI->isChecked()){
        QMessageBox::critical(this,"title","You have gone totally mad");
    }
}
