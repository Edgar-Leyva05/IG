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

    void on_pushButtonINICIARSESION_clicked();

    void on_pushButtonCREARCUENTA_clicked();

    void on_pushButtonYOBO_5_clicked();

    void on_toolButtonCATEGORIAS_clicked();
    void categoria1Seleccionada();//ropa
    void categoria2Seleccionada();//tecnologia
    //clase ropa derivada de categoria 1
    void categoria1Opcion1Seleccionada();
    void categoria1Opcion2Seleccionada();
    void categoria1Opcion3Seleccionada();
    void categoria1Opcion4Seleccionada();
    void categoria1Opcion5Seleccionada();
    void categoria1Opcion6Seleccionada();

    //categoria Tecnologia derivada de categoria 2
    void categoria2Opcion1Seleccionada();
    void categoria2Opcion2Seleccionada();
    void categoria2Opcion3Seleccionada();
    void categoria2Opcion4Seleccionada();
    void categoria2Opcion5Seleccionada();
    void categoria2Opcion6Seleccionada();



private:
    Ui::MainWindow *ui;
    QAction *accionCategoria1;
    QAction *accionCategoria2;

};
#endif // MAINWINDOW_H
