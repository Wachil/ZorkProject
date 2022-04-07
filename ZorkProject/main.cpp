#include "mainwindow.h"
#include "ZorkUL.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    ZorkUL *zorkUL = new ZorkUL();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
