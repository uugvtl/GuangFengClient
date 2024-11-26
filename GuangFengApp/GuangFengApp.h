#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GuangFengApp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GuangFengAppClass; };
QT_END_NAMESPACE

class GuangFengApp : public QMainWindow
{
    Q_OBJECT

public:
    GuangFengApp(QWidget *parent = nullptr);
    ~GuangFengApp();

private:
    Ui::GuangFengAppClass *ui;
};
