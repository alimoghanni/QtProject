<<<<<<< HEAD
#include "Dialog.h"
#include "ui_Dialog.h"
#include "editdialog.h"

#include <QPushButton>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->addButton, &QPushButton::clicked, this, &Dialog::addItem);
    connect(ui->editButton, &QPushButton::clicked, this, &Dialog::editItem);
    connect(ui->deleteButton, &QPushButton::clicked, this, &Dialog::deleteItem);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::addItem()
{
    editdialog dlg(this);

    if (dlg.exec() == Accepted) {
        ui->list->addItem(dlg.name() + " -- " + dlg.number());
    }
}

void Dialog::editItem()
{
    if (!ui->list->currentItem()) {
        return;
    }

    QStringList parts = ui->list->currentItem()->text().split("--");

    editdialog dlg(this);
    dlg.setName(parts[0].trimmed());
    dlg.setNumber(parts[1].trimmed());

    if (dlg.exec() == Accepted) {
        ui->list->currentItem()->setText(dlg.name() + " -- " + dlg.number());
    }
}

void Dialog::deleteItem()
{
    delete ui->list->currentItem();
}


=======
#include "Dialog.h"
#include "ui_Dialog.h"
#include "editdialog.h"

#include <QPushButton>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->addButton, &QPushButton::clicked, this, &Dialog::addItem);
    connect(ui->editButton, &QPushButton::clicked, this, &Dialog::editItem);
    connect(ui->deleteButton, &QPushButton::clicked, this, &Dialog::deleteItem);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::addItem()
{
    editdialog dlg(this);

    if (dlg.exec() == Accepted) {
        ui->list->addItem(dlg.name() + " -- " + dlg.number());
    }
}

void Dialog::editItem()
{
    if (!ui->list->currentItem()) {
        return;
    }

    QStringList parts = ui->list->currentItem()->text().split("--");

    editdialog dlg(this);
    dlg.setName(parts[0].trimmed());
    dlg.setNumber(parts[1].trimmed());

    if (dlg.exec() == Accepted) {
        ui->list->currentItem()->setText(dlg.name() + " -- " + dlg.number());
    }
}

void Dialog::deleteItem()
{
    delete ui->list->currentItem();
}


>>>>>>> b31553b340274707b56c671b056938e4aa103f20
