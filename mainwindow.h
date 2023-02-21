#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPalette>
#include <QColorDialog>
#include <QRegularExpression>
#include <QFile>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>

#include "employee.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void takeColor();
    void changeShedle();
    void payAndClear();
    void writeJson();
    void readJson();

private:
    Ui::MainWindow *ui;
    Employee _employee1;
    Employee _employee2;
    quint64 _salary;

    QTime _currentTime;
};
#endif // MAINWINDOW_H
