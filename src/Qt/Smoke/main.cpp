#include "smokewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmokeWindow w;
    w.show();
    return a.exec();
}
