#include "decode.h"
#include "ui_decode.h"
#include "QMessageBox"
#include <aesDecrypt.h>
#include <structs.h>

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

void decode::on_pushButton_clicked()
{
    QString encryptedMsg = ui->eMsgBox->text();

    if(encryptedMsg == "")
        QMessageBox::warning(this,"Error","Enter encrypted password!");
    else{
        vector<vector<unsigned char>> eMsg;
        getMatrix(encryptedMsg.toStdString(), eMsg);
        ui->dMsgBox->setPlainText(QString::fromUtf8(decryptAES(eMsg)));
    }
}
