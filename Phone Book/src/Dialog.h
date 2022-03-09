<<<<<<< HEAD
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void addItem();
    void editItem();
    void deleteItem();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
=======
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void addItem();
    void editItem();
    void deleteItem();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
>>>>>>> b31553b340274707b56c671b056938e4aa103f20
