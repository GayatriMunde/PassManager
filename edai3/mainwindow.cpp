#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "second.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->password->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();

    if(username == "admin" && password=="admin"){
        //QMessageBox::information(this,"login","Username and Passowd are correct do you want to move to next Window");
        hide();
        secbox = new second(this);
        secbox->show();
    }
    else
        QMessageBox::warning(this,"login","username and password not correct");
}
