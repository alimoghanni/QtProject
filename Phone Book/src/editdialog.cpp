<<<<<<< HEAD
#include "editdialog.h"
#include "ui_editdialog.h"

editdialog::editdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editdialog)
{
    ui->setupUi(this);
}

editdialog::~editdialog()
{
    delete ui;
}

const QString editdialog::name() const
{
    return ui->nameEdit->text().replace("--","").trimmed();
}

void editdialog::setName(const QString &name)
{
    ui->nameEdit->setText(name);
}

const QString editdialog::number() const
{
    return ui->numberEdit->text().replace("--","").trimmed();
}

void editdialog::setNumber(const QString &number)
{
    ui->numberEdit->setText(number);
}
=======
#include "editdialog.h"
#include "ui_editdialog.h"

editdialog::editdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editdialog)
{
    ui->setupUi(this);
}

editdialog::~editdialog()
{
    delete ui;
}

const QString editdialog::name() const
{
    return ui->nameEdit->text().replace("--","").trimmed();
}

void editdialog::setName(const QString &name)
{
    ui->nameEdit->setText(name);
}

const QString editdialog::number() const
{
    return ui->numberEdit->text().replace("--","").trimmed();
}

void editdialog::setNumber(const QString &number)
{
    ui->numberEdit->setText(number);
}
>>>>>>> b31553b340274707b56c671b056938e4aa103f20
