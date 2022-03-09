#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QPixmap>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void resizeImage();
    void paintEvent(QPaintEvent *event) override;


private slots:
    void on_actOpenFile_triggered();

private:
    Ui::MainWindow *ui;
    QPixmap *m_imageBuffer;
};
#endif // MAINWINDOW_H
