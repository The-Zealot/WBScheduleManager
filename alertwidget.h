#ifndef ALERTWIDGET_H
#define ALERTWIDGET_H

#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QPropertyAnimation>
#include <QApplication>
#include <QScreen>
#include <QTimer>

class AlertWidget : public QLabel
{
    Q_OBJECT
private:
    explicit AlertWidget(QWidget *parent = nullptr, QString message = "");

public:
    static void showAlert(QString message);
};

#endif // ALERTWIDGET_H
