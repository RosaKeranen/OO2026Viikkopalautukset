#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
//, laskuri(0)
{
    ui->setupUi(this);

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
    QString name = button->objectName();
    qDebug()<<"Button name:" << name;

    //Tästä puuttuu jotain if-rakennetta?
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name:" << name;
    //Jonkinmoinen if-lause tännekin
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name:" << name;

    //QStringit pitää muuttaa numeroiksi toFloat esitehtävien esimerkin mukaan (teht 2)

    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    qDebug()<<"number 1 = " << n1 << " and number 2 = " << n2 << Qt::endl;

    //switch casella tänne operaatiot millä lasketaan

    //ui->Result->setText(QString::number(result));
}

void MainWindow::resetLineEdits()
{

}

