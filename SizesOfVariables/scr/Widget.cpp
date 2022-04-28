#include "Widget.h"
#include "ui_Widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

//    connect(ui->cmb_variabletype, &QComboBox::currentTextChanged, ui->label_size, &QLabel::setText);
    connect(ui->cmb_variabletype, &QComboBox::currentTextChanged, this, &Widget::onCurrentTextChanged);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onCurrentTextChanged(QString text)
{
    if (text == "bool")
    {
        ui->label_size->setText(QString::number(sizeof(bool)));
    } else if (text == "char")
    {
        ui->label_size->setText(QString::number(sizeof(char)));
    } else if (text == "unsigned short")
    {
        ui->label_size->setText(QString::number(sizeof(unsigned short)));
    } else if (text == "short")
    {
        ui->label_size->setText(QString::number(sizeof(short)));
    } else if (text == "unsigned long")
    {
        ui->label_size->setText(QString::number(sizeof(unsigned long)));
    } else if (text == "long")
    {
        ui->label_size->setText(QString::number(sizeof(long)));
    } else if (text == "int")
    {
        ui->label_size->setText(QString::number(sizeof(int)));
    } else if (text == "unsigned long long")
    {
        ui->label_size->setText(QString::number(sizeof(unsigned long long)));
    } else if (text == "long long")
    {
        ui->label_size->setText(QString::number(sizeof(long long)));
    } else if (text == "unsigned int")
    {
        ui->label_size->setText(QString::number(sizeof(unsigned int)));
    } else if (text == "float")
    {
        ui->label_size->setText(QString::number(sizeof(float)));
    } else if (text == "double")
    {
        ui->label_size->setText(QString::number(sizeof(double)));
    }
}

