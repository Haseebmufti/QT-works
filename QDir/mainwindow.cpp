#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir dir;
   // if(dir.exists()){
   //     QMessageBox::information(this,"title","true");
   // }else {
   //     QMessageBox::information(this,"title","false");
   // }

    foreach (QFileInfo var, dir.drives()) {
        ui->comboBox->addItem(var.absoluteFilePath());

    }
    QDir dir2;
    foreach (QFileInfo var, dir2.entryInfoList()) {
        if (var.isDir())
        ui->listWidget->addItem("Dir : "+var.absoluteFilePath());
        if (var.isFile())
        ui->listWidget->addItem("File : "+var.absoluteFilePath());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDir dir("C:/Users/Haseeb/Documents/QDir/alpha");
    if(dir.exists()){
        QMessageBox::information(this,"","Directory exists");
    }else{
        dir.mkpath("C:/Users/Haseeb/Documents/QDir/alpha");
    }
}
