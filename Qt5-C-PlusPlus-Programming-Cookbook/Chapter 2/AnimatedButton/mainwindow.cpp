#include <QPropertyAnimation>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPropertyAnimation *MoveAnimation = new QPropertyAnimation( ui-> pushButton, "geometry");
    MoveAnimation-> setDuration(2000);
    MoveAnimation-> setStartValue( ui-> pushButton-> geometry());
    MoveAnimation-> setEndValue( QRect(60, 60, 300, 50));
    MoveAnimation-> start();


}

MainWindow::~MainWindow()
{

    delete ui;
}
