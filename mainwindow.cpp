#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "personnage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Personnage* p=new Personnage(0, 0, ui->centralwidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

