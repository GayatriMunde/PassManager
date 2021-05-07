#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "second.h"
#include "decode.h"
#include "QtGui"
#include "QtDebug"
#include "QSqlDatabase"
#include "QSqlError"
#include "QSqlQuery"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    second *secbox;

};
#endif // MAINWINDOW_H
