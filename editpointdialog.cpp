#include "editpointdialog.h"
#include "ui_editpointdialog.h"

EditPointDialog::EditPointDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditPointDialog)
{
    ui->setupUi(this);

    this->setFixedSize(this->size());

    _mapper = new QDataWidgetMapper(this);
    _mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    ui->groupBox->hide();

    connect(ui->buttonApply, &QPushButton::clicked, this, &EditPointDialog::onButtonApplyClicked);
    connect(ui->buttonClose, &QPushButton::clicked, this, &EditPointDialog::onButtonCloseClicked);
    connect(ui->dateEditOpen, &QDateEdit::dateChanged, [this](){
        ui->editOpenDate->setText(ui->dateEditOpen->date().toString());                                 // DRY
    });
    connect(ui->dateEditStart, &QDateEdit::dateChanged, [this](){
        ui->editStartDate->setText(ui->dateEditStart->date().toString());                               // DRY
    });
    connect(ui->editOpenDate, &QLineEdit::textChanged, [this](){
        ui->dateEditOpen->setDate(QDate::fromString(ui->editOpenDate->text()));                         // DRY
    });
    connect(ui->editStartDate, &QLineEdit::textChanged, [this](){
        ui->dateEditStart->setDate(QDate::fromString(ui->editStartDate->text()));                       // DRY
    });
}

EditPointDialog::~EditPointDialog()
{
    delete ui;
}

void EditPointDialog::setModel(QAbstractItemModel *model)
{
    _mapper->setModel(model);
    _mapper->addMapping(ui->editPointName, DB_TABLE_POINTS_NAME);
    _mapper->addMapping(ui->comboBoxMarketplace, DB_TABLE_POINTS_MARKET);
    _mapper->addMapping(ui->comboBoxFirstEmployee, DB_TABLE_POINTS_EMPLOYEE1);
    _mapper->addMapping(ui->comboBoxSecondEmployee, DB_TABLE_POINTS_EMPLOYEE2);
    _mapper->addMapping(ui->editOpenDate, DB_TABLE_POINTS_OPEN_DATE);
    _mapper->addMapping(ui->editStartDate, DB_TABLE_POINTS_START_DATE);
    _mapper->addMapping(ui->comboBoxSchedule, DB_TABLE_POINTS_SCHEDULE);
}

void EditPointDialog::setEmployeeList(QAbstractItemModel *model)
{
    int rows = model->rowCount();

    _employeeList.clear();

    for (int i = 0; i < rows; i++)
    {
        _employeeList.append(model->data(model->index(i, DB_TABLE_EMPLOYEE_NAME)).toString());
    }

    ui->comboBoxFirstEmployee->addItems(_employeeList);
    ui->comboBoxSecondEmployee->addItems(_employeeList);

    if (!_employeeList.isEmpty())
    {
        ui->comboBoxFirstEmployee->setCurrentIndex(-1);
        ui->comboBoxSecondEmployee->setCurrentIndex(-1);
    }
}

void EditPointDialog::setModelIndex(const QModelIndex &index)
{
    _mapper->setCurrentModelIndex(index);
}

void EditPointDialog::setScheduleList(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "File " + file.fileName() + " not found";
        return;
    }
    ui->comboBoxSchedule->addItems(QString(file.readAll()).split("\n"));
    file.close();
}

void EditPointDialog::onButtonApplyClicked()
{
    _mapper->submit();
}

void EditPointDialog::onButtonCloseClicked()
{
    this->close();
}

