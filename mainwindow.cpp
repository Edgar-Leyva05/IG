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
    accionCategoria1 = menuCategorias->addAction("Ropa");
    accionCategoria2 = menuCategorias->addAction("Tecnología");

    // Crea menús desplegables adicionales para las categorías
    QMenu *menuCategoria1 = new QMenu("Opciones Categoria 1", this);
    QMenu *menuCategoria2 = new QMenu("Opciones Categoria 2", this);

    // Agrega acciones al menú desplegable de Categoria 1
    QAction *accionCat1Opcion1 = menuCategoria1->addAction("Pantalón");
    QAction *accionCat1Opcion2 = menuCategoria1->addAction("Camisa");
    //Agregadas prueba de ropa
    QAction *accionCat1Opcion3 = menuCategoria1->addAction("short");
    QAction *accionCat1Opcion4 = menuCategoria1->addAction("Polo");
    QAction *accionCat1Opcion5 = menuCategoria1->addAction("Polera");
    QAction *accionCat1Opcion6 = menuCategoria1->addAction("Chompa");



    // Agrega acciones al menú desplegable de Categoria 2
    QAction *accionCat2Opcion1 = menuCategoria2->addAction("Laptop");
    QAction *accionCat2Opcion2 = menuCategoria2->addAction("Celular");
    //Agregadas prueba de tecnologia
    QAction *accionCat2Opcion3 = menuCategoria2->addAction("Pantallas");
    QAction *accionCat2Opcion4 = menuCategoria2->addAction("Accesorios");
    QAction *accionCat2Opcion5 = menuCategoria2->addAction("Consolas");
    QAction *accionCat2Opcion6 = menuCategoria2->addAction("Videojuegos");


    // Conecta las acciones a los slots correspondientes
    connect(accionCategoria1, &QAction::triggered, this, &MainWindow::categoria1Seleccionada);
    connect(accionCategoria2, &QAction::triggered, this, &MainWindow::categoria2Seleccionada);

    connect(accionCat1Opcion1, &QAction::triggered, this, &MainWindow::categoria1Opcion1Seleccionada);
    connect(accionCat1Opcion2, &QAction::triggered, this, &MainWindow::categoria1Opcion2Seleccionada);
   //Agregadas prueba de ropa
    connect(accionCat1Opcion3, &QAction::triggered, this, &MainWindow::categoria1Opcion3Seleccionada);
    connect(accionCat1Opcion4, &QAction::triggered, this, &MainWindow::categoria1Opcion4Seleccionada);
    connect(accionCat1Opcion5, &QAction::triggered, this, &MainWindow::categoria1Opcion5Seleccionada);
    connect(accionCat1Opcion6, &QAction::triggered, this, &MainWindow::categoria1Opcion6Seleccionada);


    connect(accionCat2Opcion1, &QAction::triggered, this, &MainWindow::categoria2Opcion1Seleccionada);
    connect(accionCat2Opcion2, &QAction::triggered, this, &MainWindow::categoria2Opcion2Seleccionada);
    //Agregadas prueba tecnologia
    connect(accionCat2Opcion3, &QAction::triggered, this, &MainWindow::categoria2Opcion3Seleccionada);
    connect(accionCat2Opcion4, &QAction::triggered, this, &MainWindow::categoria2Opcion4Seleccionada);
    connect(accionCat2Opcion5, &QAction::triggered, this, &MainWindow::categoria2Opcion5Seleccionada);
    connect(accionCat2Opcion6, &QAction::triggered, this, &MainWindow::categoria2Opcion6Seleccionada);


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

//prueba de ropa
void MainWindow::categoria1Opcion3Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 3 de Categoria 1
}

void MainWindow::categoria1Opcion4Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 4 de Categoria 1
}
void MainWindow::categoria1Opcion5Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 5 de Categoria 1
}

void MainWindow::categoria1Opcion6Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 6 de Categoria 1
}




void MainWindow::categoria2Opcion1Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 1 de Categoria 2
}

void MainWindow::categoria2Opcion2Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 2 de Categoria 2
}

//prueba tecnologia
void MainWindow::categoria2Opcion3Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 3 de Categoria 2
}

void MainWindow::categoria2Opcion4Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 4 de Categoria 2
}
void MainWindow::categoria2Opcion5Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 5 de Categoria 2
}

void MainWindow::categoria2Opcion6Seleccionada()
{
    // Código a ejecutar cuando se selecciona la Opción 6 de Categoria 2
}


