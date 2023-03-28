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
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlField>
#include <QDesktopServices>

#include "employee.h"
#include "employeedialog.h"
#include "alertwidget.h"
#include "toolbar.h"
#include "colorwidget.h"
#include "defines.h"

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
    void updateCalendar();                      // changeSchedle v2.0
    void resetCalendar();
    void payEverything();
    void setStatusBarMessage();
    void doActionToolbar();

    void addEmployee();
    void removeEmployee();
    void updateEmployee();
    void tableItemSelect(const QModelIndex &index);

    void saveSettings();
    void openDocInfo();

private:
    void calculateWorks();
    void calculateFinishedDays();
    void fillTextBrowse();
    void writeJson();
    void readJson();
    void readSchedleList();
    void loadCalendarStyle();
    void loadEditedDaysFromDB();

    Ui::MainWindow *ui;
    EmployeeShift _employee1;
    EmployeeShift _employee2;
    EmployeeShift _employee;
    ToolBar _toolBar;
    QMap<QDate, EmployeeShift> _editedDays;
    QMap<QString, Employee> _employees;

    quint64 _salary;
    quint32 _daysOfFirstEmployee;
    quint32 _daysOfSecondEmployee;

    QDate _lastPayday;
    QDate _startDate;
    QDate _openWBPoint;

    QSqlDatabase _db;
    QSqlTableModel* _modelEmployee;
    QSqlTableModel* _modelSchedle;
    QSqlQuery* _query;
};
#endif // MAINWINDOW_H
