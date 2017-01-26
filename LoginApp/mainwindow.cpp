#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pic(":/resources/resources/smiley.jpg");
    int wh = ui->label_pic->width();
    int ht = ui->label_pic->height();
    ui->label_pic->setPixmap(pic.scaled(100,200,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test") {
        QMessageBox::information(this,"Access","Access Granted");
        //hide();
        secdialog = new Dialog2(this);
        secdialog->show();
    }
    else {
        QMessageBox::warning(this,"Access","Access denied");
    }
}
