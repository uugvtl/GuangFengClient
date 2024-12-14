#pragma once

#include <QMainWindow>
#include "ui_QtWidgetsClass.h"

QT_BEGIN_NAMESPACE

namespace Ui
{
    class QtWidgetsClassClass;
};

QT_END_NAMESPACE

namespace Leonzi::View
{
    class QtWidgetsClass : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit QtWidgetsClass(QWidget* parent = nullptr);
        ~QtWidgetsClass() override;

    private:
        Ui::QtWidgetsClassClass* ui;
    };
}
