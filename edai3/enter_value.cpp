#include "enter_value.h"
#include "ui_enter_value.h"

enter_value::enter_value(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::enter_value)
{
    ui->setupUi(this);
}

enter_value::~enter_value()
{
    delete ui;
}
