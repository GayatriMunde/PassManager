#include "second.h"
#include "ui_second.h"
#include "QMessageBox"
#include "QSqlQuery"

second::second(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second)
{
    ui->setupUi(this);
    readDbAndDisplayTable();
}

second::~second()
{
    delete ui;
}
void second::readDbAndDisplayTable()
{
    QString dbPath = "C:/Users/Dell/Desktop/edai/database/mydata.db";

    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    if(!dataBase.open())
    {
        qDebug() <<"Database not connected" <<dataBase.lastError().text();                                         //sdgesswsdsxgv
        return;
    }

    QSqlQuery query(dataBase);
    QString str = "SELECT * FROM message";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution fail";
        return;
    }

    ui->tableWidget->setColumnCount(9);
    QStringList lables;
    lables << " " << "website name" << "encoded msg" << "xyz";                     //aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
    ui->tableWidget->setHorizontalHeaderLabels(lables);

    int rowCount=0;
    while (query.next()) {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *select = new QTableWidgetItem;
        QTableWidgetItem *site = new QTableWidgetItem;
        QTableWidgetItem *encry = new QTableWidgetItem;
        QTableWidgetItem *put = new QTableWidgetItem;

        select->setText(query.value(1).toString());
        site->setText(query.value(1).toString());
        encry->setText(query.value(1).toString());
        put->setText(query.value(1).toString());

        ui->tableWidget->setItem(rowCount,0,select);
        ui->tableWidget->setItem(rowCount,1,site);
        ui->tableWidget->setItem(rowCount,2,encry);
        ui->tableWidget->setItem(rowCount,3,put);

    }
}

void second::on_pushButton_clicked()
{
    Decode = new decode;
    Decode->show();
}

void second::on_pushButton_2_clicked()
{
    Enter_value = new enter_value;
    Enter_value->show();
}
