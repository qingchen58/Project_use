#include "mainwindow.h"
#include <QLabel>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    new QLabel("HaHa HelloWorld DaDaDaDa",this);
}

MainWindow::~MainWindow()
{
    qDebug()<<"注销MainWindow";
}
