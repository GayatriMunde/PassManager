#ifndef DECODE_H
#define DECODE_H

#include <QDialog>

namespace Ui {
class decode;
}

class decode : public QDialog
{
    Q_OBJECT

public:
    explicit decode(QWidget *parent = nullptr);
    ~decode();

private:
    Ui::decode *ui;
};

#endif // DECODE_H
