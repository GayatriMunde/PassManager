/********************************************************************************
** Form generated from reading UI file 'decode.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECODE_H
#define UI_DECODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_decode
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *eMsgBox;
    QPlainTextEdit *dMsgBox;
    QLabel *label_3;

    void setupUi(QDialog *decode)
    {
        if (decode->objectName().isEmpty())
            decode->setObjectName(QString::fromUtf8("decode"));
        decode->resize(509, 288);
        decode->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 255);"));
        label = new QLabel(decode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 371, 41));
        label->setStyleSheet(QString::fromUtf8("font: 28pt \"Segoe Script\";\n"
"color: rgb(102, 0, 0);"));
        pushButton = new QPushButton(decode);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 90, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Javanese Text\";\n"
"background-color: rgb(231, 246, 255);"));
        groupBox = new QGroupBox(decode);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 271, 121));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 228, 255);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 91, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"Javanese Text\";"));
        eMsgBox = new QLineEdit(groupBox);
        eMsgBox->setObjectName(QString::fromUtf8("eMsgBox"));
        eMsgBox->setGeometry(QRect(120, 50, 131, 25));
        dMsgBox = new QPlainTextEdit(decode);
        dMsgBox->setObjectName(QString::fromUtf8("dMsgBox"));
        dMsgBox->setGeometry(QRect(190, 210, 161, 51));
        dMsgBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dMsgBox->setReadOnly(true);
        label_3 = new QLabel(decode);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 230, 141, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Javanese Text\";\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(decode);

        QMetaObject::connectSlotsByName(decode);
    } // setupUi

    void retranslateUi(QDialog *decode)
    {
        decode->setWindowTitle(QCoreApplication::translate("decode", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("decode", "Decoding Section", nullptr));
        pushButton->setText(QCoreApplication::translate("decode", "Decode", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("decode", "encoded msg", nullptr));
        label_3->setText(QCoreApplication::translate("decode", "DECODED MSG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class decode: public Ui_decode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECODE_H
