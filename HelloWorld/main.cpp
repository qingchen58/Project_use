#include "mainwindow.h"
#include <QApplication>
#include <QScreen>

QScreen * g_screen = NULL;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    g_screen = a.primaryScreen();

    MainWindow w;
    w.show();

    return a.exec();
}
