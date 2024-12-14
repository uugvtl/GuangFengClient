#include "stdafx.h"
#include "Leonzi/View/GuangFengApp.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Leonzi::View::GuangFengApp w;
    w.show();
    
    
    
    return QApplication::exec();
}
