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

private:
    void calculateWorks();
    void fillTextBrowse();
    void writeJson();
    void readJson();
    void readSchedleList();
    void loadCalendarStyle();

    Ui::MainWindow *ui;
    Employee _employee1;
    Employee _employee2;

    quint64 _salary;
    quint32 _daysOfFirstEmployee;
    quint32 _daysOfSecondEmployee;

    QDate _lastPayday;
};
#endif // MAINWINDOW_H
