#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    gameTimer = new QTimer(this);
    connect(gameTimer, &QTimer::timeout, this, &MainWindow::updateGame);

    player1Time = 0;
    player2Time = 0;
    totalGameTime = 0;
    currentPlayer = 1;
    gameRunning = false;

    ui->label->setText("Select playtime and press start game!");

    ui->progressBar1->setRange(0,100);
    ui->progressBar2->setRange(0,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_chooseTime1_clicked()
{
    totalGameTime = 120;   // 120 sek
    player1Time = totalGameTime;
    player2Time = totalGameTime;

    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);

    ui->label->setText("120 sec -Ready to play.");
}

void MainWindow::on_chooseTime2_clicked()
{
    totalGameTime = 300;   // 5 min
    player1Time = totalGameTime;
    player2Time = totalGameTime;

    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);

     ui->label->setText("5 min - Ready to play.");
}

void MainWindow::on_StartGame_clicked()
{
    if(totalGameTime == 0)
        return;

    currentPlayer = 1;
    gameRunning = true;
    ui->label->setText("Game ongoing - Player 1 turn");

    gameTimer->start(1000); // 1 sekunti
}

void MainWindow::on_StopGame_clicked()
{
    gameTimer->stop();
    gameRunning = false;

    ui->label->setText("Game stopped");

    player1Time = totalGameTime;
    player2Time = totalGameTime;

    updateProgressBars();

    ui->label->setText("New game via start button.");
}

void MainWindow::on_SwitchPlayer1_clicked()
{
    if(gameRunning && currentPlayer == 1)
    {
        currentPlayer = 2;
        ui->label->setText("Game ongoing - Player 2 turn");
    }
}

void MainWindow::on_SwitchPlayer2_clicked()
{
    if(gameRunning && currentPlayer == 2)
    {
        currentPlayer = 1;
        ui->label->setText("Game ongoing - Player 1 turn");
    }
}

void MainWindow::updateGame()
{
    if(!gameRunning)
        return;

    if(currentPlayer == 1)
    {
        player1Time--;
        if(player1Time <= 0)
        {
            endGame("Player 2 wins!");
            return;
        }
    }
    else
    {
        player2Time--;
        if(player2Time <= 0)
        {
            endGame("Player 1 wins!");
            return;
        }
    }

    updateProgressBars();
}

void MainWindow::updateProgressBars()
{
    int p1percent = (player1Time * 100) / totalGameTime;
    int p2percent = (player2Time * 100) / totalGameTime;

    ui->progressBar1->setValue(p1percent);
    ui->progressBar2->setValue(p2percent);
}

void MainWindow::endGame(QString winnerText)
{
    gameTimer->stop();
    gameRunning = false;
    ui->label->setText(winnerText);
}


/*void MainWindow::on_StartGame_clicked()
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
}*/



