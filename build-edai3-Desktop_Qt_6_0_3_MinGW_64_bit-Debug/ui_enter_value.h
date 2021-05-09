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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_enter_value
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *webText;
    QLabel *label_3;
    QLineEdit *userText;
    QLabel *label_4;
    QLineEdit *passText;
    QPushButton *submitBtn;

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
        label_2 = new QLabel(enter_value);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 171, 20));
        webText = new QLineEdit(enter_value);
        webText->setObjectName(QString::fromUtf8("webText"));
        webText->setGeometry(QRect(250, 110, 201, 27));
        label_3 = new QLabel(enter_value);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 160, 171, 20));
        userText = new QLineEdit(enter_value);
        userText->setObjectName(QString::fromUtf8("userText"));
        userText->setGeometry(QRect(250, 160, 201, 27));
        label_4 = new QLabel(enter_value);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 210, 171, 20));
        passText = new QLineEdit(enter_value);
        passText->setObjectName(QString::fromUtf8("passText"));
        passText->setGeometry(QRect(250, 210, 201, 27));
        submitBtn = new QPushButton(enter_value);
        submitBtn->setObjectName(QString::fromUtf8("submitBtn"));
        submitBtn->setGeometry(QRect(210, 260, 90, 29));

        retranslateUi(enter_value);

        QMetaObject::connectSlotsByName(enter_value);
    } // setupUi

    void retranslateUi(QDialog *enter_value)
    {
        enter_value->setWindowTitle(QCoreApplication::translate("enter_value", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("enter_value", "Enter values to the Table", nullptr));
        label_2->setText(QCoreApplication::translate("enter_value", "Enter Website or App Name", nullptr));
        label_3->setText(QCoreApplication::translate("enter_value", "Enter username", nullptr));
        label_4->setText(QCoreApplication::translate("enter_value", "Enter Password", nullptr));
        submitBtn->setText(QCoreApplication::translate("enter_value", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enter_value: public Ui_enter_value {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_VALUE_H
