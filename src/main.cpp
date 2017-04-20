/******************************************************************************
 * Název projektu: IVS-2.-projekt
 * Soubor: main.cpp
 * Datum:  7.4.2017
 * Poslední změna: 20.4.2017
 * Autor:  David Dejmal xdejma00
 *
 * Popis: soubor main.cpp, obsahuje funkci main
 *        
 ******************************************************************************/

/**
 * @file main.cpp
 * 
 * @brief obsahuje funkci main
 */
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(333,233);
    w.show();

    return a.exec();
}
