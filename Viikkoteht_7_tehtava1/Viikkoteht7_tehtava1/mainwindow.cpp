#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Count,&QPushButton::clicked,
            this,&MainWindow::handleNappiClick);
    connect(ui->Reset,&QPushButton::clicked,
            this,&MainWindow::handleNappiClick);
    connect(ui->LineEdit,&QPushButton::clicked,
            this,&MainWindow::handleNappiClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNappiClick()
{
    if (auto button = qobject_cast<QPushButton*>(sender())) {
        qDebug() << "Painike:" << button->text();
    }
}

void MainWindow::handleNapit(QPushButton * ptr)
{
    qDebug() << "Painike handleNapit:" << ptr->text();
}
