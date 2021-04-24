/********************************************************************************
** Form generated from reading UI file 'enter_value.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_VALUE_H
#define UI_ENTER_VALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_enter_value
{
public:
    QLabel *label;

    void setupUi(QDialog *enter_value)
    {
        if (enter_value->objectName().isEmpty())
            enter_value->setObjectName(QString::fromUtf8("enter_value"));
        enter_value->resize(570, 300);
        label = new QLabel(enter_value);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 421, 71));
        label->setStyleSheet(QString::fromUtf8("font: 28pt \"Ink Free\";\n"
"color: rgb(144, 0, 0);"));

        retranslateUi(enter_value);

        QMetaObject::connectSlotsByName(enter_value);
    } // setupUi

    void retranslateUi(QDialog *enter_value)
    {
        enter_value->setWindowTitle(QCoreApplication::translate("enter_value", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("enter_value", "Enter values to the Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enter_value: public Ui_enter_value {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_VALUE_H
