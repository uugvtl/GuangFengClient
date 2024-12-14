#include "stdafx.h"
#include "GuangFengApp.h"

namespace Leonzi::View
{
    GuangFengApp::GuangFengApp(QWidget* parent) : QMainWindow(parent)
                                                , ui(new Ui::GuangFengAppClass())
    {
        ui->setupUi(this);
    }

    GuangFengApp::~GuangFengApp()
    {
        delete ui;
    }
}
