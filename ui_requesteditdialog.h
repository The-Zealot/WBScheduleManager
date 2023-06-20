/********************************************************************************
** Form generated from reading UI file 'requesteditdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTEDITDIALOG_H
#define UI_REQUESTEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RequestEditDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonSend;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *RequestEditDialog)
    {
        if (RequestEditDialog->objectName().isEmpty())
            RequestEditDialog->setObjectName(QString::fromUtf8("RequestEditDialog"));
        RequestEditDialog->resize(623, 469);
        gridLayout = new QGridLayout(RequestEditDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(251, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        buttonSend = new QPushButton(RequestEditDialog);
        buttonSend->setObjectName(QString::fromUtf8("buttonSend"));

        gridLayout->addWidget(buttonSend, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        textEdit = new QTextEdit(RequestEditDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 3);

        label = new QLabel(RequestEditDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 3);


        retranslateUi(RequestEditDialog);

        QMetaObject::connectSlotsByName(RequestEditDialog);
    } // setupUi

    void retranslateUi(QDialog *RequestEditDialog)
    {
        RequestEditDialog->setWindowTitle(QCoreApplication::translate("RequestEditDialog", "Dialog", nullptr));
        buttonSend->setText(QCoreApplication::translate("RequestEditDialog", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("RequestEditDialog", "<html><head/><body><p>Server info: %s:%s / %s</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RequestEditDialog: public Ui_RequestEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTEDITDIALOG_H
