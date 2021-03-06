#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QFile>
#include "planeta.h"
#include "planetagraf.h"
#include "objeto.h"
#include <QGraphicsItem>


namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer* timer;
    QGraphicsScene* scene;
    float dt;
    float h_limit;
    float v_limit;
    QList<planetagraf*> cuerpos;
    float tiempo;
    void spawn();

private slots:
    void actualizar();
    void on_creador_clicked();
};


#endif // MAINWINDOW_H
