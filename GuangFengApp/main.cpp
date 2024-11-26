#include "stdafx.h"
#include "GuangFengApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GuangFengApp w;
    w.show();
    return a.exec();
}
