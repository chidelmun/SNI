#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "registration.h"

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
    /*MainWindow *w = new MainWindow();
    w->setFixedSize(1300,650);
    w->show();
    hide();
    */

    Registration *win = new Registration();
}
