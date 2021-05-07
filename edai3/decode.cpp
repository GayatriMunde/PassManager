#include "decode.h"
#include "ui_decode.h"

decode::decode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::decode)
{
    ui->setupUi(this);
}

decode::~decode()
{
    delete ui;
}
