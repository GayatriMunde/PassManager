#ifndef ENTER_VALUE_H
#define ENTER_VALUE_H

#include <QDialog>

namespace Ui {
class enter_value;
}

class enter_value : public QDialog
{
    Q_OBJECT

public:
    explicit enter_value(QWidget *parent = nullptr);
    ~enter_value();

private:
    Ui::enter_value *ui;
};

#endif // ENTER_VALUE_H
