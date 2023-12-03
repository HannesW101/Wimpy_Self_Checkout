#include "startmenu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartMenu startmenu;

    // style the start menu
    startmenu.resize(800,800);
    startmenu.setWindowFlags(Qt::FramelessWindowHint);
    startmenu.setWindowIcon(QIcon(":/images/logo/WimpyLogo.svg"));

    startmenu.show();
    return a.exec();
}
