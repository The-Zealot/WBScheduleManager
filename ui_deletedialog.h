/********************************************************************************
** Form generated from reading UI file 'deletedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDIALOG_H
#define UI_DELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DeleteDialog
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QLineEdit *editConfirm;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeleteDialog)
    {
        if (DeleteDialog->objectName().isEmpty())
            DeleteDialog->setObjectName(QString::fromUtf8("DeleteDialog"));
        DeleteDialog->resize(330, 222);
        gridLayout = new QGridLayout(DeleteDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(DeleteDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        editConfirm = new QLineEdit(DeleteDialog);
        editConfirm->setObjectName(QString::fromUtf8("editConfirm"));

        gridLayout->addWidget(editConfirm, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DeleteDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(DeleteDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DeleteDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DeleteDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DeleteDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteDialog)
    {
        DeleteDialog->setWindowTitle(QCoreApplication::translate("DeleteDialog", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\277\321\203\320\275\321\202\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteDialog: public Ui_DeleteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDIALOG_H
