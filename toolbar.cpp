#include "toolbar.h"

ToolBar::ToolBar()
{
    _currentTool = Tools::Arrow;
}

void ToolBar::setTool(Tools tool)
{
    _currentTool = tool;
}

ToolBar::Tools ToolBar::getTool()
{
    return _currentTool;
}
