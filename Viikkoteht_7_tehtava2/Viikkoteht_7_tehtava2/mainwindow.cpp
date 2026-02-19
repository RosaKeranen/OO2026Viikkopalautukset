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
    QPushButton * button = qobject_cast<QPushButton>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name:" << name;
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
