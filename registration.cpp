#include "registration.h"
#include "ui_registration.h"

Registration::Registration(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
    this->setFixedSize(1300,650);
}

Registration::~Registration()
{
    delete ui;
}
