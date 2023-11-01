#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "neurona.h"
#include "QSpinBox"
#include <QPlainTextEdit>
#include<QDebug>
#include<QString>
#include<QFileDialog>
#include<QTableView>
#include<QTableWidget>
#include<list>
#include<QLineEdit>
#include<QPen>
#include<QColor>
#include<QBrush>
#include<QGraphicsView>
#include<QGraphicsScene>

AdministradorNeuronas list;
QString neuro;



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


void MainWindow::on_agregarFinal_clicked()
{
    Neurona neurona(ui->id->value(),ui->volt->value(),ui->pos_x->value(),ui->pos_y->value(),ui->red->value(),
                    ui->green->value(),ui->blue->value());
    list.agregar_final(neurona);
    list.mostrar();
}


void MainWindow::on_agregarInicio_clicked()
{
    Neurona neurona(ui->id->value(),ui->volt->value(),ui->pos_x->value(),ui->pos_y->value(),ui->red->value(),
                    ui->green->value(),ui->blue->value());
    list.agregar_inicio(neurona);
    list.mostrar();

}


void MainWindow::on_bmostrar_clicked()
{
    int ta;
    int i;
    ta=list.tam();
    list.mostrar();
    neuro = (list.imprimir()).c_str();
    ui->seeBox->setPlainText(neuro);

    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setRowCount(list.tam());
    //QTableWidgetItem *Myitem= new QTableWidgetItem(list.imprimir().c_str());
    for(i; i<ta;i++)
    {
        QTableWidgetItem *Myitem= new QTableWidgetItem(list.obtener_neurona_en_posicion(i).c_str());
        ui->tableWidget->setItem(i,0,Myitem);

    }
    i=0;

}


void MainWindow::on_seeBox_blockCountChanged(int newBlockCount)
{

}


void MainWindow::on_actionguardar_triggered()
{
    list.guardar_en_archivo("neuronas.txt");
    //QString FileName = QFileDialog::getOpenFileName(this,tr("Open File"), "/home", tr("Images(*.txt)"));
}


void MainWindow::on_actionCargar_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this,tr("Open File"), "/home", tr("Images(*.txt)"));
    list.cargar_desde_archivo(FileName.toStdString());
}



void MainWindow::on_busId_clicked()
{

    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setRowCount(1);
    QTableWidgetItem *Myitem= new QTableWidgetItem(list.encontrar_neurona_por_id(ui->lineId->text().toStdString()).c_str());
    ui->tableWidget->setItem(0,0,Myitem);
}


void MainWindow::on_pushButton_clicked()
{
    QPen pen;
    int ta=list.tam(),i=0;


    for(i;i<ta;i++){
        QColor color(list.obtener_red_en_posicion(i),list.obtener_green_en_posicion(i),list.obtener_blue_en_posicion(i));
        pen.setColor(color);
        QBrush brush(color,Qt::Dense4Pattern);
        scene.addEllipse(list.obtener_posX_en_posicion(i),list.obtener_posY_en_posicion(i),list.obtener_voltaje_en_posicion(i),list.obtener_voltaje_en_posicion(i),pen,brush);
        ui->graphicsView->setScene(&scene);
    }
    i=0;


}


void MainWindow::on_pushButton_2_clicked()
{
    scene.clear();
}


void MainWindow::on_or_Id_clicked()
{
    list.ordenar_por_id();
}


void MainWindow::on_or_vol_clicked()
{
    list.ordenar_por_voltaje();
}


void MainWindow::on_neuronaCercana_clicked()
{
    QPen pen;
    int x1,x2,y1,y2;
    QPen linePen;


    for(int i = 0; i < list.tam(); i++) {
        std::pair<int, int> posicion_mas_cercana = list.encontrar_neurona_mas_cercana(i);
        if (posicion_mas_cercana != std::make_pair(-1, -1)) {
             x2 = posicion_mas_cercana.first;
             y2 = posicion_mas_cercana.second;

            std::cout << "La neurona más cercana a la neurona en la posición " << i << " se encuentra en la posición (" << x2 << ", " << y2 << ")" << std::endl;
        } else {
            std::cout << "No se pudo encontrar la neurona más cercana a la neurona en la posición " << i << std::endl;
        }
         x1 = list.obtener_posX_en_posicion(i);
         y1 = list.obtener_posY_en_posicion(i);

        QColor color(list.obtener_red_en_posicion(i),list.obtener_green_en_posicion(i),list.obtener_blue_en_posicion(i));
        pen.setColor(color);
        QBrush brush(color,Qt::Dense4Pattern);
        scene.addLine(x1,y1,x2,y2,linePen);
        scene.addEllipse(list.obtener_posX_en_posicion(i),list.obtener_posY_en_posicion(i), 20 ,20,pen,brush);

        ui->graphicsView->setScene(&scene);




    }






}

