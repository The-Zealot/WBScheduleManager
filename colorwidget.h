#ifndef COLORWIDGET_H
#define COLORWIDGET_H

#include <QPushButton>
#include <QColorDialog>
#include <QDebug>
#include <QVariant>

class ColorWidget : public QPushButton
{
    Q_OBJECT
public:
    explicit ColorWidget(QWidget *parent = nullptr);

    QColor getColor();
    void setColor(QColor color);
    void clear();

public slots:
    void openColorDialog();

private:
    QColor _color;
};

#endif // COLORWIDGET_H
