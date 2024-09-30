/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *btn9;
    QPushButton *Multiply;
    QPushButton *btn2;
    QPushButton *Divide;
    QPushButton *btn8;
    QPushButton *btn1;
    QPushButton *btn6;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn7;
    QPushButton *btn5;
    QPushButton *Add;
    QPushButton *btnAC;
    QPushButton *btn0;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QPushButton *Equal;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(779, 472);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName("btn9");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn9, 1, 2, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Multiply, 3, 3, 1, 1);

        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName("btn2");
        sizePolicy1.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn2, 4, 1, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName("btn8");
        sizePolicy1.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName("btn1");
        sizePolicy1.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn1, 4, 0, 1, 1);

        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName("btn6");
        sizePolicy1.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn6, 3, 2, 1, 1);

        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName("btn3");
        sizePolicy1.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn3, 4, 2, 1, 1);

        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName("btn4");
        sizePolicy1.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn4, 3, 0, 1, 1);

        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName("btn7");
        sizePolicy1.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn7, 1, 0, 1, 1);

        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName("btn5");
        sizePolicy1.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn5, 3, 1, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Add, 4, 3, 1, 1);

        btnAC = new QPushButton(centralwidget);
        btnAC->setObjectName("btnAC");
        sizePolicy1.setHeightForWidth(btnAC->sizePolicy().hasHeightForWidth());
        btnAC->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnAC, 5, 0, 1, 1);

        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName("btn0");
        sizePolicy1.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn0, 5, 1, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName("ChangeSign");
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(ChangeSign, 5, 2, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName("Subtract");
        sizePolicy1.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Subtract, 5, 3, 1, 1);

        Equal = new QPushButton(centralwidget);
        Equal->setObjectName("Equal");
        sizePolicy1.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Equal, 5, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 779, 22));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        btn9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        btn2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        btn8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        btn1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        btn6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        btn3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        btn4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        btn7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        btn5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        btnAC->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        btn0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
