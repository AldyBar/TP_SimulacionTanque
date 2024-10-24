#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qtimer>           //

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);       //
    ~MainWindow();

private:
    Ui::MainWindow *ui;
public slots:                            //
    void capacidad_tanque();             //
    void entrada();                      //
    void salida();                       //
    void inc_nivel();                    //
    void cambiar_timeout();
private:                                 //
    QTimer timer;                        //
};

#endif // MAINWINDOW_H
