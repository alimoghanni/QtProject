<<<<<<< HEAD
#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>

namespace Ui {
class editdialog;
}

class editdialog : public QDialog
{
    Q_OBJECT

public:
    explicit editdialog(QWidget *parent = nullptr);
    ~editdialog();

    const QString name() const;
    void setName( const QString& );
    const QString number() const;
    void setNumber( const QString& );

private:
    Ui::editdialog *ui;
};

#endif // EDITDIALOG_H
=======
#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>

namespace Ui {
class editdialog;
}

class editdialog : public QDialog
{
    Q_OBJECT

public:
    explicit editdialog(QWidget *parent = nullptr);
    ~editdialog();

    const QString name() const;
    void setName( const QString& );
    const QString number() const;
    void setNumber( const QString& );

private:
    Ui::editdialog *ui;
};

#endif // EDITDIALOG_H
>>>>>>> b31553b340274707b56c671b056938e4aa103f20
