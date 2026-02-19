#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
//, laskuri(0)
{
    ui->setupUi(this);

    /*ui->lineEdit->setText(QString::number(laskuri));

    connect(ui->Count,&QPushButton::clicked,
            this,&MainWindow::handleNappiClick);
    connect(ui->Reset,&QPushButton::clicked,
            this,&MainWindow::handleNappiClick);*/
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
}

void MainWindow::clearAndEnterClickHandler()
{

}

void MainWindow::addSubMulDivClickHandler()
{
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

/*void MainWindow::handleNappiClick()
{
    if (sender() == ui->Count) {
        laskuri++;
    }
    else if (sender() == ui->Reset) {
        laskuri = 0;
    }

    ui->lineEdit->setText(QString::number(laskuri));
}*/
