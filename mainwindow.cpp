#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //conecion directa
    //Connect (dir del sender, signal del sender,
    //         dir del reciver, slot del reciver};
    connect(ui->capacidad,SIGNAL(returnPressed()),
            this,SLOT(capacidad_tanque));              //this es porque se conecta con un slot mio de main windows

    connect(ui->qin,SIGNAL(returnPressed()),
            this,SLOT(entrada()));

    connect(ui->qout,SIGNAL(returnPressed()),
            this,SLOT(salida()));

    connect(ui->time_out, SIGNAL(textChanged(QString)),  //conecta el LineEdit para cambiar el intervalo del QTimer
            this, SLOT(cambiar_timeout()));

    connect(&timer,SIGNAL(timeout()),              //conecta el QTimer con la función que actualiza el nivel del tanque
            this,SLOT(inc_nivel()));

    timer.start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::capacidad_tanque()                     //en adelante
{
    QString text;
    text=ui->capacidad->text();
    double val=text.toDouble();
    ui->tanque->setValue(val);
}

void MainWindow::entrada()
{
    QString max;
    max = ui->qin->text();
    double val_max = max.toDouble();
    ui->kin->setMaximum(val_max);
}

void MainWindow::salida()
{
    QString max;
    max = ui->qout->text();
    double val_max=max.toDouble();
    ui->kout->setMaximum(val_max);
}

void MainWindow::inc_nivel()
{
    double val_actual = ui->tanque->value();

    double kin_val = ui->kin->value();
    double kout_val = ui->kout->value();

    double qin_max = ui->qin->text().toDouble();  // maximo
    double qout_max = ui->qout->text().toDouble();

    double entrada = kin_val * qin_max;
    double salida = kout_val * qout_max;

    double delta = (entrada - salida) * 0.1;  // cambio de nivel en litros
    double nuevo_nivel = val_actual + delta;

    if (nuevo_nivel < 0)    // verifica que este entre los limites de capacidad del tanque
    { nuevo_nivel = 0;
    }
    else if (nuevo_nivel > ui->tanque->maximum())
    { nuevo_nivel = ui->tanque->maximum();
    }

    ui->tanque->setValue(nuevo_nivel);
}

void MainWindow::cambiar_timeout()
{
    double nuevo_timeout = ui->time_out->text().toDouble();
    if (nuevo_timeout > 0)    // verifica que el valor sea valido
    {
        timer.start(nuevo_timeout);  // cambia el intervalo del QTimer
    } else
    {
        timer.start(1000);  //restablece al valor predeterminado
    }
    timer.start(nuevo_timeout);
}


