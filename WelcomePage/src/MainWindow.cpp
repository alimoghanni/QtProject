#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_Ok_clicked()
{
    QString firstName = ui->le_FirstName->text();
    QString lastName = ui->le_LastName->text();

    if (ui->le_FirstName->text().isEmpty() && ui->le_LastName->text().isEmpty())
    {
        QMessageBox::warning(this, "Information", "Please fill the form!");

    } else {
        ui->label_Hello->setText("Hello, " + firstName + " " + lastName);
    }

}


void MainWindow::on_btn_Clear_clicked()
{
    ui->le_FirstName->clear();
    ui->le_LastName->clear();
    ui->label_Hello->setText(" ");
}

