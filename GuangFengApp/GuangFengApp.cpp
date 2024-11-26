#include "stdafx.h"
#include "GuangFengApp.h"

GuangFengApp::GuangFengApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GuangFengAppClass())
{
    ui->setupUi(this);
}

GuangFengApp::~GuangFengApp()
{
    delete ui;
}
