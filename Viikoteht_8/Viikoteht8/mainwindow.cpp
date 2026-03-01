#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectTimer = new QTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectTimer;
    objectTimer = nullptr;
}

void MainWindow::timeout()
{

}

void MainWindow::updateProgressBar()
{

}

void MainWindow::setGameInfoText(QString, short)
{

}


void MainWindow::on_SwitchPlayer1_clicked()
{

}


void MainWindow::on_SwitchPlayer2_clicked()
{

}

void MainWindow::on_chooseTime1_clicked()
{

}


void MainWindow::on_chooseTime2_clicked()
{

}


void MainWindow::on_StartGame_clicked()
{
    connect(objectTimer, SIGNAL(timeout()), this, SLOT(slotShowTimer()));
    objectTimer->start(1000);
}




void MainWindow::on_StopGame_clicked()
{

}

void MainWindow::slotShowTimer()
{
    x+=1;
    qDebug()<<"Aikaa kulunut "<< x << " sekuntia.\n";
}



