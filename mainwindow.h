#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonYOBO_clicked();

    void on_pushButtonBUSCAR_clicked();

    void on_pushButtonCARRITO_clicked();

    void on_pushButtonLOGIN_clicked();

    void on_pushButtonYOBO_2_clicked();

    void on_pushButtonYOBO_3_clicked();

    void on_pushButtonYOBO_4_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
