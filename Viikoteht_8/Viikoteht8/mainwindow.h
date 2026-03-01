#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();

private slots:

    void on_SwitchPlayer1_clicked();

    void on_SwitchPlayer2_clicked();

    void on_chooseTime1_clicked();

    void on_chooseTime2_clicked();

    void on_StartGame_clicked();

    void on_StopGame_clicked();

    void slotShowTimer();

private:
    Ui::MainWindow *ui;
    QTimer * objectTimer;
    short x = 0;
    short player1time;
    short player2time;
    short currentPlayer;
    short gameTime;
    QTimer * pQTimer;
    void updateProgressBar();
    void setGameInfoText(QString, short);
};
#endif // MAINWINDOW_H
