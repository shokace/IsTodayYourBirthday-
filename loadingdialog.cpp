#include "loadingdialog.h"
#include "ui_loadingdialog.h"
#include "windows.h"
#include <QProgressBar>
#include <QDebug>


LoadingDialog::LoadingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadingDialog)
{
    ui->setupUi(this);
    for(int i = 0; i <= 100; i++)
    {
        ui->progressBar->setValue(i);
    }
    qDebug() << "DID";
    if(ui->progressBar->value() == 100)
    {
        this->close();
        qDebug() << "CLOSE";
    }

}

LoadingDialog::~LoadingDialog()
{
    delete ui;
}





