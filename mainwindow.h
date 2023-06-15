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
#include <QLineEdit>

#include "employee.h"
#include "employeedialog.h"
#include "salarydialog.h"
#include "alertwidget.h"
#include "toolbar.h"
#include "colorwidget.h"
#include "defines.h"
#include "deletedialog.h"
#include "editpointdialog.h"

#undef FINISHED_DAY_HEX
#undef PAYED_DAY_HEX

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(const QString &databaseName, QWidget *parent = nullptr);
    ~MainWindow();
    
private slots:
    void takeColor(QLineEdit* edit);
    void updateCalendar();                      // changeSchedle v2.0
    void resetCalendar(QMap<QDate, EmployeeShift> &editedDays, QDate date, bool isFullReset = true);
    void payEverything(QDate date);
    void setStatusBarMessage();
    void doActionToolbar();
    void updatePointList();

    void addEmployee();
    void removeEmployee();
    void updateEmployee();
    void tableItemSelect(const QModelIndex &index);

    void addPoint();
    void removePoint();
    void changePoint();

    void saveSettings();
    void openDocInfo();

private:
    void calculateWorks(QMap<QDate, EmployeeShift> &editDays, QMap<QString, Employee> &employyes);
    void calculateFinishedDays(QMap<QDate, EmployeeShift> &editDays);
    void fillTextBrowse(QMap<QString, Employee> &employyes);
    void writeJson();
    void readJson();
    void readScheduleList();
    void loadCalendarStyle();
    void loadEditedDaysFromDB(int pointID, QMap<QDate, EmployeeShift> &editDays);
    void loadPointData(int selectedPoint);
    void editPointData(const QModelIndex &index);
    void calculateStats();
    QString readFile(QString filename);

    QString FINISHED_DAY_HEX;
    QString PAYED_DAY_HEX;

    Ui::MainWindow *ui;
    QPushButton* _buttonHelp;
    QPushButton* _buttonBugReport;
    EmployeeShift _employee1;
    EmployeeShift _employee2;
    EmployeeShift _employee;
    ToolBar _toolBar;
    QMap<QDate, EmployeeShift> _editedDays;
    QMap<QString, Employee> _employees;
    QString _scheduleText;

    quint32 _pointID;
    quint32 _employeeID;
    quint32 _salary;
    quint32 _daysOfFirstEmployee;
    quint32 _daysOfSecondEmployee;

    QDate _startDate;
    QDate _openWBPoint;

    QSqlDatabase _db;
    QSqlTableModel* _modelEmployee;
    QSqlTableModel* _modelSchedle;
    QSqlTableModel* _modelPoint;
    QSqlQuery* _query;
};
#endif // MAINWINDOW_H
