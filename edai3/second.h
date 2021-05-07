#ifndef SECOND_H
#define SECOND_H

#include "enter_value.h"
#include "decode.h"
#include <QDialog>
#include <QMainWindow>
#include "QtGui"
#include "QtDebug"
#include "QSqlDatabase"
#include "QSqlError"
#include "QSqlQuery"

namespace Ui {
class second;
}

class second : public QDialog
{
    Q_OBJECT

public:
    explicit second(QWidget *parent = nullptr);
    ~second();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::second *ui;
    void readDbAndDisplayTable();
    decode *Decode;
    enter_value *Enter_value;
};

#endif // SECOND_H
