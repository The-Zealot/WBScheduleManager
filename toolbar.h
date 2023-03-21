#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QObject>

class ToolBar
{
public:
    enum Tools
    {
        Arrow, EmployeeTool, SalaryTool, PaymentTool, ClearTool
    };

    ToolBar();
    void setTool(Tools tool);
    Tools getTool();

private:
    Tools _currentTool;
};

#endif // TOOLBAR_H
