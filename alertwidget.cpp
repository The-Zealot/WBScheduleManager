#include "alertwidget.h"

AlertWidget::AlertWidget(QWidget *parent, QString message) : QLabel(parent)
{
    QScreen* screen = QApplication::screens().at(0);
    QSize size = screen->availableSize();

    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    this->setAlignment(Qt::AlignCenter);
    this->setStyleSheet("QLabel { padding: 10px; background: black; color: white; border-radius: 15px; }");
    this->setText(message);
    this->show();
    this->move((size.width() - this->width()) / 2, (size.height() - this->height()) / 2);

    for (int i = 0; i <= 255; i++)
    {
        QPropertyAnimation* animation = new QPropertyAnimation(this, "windowOpacity");
        animation->setDuration(2000);
        animation->setEndValue(QColor(128, 128, 128, 255 - i));
        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
}

void AlertWidget::showAlert(QString message)
{
    QTimer* timer = new QTimer;
    AlertWidget* alert = new AlertWidget(nullptr, message);
    connect(timer, &QTimer::timeout, [alert, timer](){
        delete alert;
        delete timer;
    });

    timer->start(3000);
}
