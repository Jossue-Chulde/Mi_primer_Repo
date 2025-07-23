/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *boton_registrar;
    QLabel *TITULO;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *boton_modificar;
    QPushButton *boton_actualizar;
    QPushButton *boton_eliminar;
    QPushButton *boton_buscar;
    QLineEdit *digitar_id;
    QLineEdit *digitar_nombre;
    QLineEdit *digitar_juego;
    QLineEdit *digitar_nivel;
    QTableView *tabla_registros;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        boton_registrar = new QPushButton(centralwidget);
        boton_registrar->setObjectName("boton_registrar");
        boton_registrar->setGeometry(QRect(60, 210, 101, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        boton_registrar->setFont(font);
        TITULO = new QLabel(centralwidget);
        TITULO->setObjectName("TITULO");
        TITULO->setGeometry(QRect(280, 20, 261, 71));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        TITULO->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 131, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(390, 100, 111, 31));
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 160, 141, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 160, 71, 31));
        label_5->setFont(font2);
        boton_modificar = new QPushButton(centralwidget);
        boton_modificar->setObjectName("boton_modificar");
        boton_modificar->setGeometry(QRect(190, 210, 111, 41));
        boton_modificar->setFont(font);
        boton_actualizar = new QPushButton(centralwidget);
        boton_actualizar->setObjectName("boton_actualizar");
        boton_actualizar->setGeometry(QRect(340, 210, 111, 41));
        boton_actualizar->setFont(font);
        boton_eliminar = new QPushButton(centralwidget);
        boton_eliminar->setObjectName("boton_eliminar");
        boton_eliminar->setGeometry(QRect(490, 210, 101, 41));
        boton_eliminar->setFont(font);
        boton_buscar = new QPushButton(centralwidget);
        boton_buscar->setObjectName("boton_buscar");
        boton_buscar->setGeometry(QRect(630, 210, 101, 41));
        boton_buscar->setFont(font);
        digitar_id = new QLineEdit(centralwidget);
        digitar_id->setObjectName("digitar_id");
        digitar_id->setGeometry(QRect(200, 110, 131, 26));
        digitar_nombre = new QLineEdit(centralwidget);
        digitar_nombre->setObjectName("digitar_nombre");
        digitar_nombre->setGeometry(QRect(510, 100, 231, 26));
        digitar_juego = new QLineEdit(centralwidget);
        digitar_juego->setObjectName("digitar_juego");
        digitar_juego->setGeometry(QRect(540, 160, 201, 26));
        digitar_nivel = new QLineEdit(centralwidget);
        digitar_nivel->setObjectName("digitar_nivel");
        digitar_nivel->setGeometry(QRect(170, 160, 161, 26));
        tabla_registros = new QTableView(centralwidget);
        tabla_registros->setObjectName("tabla_registros");
        tabla_registros->setGeometry(QRect(60, 271, 691, 281));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CRUD-Programacion", nullptr));
        boton_registrar->setText(QCoreApplication::translate("MainWindow", "Regitrar", nullptr));
        TITULO->setText(QCoreApplication::translate("MainWindow", "Aplicaci\303\263n CRUD", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID Usuario :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Nombre :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "VideoJuego :", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Nivel :", nullptr));
        boton_modificar->setText(QCoreApplication::translate("MainWindow", "Modificar", nullptr));
        boton_actualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        boton_eliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        boton_buscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
