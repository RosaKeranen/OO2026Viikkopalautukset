#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    state = 1;
    operand= -1;
    result = 0;

    connect(ui->N1,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);
    connect(ui->N2,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);
    connect(ui->N3,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);
    connect(ui->N4,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);
    connect(ui->N5,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);
    connect(ui->N6,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);
    connect(ui->N7,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);
    connect(ui->N8,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);
    connect(ui->N9,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);
    connect(ui->N0,&QPushButton::clicked,
            this,&MainWindow::numberClickedHandler);

    connect(ui->add,&QPushButton::clicked,
            this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->sub,&QPushButton::clicked,
            this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->mul,&QPushButton::clicked,
            this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->div,&QPushButton::clicked,
            this,&MainWindow::addSubMulDivClickHandler);

    connect(ui->clear,&QPushButton::clicked,
            this,&MainWindow::clearAndEnterClickHandler);
    connect(ui->enter,&QPushButton::clicked,
            this,&MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString value = button->text();
    qDebug()<<"Button text:" << value;

    if(state == 1)
    {
        number1 += value;
        ui->num1->setText(number1);
    }
    else if(state == 2)
    {
        number2 += value;
        ui->num2->setText(number2);
    }

    qDebug() << "number1 =" << number1;
    qDebug() << "number2 =" << number2;
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name:" << name;

    if(name == "clear")
    {
        number1 = "";
        number2 = "";
        result = 0;
        operand = -1;
        state = 1;
        resetLineEdits();
    }
    else if(name == "enter")
    {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();

        switch(operand)
        {
        case 0: result = n1 + n2; break;
        case 1: result = n1 - n2; break;
        case 2: result = n1 * n2; break;
        case 3:
            if(n2 != 0)
                result = n1 / n2;
            else
            {
                ui->result->setText("Error");
                return;
            }
            break;
        }

        ui->result->setText(QString::number(result));
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name:" << name;

    QString op = button->text();

    if(op == "+") operand = 0;
    else if(op == "-") operand = 1;
    else if(op == "*") operand = 2;
    else if(op == "/") operand = 3;
    else if(name == "enter") {
        if (operand < 0) return;
    }

    state = 2;

    qDebug() << "Operand =" << operand;
}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

