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

    // Crea las acciones para CATEGORIAS y agrégalas al menú
    accionCategoria1 = menuCategorias->addAction("Categoria 1");
    accionCategoria2 = menuCategorias->addAction("Categoria 2");

    // Crea menús desplegables adicionales para las categorías
    QMenu *menuCategoria1 = new QMenu("Opciones Categoria 1", this);
    QMenu *menuCategoria2 = new QMenu("Opciones Categoria 2", this);

    // Agrega acciones al menú desplegable de Categoria 1
    QAction *accionCat1Opcion1 = menuCategoria1->addAction("Opción 1");
    QAction *accionCat1Opcion2 = menuCategoria1->addAction("Opción 2");

    // Agrega acciones al menú desplegable de Categoria 2
    QAction *accionCat2Opcion1 = menuCategoria2->addAction("Opción 1");
    QAction *accionCat2Opcion2 = menuCategoria2->addAction("Opción 2");

    // Conecta las acciones a los slots correspondientes
    connect(accionCategoria1, &QAction::triggered, this, &MainWindow::categoria1Seleccionada);
    connect(accionCategoria2, &QAction::triggered, this, &MainWindow::categoria2Seleccionada);

    connect(accionCat1Opcion1, &QAction::triggered, this, &MainWindow::categoria1Opcion1Seleccionada);
    connect(accionCat1Opcion2, &QAction::triggered, this, &MainWindow::categoria1Opcion2Seleccionada);

    connect(accionCat2Opcion1, &QAction::triggered, this, &MainWindow::categoria2Opcion1Seleccionada);
    connect(accionCat2Opcion2, &QAction::triggered, this, &MainWindow::categoria2Opcion2Seleccionada);

    // Configura los menús desplegables para las categorías
    accionCategoria1->setMenu(menuCategoria1);
    accionCategoria2->setMenu(menuCategoria2);

    // Configura el QToolButton para mostrar el menú principal de CATEGORIAS
    ui->toolButtonCATEGORIAS->setMenu(menuCategorias);
    ui->toolButtonCATEGORIAS->setPopupMode(QToolButton::InstantPopup);


    // Agrega acciones al menú
    //QAction *accionCategoria1 = menuCategorias->addAction("Categoria 1");
    //QAction *accionCategoria2 = menuCategorias->addAction("Categoria 2");

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
void MainWindow::categoria1Opcion1Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 1 de Categoria 1
}

void MainWindow::categoria1Opcion2Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 2 de Categoria 1
}

void MainWindow::categoria2Opcion1Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 1 de Categoria 2
}

void MainWindow::categoria2Opcion2Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 2 de Categoria 2
}
