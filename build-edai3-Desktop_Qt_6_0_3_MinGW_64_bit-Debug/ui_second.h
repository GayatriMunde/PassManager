/********************************************************************************
** Form generated from reading UI file 'second.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_H
#define UI_SECOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_second
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *second)
    {
        if (second->objectName().isEmpty())
            second->setObjectName(QString::fromUtf8("second"));
        second->resize(673, 356);
        label_3 = new QLabel(second);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 5, 111, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"Gabriola\";\n"
"text-decoration: underline;\n"
"color: rgb(194, 95, 56);\n"
"background-color: rgb(246, 254, 255);"));
        layoutWidget = new QWidget(second);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 661, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(layoutWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QPalette palette;
        QConicalGradient gradient(0.5, 0.5, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(35, 40, 3, 255));
        gradient.setColorAt(0.16, QColor(136, 106, 22, 255));
        gradient.setColorAt(0.225, QColor(166, 140, 41, 255));
        gradient.setColorAt(0.285, QColor(204, 181, 74, 255));
        gradient.setColorAt(0.345, QColor(235, 219, 102, 255));
        gradient.setColorAt(0.415, QColor(245, 236, 112, 255));
        gradient.setColorAt(0.52, QColor(209, 190, 76, 255));
        gradient.setColorAt(0.57, QColor(187, 156, 51, 255));
        gradient.setColorAt(0.635, QColor(168, 142, 42, 255));
        gradient.setColorAt(0.695, QColor(202, 174, 68, 255));
        gradient.setColorAt(0.75, QColor(218, 202, 86, 255));
        gradient.setColorAt(0.815, QColor(208, 187, 73, 255));
        gradient.setColorAt(0.88, QColor(187, 156, 51, 255));
        gradient.setColorAt(0.935, QColor(137, 108, 26, 255));
        gradient.setColorAt(1, QColor(35, 40, 3, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QConicalGradient gradient1(0.5, 0.5, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(35, 40, 3, 255));
        gradient1.setColorAt(0.16, QColor(136, 106, 22, 255));
        gradient1.setColorAt(0.225, QColor(166, 140, 41, 255));
        gradient1.setColorAt(0.285, QColor(204, 181, 74, 255));
        gradient1.setColorAt(0.345, QColor(235, 219, 102, 255));
        gradient1.setColorAt(0.415, QColor(245, 236, 112, 255));
        gradient1.setColorAt(0.52, QColor(209, 190, 76, 255));
        gradient1.setColorAt(0.57, QColor(187, 156, 51, 255));
        gradient1.setColorAt(0.635, QColor(168, 142, 42, 255));
        gradient1.setColorAt(0.695, QColor(202, 174, 68, 255));
        gradient1.setColorAt(0.75, QColor(218, 202, 86, 255));
        gradient1.setColorAt(0.815, QColor(208, 187, 73, 255));
        gradient1.setColorAt(0.88, QColor(187, 156, 51, 255));
        gradient1.setColorAt(0.935, QColor(137, 108, 26, 255));
        gradient1.setColorAt(1, QColor(35, 40, 3, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QConicalGradient gradient2(0.5, 0.5, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(35, 40, 3, 255));
        gradient2.setColorAt(0.16, QColor(136, 106, 22, 255));
        gradient2.setColorAt(0.225, QColor(166, 140, 41, 255));
        gradient2.setColorAt(0.285, QColor(204, 181, 74, 255));
        gradient2.setColorAt(0.345, QColor(235, 219, 102, 255));
        gradient2.setColorAt(0.415, QColor(245, 236, 112, 255));
        gradient2.setColorAt(0.52, QColor(209, 190, 76, 255));
        gradient2.setColorAt(0.57, QColor(187, 156, 51, 255));
        gradient2.setColorAt(0.635, QColor(168, 142, 42, 255));
        gradient2.setColorAt(0.695, QColor(202, 174, 68, 255));
        gradient2.setColorAt(0.75, QColor(218, 202, 86, 255));
        gradient2.setColorAt(0.815, QColor(208, 187, 73, 255));
        gradient2.setColorAt(0.88, QColor(187, 156, 51, 255));
        gradient2.setColorAt(0.935, QColor(137, 108, 26, 255));
        gradient2.setColorAt(1, QColor(35, 40, 3, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush3(QColor(255, 255, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        QConicalGradient gradient3(0.5, 0.5, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(35, 40, 3, 255));
        gradient3.setColorAt(0.16, QColor(136, 106, 22, 255));
        gradient3.setColorAt(0.225, QColor(166, 140, 41, 255));
        gradient3.setColorAt(0.285, QColor(204, 181, 74, 255));
        gradient3.setColorAt(0.345, QColor(235, 219, 102, 255));
        gradient3.setColorAt(0.415, QColor(245, 236, 112, 255));
        gradient3.setColorAt(0.52, QColor(209, 190, 76, 255));
        gradient3.setColorAt(0.57, QColor(187, 156, 51, 255));
        gradient3.setColorAt(0.635, QColor(168, 142, 42, 255));
        gradient3.setColorAt(0.695, QColor(202, 174, 68, 255));
        gradient3.setColorAt(0.75, QColor(218, 202, 86, 255));
        gradient3.setColorAt(0.815, QColor(208, 187, 73, 255));
        gradient3.setColorAt(0.88, QColor(187, 156, 51, 255));
        gradient3.setColorAt(0.935, QColor(137, 108, 26, 255));
        gradient3.setColorAt(1, QColor(35, 40, 3, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        QConicalGradient gradient4(0.5, 0.5, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(35, 40, 3, 255));
        gradient4.setColorAt(0.16, QColor(136, 106, 22, 255));
        gradient4.setColorAt(0.225, QColor(166, 140, 41, 255));
        gradient4.setColorAt(0.285, QColor(204, 181, 74, 255));
        gradient4.setColorAt(0.345, QColor(235, 219, 102, 255));
        gradient4.setColorAt(0.415, QColor(245, 236, 112, 255));
        gradient4.setColorAt(0.52, QColor(209, 190, 76, 255));
        gradient4.setColorAt(0.57, QColor(187, 156, 51, 255));
        gradient4.setColorAt(0.635, QColor(168, 142, 42, 255));
        gradient4.setColorAt(0.695, QColor(202, 174, 68, 255));
        gradient4.setColorAt(0.75, QColor(218, 202, 86, 255));
        gradient4.setColorAt(0.815, QColor(208, 187, 73, 255));
        gradient4.setColorAt(0.88, QColor(187, 156, 51, 255));
        gradient4.setColorAt(0.935, QColor(137, 108, 26, 255));
        gradient4.setColorAt(1, QColor(35, 40, 3, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QConicalGradient gradient5(0.5, 0.5, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(35, 40, 3, 255));
        gradient5.setColorAt(0.16, QColor(136, 106, 22, 255));
        gradient5.setColorAt(0.225, QColor(166, 140, 41, 255));
        gradient5.setColorAt(0.285, QColor(204, 181, 74, 255));
        gradient5.setColorAt(0.345, QColor(235, 219, 102, 255));
        gradient5.setColorAt(0.415, QColor(245, 236, 112, 255));
        gradient5.setColorAt(0.52, QColor(209, 190, 76, 255));
        gradient5.setColorAt(0.57, QColor(187, 156, 51, 255));
        gradient5.setColorAt(0.635, QColor(168, 142, 42, 255));
        gradient5.setColorAt(0.695, QColor(202, 174, 68, 255));
        gradient5.setColorAt(0.75, QColor(218, 202, 86, 255));
        gradient5.setColorAt(0.815, QColor(208, 187, 73, 255));
        gradient5.setColorAt(0.88, QColor(187, 156, 51, 255));
        gradient5.setColorAt(0.935, QColor(137, 108, 26, 255));
        gradient5.setColorAt(1, QColor(35, 40, 3, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        QConicalGradient gradient6(0.5, 0.5, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(35, 40, 3, 255));
        gradient6.setColorAt(0.16, QColor(136, 106, 22, 255));
        gradient6.setColorAt(0.225, QColor(166, 140, 41, 255));
        gradient6.setColorAt(0.285, QColor(204, 181, 74, 255));
        gradient6.setColorAt(0.345, QColor(235, 219, 102, 255));
        gradient6.setColorAt(0.415, QColor(245, 236, 112, 255));
        gradient6.setColorAt(0.52, QColor(209, 190, 76, 255));
        gradient6.setColorAt(0.57, QColor(187, 156, 51, 255));
        gradient6.setColorAt(0.635, QColor(168, 142, 42, 255));
        gradient6.setColorAt(0.695, QColor(202, 174, 68, 255));
        gradient6.setColorAt(0.75, QColor(218, 202, 86, 255));
        gradient6.setColorAt(0.815, QColor(208, 187, 73, 255));
        gradient6.setColorAt(0.88, QColor(187, 156, 51, 255));
        gradient6.setColorAt(0.935, QColor(137, 108, 26, 255));
        gradient6.setColorAt(1, QColor(35, 40, 3, 255));
        QBrush brush7(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        QConicalGradient gradient7(0.5, 0.5, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(35, 40, 3, 255));
        gradient7.setColorAt(0.16, QColor(136, 106, 22, 255));
        gradient7.setColorAt(0.225, QColor(166, 140, 41, 255));
        gradient7.setColorAt(0.285, QColor(204, 181, 74, 255));
        gradient7.setColorAt(0.345, QColor(235, 219, 102, 255));
        gradient7.setColorAt(0.415, QColor(245, 236, 112, 255));
        gradient7.setColorAt(0.52, QColor(209, 190, 76, 255));
        gradient7.setColorAt(0.57, QColor(187, 156, 51, 255));
        gradient7.setColorAt(0.635, QColor(168, 142, 42, 255));
        gradient7.setColorAt(0.695, QColor(202, 174, 68, 255));
        gradient7.setColorAt(0.75, QColor(218, 202, 86, 255));
        gradient7.setColorAt(0.815, QColor(208, 187, 73, 255));
        gradient7.setColorAt(0.88, QColor(187, 156, 51, 255));
        gradient7.setColorAt(0.935, QColor(137, 108, 26, 255));
        gradient7.setColorAt(1, QColor(35, 40, 3, 255));
        QBrush brush8(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        QConicalGradient gradient8(0.5, 0.5, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(35, 40, 3, 255));
        gradient8.setColorAt(0.16, QColor(136, 106, 22, 255));
        gradient8.setColorAt(0.225, QColor(166, 140, 41, 255));
        gradient8.setColorAt(0.285, QColor(204, 181, 74, 255));
        gradient8.setColorAt(0.345, QColor(235, 219, 102, 255));
        gradient8.setColorAt(0.415, QColor(245, 236, 112, 255));
        gradient8.setColorAt(0.52, QColor(209, 190, 76, 255));
        gradient8.setColorAt(0.57, QColor(187, 156, 51, 255));
        gradient8.setColorAt(0.635, QColor(168, 142, 42, 255));
        gradient8.setColorAt(0.695, QColor(202, 174, 68, 255));
        gradient8.setColorAt(0.75, QColor(218, 202, 86, 255));
        gradient8.setColorAt(0.815, QColor(208, 187, 73, 255));
        gradient8.setColorAt(0.88, QColor(187, 156, 51, 255));
        gradient8.setColorAt(0.935, QColor(137, 108, 26, 255));
        gradient8.setColorAt(1, QColor(35, 40, 3, 255));
        QBrush brush9(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        tableWidget->setPalette(palette);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-colour: #0000ff;\n"
"alternate-background-color: #FFFF00rgb(255, 202, 11);\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"	\n"
"	\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));\n"
"selection-background-color: #FFFF00;\n"
"}"));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 3, 2, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        pushButton_3->setFont(font2);

        gridLayout->addWidget(pushButton_3, 3, 0, 1, 1);


        retranslateUi(second);

        QMetaObject::connectSlotsByName(second);
    } // setupUi

    void retranslateUi(QDialog *second)
    {
        second->setWindowTitle(QCoreApplication::translate("second", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("second", "USER's Space", nullptr));
        pushButton->setText(QCoreApplication::translate("second", "Decode a password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("second", "Enter new value", nullptr));
        pushButton_3->setText(QCoreApplication::translate("second", "Reload Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class second: public Ui_second {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_H
