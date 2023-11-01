/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCargar;
    QAction *actionguardar;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *id;
    QDoubleSpinBox *volt;
    QSpinBox *pos_x;
    QSpinBox *pos_y;
    QSpinBox *red;
    QSpinBox *green;
    QSpinBox *blue;
    QPushButton *busId;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *agregarFinal;
    QPushButton *agregarInicio;
    QPushButton *bmostrar;
    QLineEdit *lineId;
    QPlainTextEdit *seeBox;
    QTableWidget *tableWidget;
    QPushButton *or_Id;
    QPushButton *or_vol;
    QWidget *tab_4;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_2;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *neuronaCercana;
    QMenuBar *menubar;
    QMenu *menufile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(649, 502);
        actionCargar = new QAction(MainWindow);
        actionCargar->setObjectName("actionCargar");
        actionguardar = new QAction(MainWindow);
        actionguardar->setObjectName("actionguardar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 136, 215));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        id = new QSpinBox(layoutWidget);
        id->setObjectName("id");
        id->setMaximum(999);

        verticalLayout_2->addWidget(id);

        volt = new QDoubleSpinBox(layoutWidget);
        volt->setObjectName("volt");
        volt->setMaximum(999.000000000000000);

        verticalLayout_2->addWidget(volt);

        pos_x = new QSpinBox(layoutWidget);
        pos_x->setObjectName("pos_x");
        pos_x->setMaximum(999);

        verticalLayout_2->addWidget(pos_x);

        pos_y = new QSpinBox(layoutWidget);
        pos_y->setObjectName("pos_y");
        pos_y->setMaximum(999);

        verticalLayout_2->addWidget(pos_y);

        red = new QSpinBox(layoutWidget);
        red->setObjectName("red");
        red->setMaximum(999);

        verticalLayout_2->addWidget(red);

        green = new QSpinBox(layoutWidget);
        green->setObjectName("green");
        green->setMaximum(999);

        verticalLayout_2->addWidget(green);

        blue = new QSpinBox(layoutWidget);
        blue->setObjectName("blue");
        blue->setMaximum(999);

        verticalLayout_2->addWidget(blue);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);

        busId = new QPushButton(tab_3);
        busId->setObjectName("busId");
        busId->setGeometry(QRect(137, 365, 243, 24));
        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 221, 130, 86));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        agregarFinal = new QPushButton(layoutWidget1);
        agregarFinal->setObjectName("agregarFinal");

        verticalLayout_3->addWidget(agregarFinal);

        agregarInicio = new QPushButton(layoutWidget1);
        agregarInicio->setObjectName("agregarInicio");

        verticalLayout_3->addWidget(agregarInicio);

        bmostrar = new QPushButton(layoutWidget1);
        bmostrar->setObjectName("bmostrar");

        verticalLayout_3->addWidget(bmostrar);

        lineId = new QLineEdit(tab_3);
        lineId->setObjectName("lineId");
        lineId->setGeometry(QRect(386, 365, 244, 24));
        seeBox = new QPlainTextEdit(tab_3);
        seeBox->setObjectName("seeBox");
        seeBox->setGeometry(QRect(137, -1, 243, 309));
        tableWidget = new QTableWidget(tab_3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(386, -1, 244, 309));
        or_Id = new QPushButton(tab_3);
        or_Id->setObjectName("or_Id");
        or_Id->setGeometry(QRect(190, 330, 111, 24));
        or_vol = new QPushButton(tab_3);
        or_vol->setObjectName("or_vol");
        or_vol->setGeometry(QRect(440, 330, 131, 24));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        layoutWidget2 = new QWidget(tab_4);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(51, 14, 511, 341));
        formLayout_2 = new QFormLayout(layoutWidget2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(layoutWidget2);
        graphicsView->setObjectName("graphicsView");

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, graphicsView);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName("pushButton_2");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pushButton_2);

        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName("pushButton");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pushButton);

        neuronaCercana = new QPushButton(layoutWidget2);
        neuronaCercana->setObjectName("neuronaCercana");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, neuronaCercana);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_4->addWidget(tabWidget);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 649, 21));
        menufile = new QMenu(menubar);
        menufile->setObjectName("menufile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menufile->addAction(actionCargar);
        menufile->addAction(actionguardar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCargar->setText(QCoreApplication::translate("MainWindow", "Cargar", nullptr));
        actionguardar->setText(QCoreApplication::translate("MainWindow", "guardar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "VOLTAJE", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "POSICION X", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "POSICION Y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "RED", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "GREEN ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "BLUE", nullptr));
        busId->setText(QCoreApplication::translate("MainWindow", "BUSCAR POR ID", nullptr));
        agregarFinal->setText(QCoreApplication::translate("MainWindow", "AGREGAR AL FINAL ", nullptr));
        agregarInicio->setText(QCoreApplication::translate("MainWindow", "AGREGAR AL INICIO", nullptr));
        bmostrar->setText(QCoreApplication::translate("MainWindow", "MOSTRAR", nullptr));
        or_Id->setText(QCoreApplication::translate("MainWindow", "ORDENAR POR ID", nullptr));
        or_vol->setText(QCoreApplication::translate("MainWindow", "ORDENAR POR VOLTAJE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "LIMPIAR", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "DIBUJAR", nullptr));
        neuronaCercana->setText(QCoreApplication::translate("MainWindow", "CALCULAR NEURONA M\303\201S CERCANA", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
