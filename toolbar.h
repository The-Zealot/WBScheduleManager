#ifndef TOOLBAR_H
#define TOOLBAR_H

class ToolBar
{
public:
    enum Tools
    {
        Arrow,
        EmployeeTool,
        SalaryTool,
        PaymentTool,
        ClearTool,
        CalcDateTool,
        GeneralPaymentTool,
    };

    ToolBar();
    void setTool(Tools tool);
    Tools getTool();

private:
    Tools _currentTool;
};

#endif // TOOLBAR_H
