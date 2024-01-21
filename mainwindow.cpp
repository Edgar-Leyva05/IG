#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMenu>
#include <QAction>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonYOBO_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



void MainWindow::on_pushButtonCARRITO_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButtonLOGIN_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButtonYOBO_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButtonYOBO_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButtonYOBO_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButtonINICIARSESION_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButtonCREARCUENTA_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButtonYOBO_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_toolButtonCATEGORIAS_clicked()
{
    // Crea un QMenu
    QMenu *menuCategorias = new QMenu(this);

    // Agrega acciones al menú
    QAction *accionCategoria1 = menuCategorias->addAction("Categoria 1");
    QAction *accionCategoria2 = menuCategorias->addAction("Categoria 2");
    // Agrega más acciones según sea necesario

    // Conecta las acciones a slots si es necesario
    connect(accionCategoria1, &QAction::triggered, this, &MainWindow::categoria1Seleccionada);
    connect(accionCategoria2, &QAction::triggered, this, &MainWindow::categoria2Seleccionada);
    // Conecta más acciones según sea necesario

    // Muestra el menú en la posición del botón
    menuCategorias->exec(ui->toolButtonCATEGORIAS->mapToGlobal(QPoint(0, ui->toolButtonCATEGORIAS->height())));
}

void MainWindow::categoria1Seleccionada()
{
    // Código a ejecutar cuando se selecciona la categoría 1
}

void MainWindow::categoria2Seleccionada()
{
    // Código a ejecutar cuando se selecciona la categoría 2
}


void MainWindow::on_pushButtonBUSCAR_clicked()
{

}

