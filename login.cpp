#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "loadingwindow.h"
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    ui->progressBar->setStyleSheet("background-color:red;");
    ui->progressBar->hide();
}

Login::~Login()
{
    delete ui;
}

void Login::startApp(){
    MainWindow w;
    w.show();
}



void Login::on_pushButton_clicked()
{

   ui->progressBar->show();
    for(int i=0;i<1000;i++){
        ui->progressBar->setValue(i);
    }
    MainWindow *w = new MainWindow();
    w->setFixedSize(1200,750);
    w->show();
    hide();


}

void Login::on_pushButton_2_clicked()
{
    close();
}
