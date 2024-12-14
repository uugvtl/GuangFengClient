#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GuangFengApp.h"

QT_BEGIN_NAMESPACE

namespace Ui
{
    class GuangFengAppClass;
};

QT_END_NAMESPACE

namespace Leonzi::View
{
    class GuangFengApp : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit GuangFengApp(QWidget* parent = nullptr);
        ~GuangFengApp() override;

    private:
        Ui::GuangFengAppClass* ui;
    };
}
