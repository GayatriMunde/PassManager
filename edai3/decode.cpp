#include "decode.h"
#include "ui_decode.h"
#include "QMessageBox"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include "aesDecrypt.h"
#include "structs.h"

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
        const QString DRIVER("QSQLITE");
        if(QSqlDatabase::isDriverAvailable(DRIVER)){
            QSqlDatabase database = QSqlDatabase::addDatabase(DRIVER);
            database.setDatabaseName("../mydata.db");

            if(!database.open())
            {
                qWarning() << "ERROR: " << database.lastError();
                return;
            }

            QSqlQuery query;
            int a;
            query.prepare("SELECT password FROM login");
            if(!query.exec()){
                qWarning() << "ERROR: " << query.lastError().text();
                QMessageBox::warning(this,"Error","No User details found!");
            }else{
                QString key = query.value(0).toString();
                key = QString::fromUtf8(check(key.toStdString(), &a));
                query.prepare("SELECT Number FROM message WHERE Encrypted=(?)");
                query.addBindValue(encryptedMsg);
                if(!query.exec()){
                    qWarning() << "ERROR: " << query.lastError().text();
                    QMessageBox::warning(this,"Error","No such credentials found!");
                }else{
                    query.next();
                    int num = query.value(0).toInt();
                    string decrypt = decryptAES(encryptedMsg.toStdString(),key.toStdString(),num);
                    ui->dMsgBox->setPlainText(QString::fromUtf8(decrypt));
                }
            }
        }
    }
}
