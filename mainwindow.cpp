#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loadingdialog.h"
#include <QDebug>
#include <QWidget>
#include <QLabel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_initiateButton_clicked()
{
    LoadingDialog loadingDialog;
    loadingDialog.setModal(true);
    loadingDialog.exec();

    QDateTime currentTime = QDateTime::currentDateTime();
    QDateTime inputTime = ui->dateEdit->dateTime();

    if(currentTime.toString("MM.dd") == inputTime.toString("MM.dd"))
    {
        ui->largeLabel->setText("HAPPY BIRTHDAY!");
    }
    else
    {
        ui->largeLabel->setText("Today is not\n your birthday.");

    }
}
