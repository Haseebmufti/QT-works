#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   //ui->comboBox->addItem(QIcon(":/rec/img/Images-icon.png"),"Raiden");
   //ui->comboBox->addItem(QIcon(":/rec/img/photo-icon.png"),"Liu Kang");
   //ui->comboBox->addItem(QIcon(":/rec/img/pictures-4-icon.png"),"Jason");

    for (int i=0; i<5; i++) {
        ui->comboBox->addItem(QIcon(":/rec/img/photo-icon.png"),QString::number(i)+"what");
    }
    ui->comboBox->insertItem(2,QIcon(":/rec/img/pictures-4-icon.png"),"tomorrow");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"title",QString::number(ui->comboBox->currentIndex()));
}
