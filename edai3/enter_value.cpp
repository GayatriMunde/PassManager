#include "enter_value.h"
#include "ui_enter_value.h"
#include "QMessageBox"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include "aesEncrypt.h"
#include "structs.h"

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

void enter_value::on_submitBtn_clicked()
{
    QString website = ui->webText->text();
    QString username = ui->userText->text();
    QString password = ui->passText->text();

    if(website == "" || username == "" || password == ""){
        QMessageBox::warning(this,"Error","Please fill all the fields!");
    }else{
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
            QString data;
            int a;
            query.prepare("SELECT password FROM login");
            if(!query.exec()){
                qWarning() << "ERROR: " << query.lastError().text();
                QMessageBox::warning(this,"Error","No User details found!");
            }else{
                QString key = query.value(0).toString();
                key = QString::fromUtf8(check(key.toStdString(), &a));
                password = QString::fromUtf8(check(password.toStdString(), &a));
                vector<vector<unsigned char>> message = aes(password.toStdString(),key.toStdString());
                data = QString::fromUtf8(toString(message));
                a = NBOX[a];

                query.prepare("INSERT INTO message(Site,Username,Encrypted,Number) VALUES (?,?,?,?)");
                query.bindValue(0,website);
                query.bindValue(1,username);
                query.bindValue(2,data);
                query.bindValue(3,a);
                if(!query.exec())
                {
                    qWarning() << "ERROR: " << query.lastError().text();
                    return;
                }
                QMessageBox::warning(this,"Success","New details added and encrypted!");
            }
        }
    }
}
