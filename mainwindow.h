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
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlField>

#include "employee.h"
#include "employeedialog.h"
#include "alertwidget.h"
#include "toolbar.h"

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
    void changeSchedle();
    void payAndClear();
    void setStatusBarMessage();

private:
    void calculateWorks();
    void fillTextBrowse();
    void writeJson();
    void readJson();
    void readSchedleList();
    void loadCalendarStyle();

    Ui::MainWindow *ui;
    EmployeeDialog* _dialog;
    Employee _employee1;
    Employee _employee2;
    Employee _employee;
    ToolBar _toolBar;

    quint64 _salary;
    quint32 _daysOfFirstEmployee;
    quint32 _daysOfSecondEmployee;

    QDate _lastPayday;
    QDate _openWBPoint;

    QSqlDatabase _db;
    QSqlTableModel* _modelEmployee;
    QSqlTableModel* _modelSchedle;
    QSqlQuery* _query;
};
#endif // MAINWINDOW_H
