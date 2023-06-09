#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString db;
    if (argc > 1)
    {
        db = QString::fromUtf8(argv[1]);
    }
    else
    {
        db = "./schedle.db";
    }

    MainWindow w(db);
    w.show();
    return a.exec();
}
