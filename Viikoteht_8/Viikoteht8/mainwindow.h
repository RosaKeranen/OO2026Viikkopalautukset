#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SwitchPlayer1_clicked();
    void on_SwitchPlayer2_clicked();
    void on_chooseTime1_clicked();
    void on_chooseTime2_clicked();
    void on_StartGame_clicked();
    void on_StopGame_clicked();
    void updateGame();

private:
    Ui::MainWindow *ui;

    QTimer *gameTimer;

    int player1Time;
    int player2Time;
    int totalGameTime;

    int currentPlayer;   // 1 tai 2
    bool gameRunning;

    void updateProgressBars();
    void endGame(QString winnerText);
};

#endif
