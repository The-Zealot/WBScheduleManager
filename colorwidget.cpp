#include "colorwidget.h"

ColorWidget::ColorWidget(QWidget *parent) : QPushButton(parent)
{
    connect(this, &QPushButton::clicked, this, &ColorWidget::openColorDialog);

    this->setAutoFillBackground(true);
    this->setFocusPolicy(Qt::NoFocus);

    setColor("#e1e1e1");
}

QColor ColorWidget::getColor()
{
    return _color;
}

void ColorWidget::setColor(QColor color)
{
    _color = color;
    this->setStyleSheet("border: 1px solid; background-color: " + QVariant(_color).toString());
}

void ColorWidget::clear()
{
    _color = "#e1e1e1";
    setColor(_color);
}

void ColorWidget::openColorDialog()
{
    QColor color = QColorDialog::getColor(_color, nullptr, "Выбор цвета");

    if (!color.isValid())
    {
        qDebug() << "Invalid color";
        return;
    }

    setColor(color);
}

