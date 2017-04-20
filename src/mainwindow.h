/******************************************************************************
 * Název projektu: IVS-2.-projekt
 * Soubor: mainwindow.cpp
 * Datum:  7.4.2017
 * Poslední změna: 20.4.2017
 * Autor:  David Dejmal xdejma00
 *
 * Popis: soubor mainwindow.h, obsahuje hlavickovy soubor mainwindow.h s 
 * definicemi funkci z mainwindow.cpp
 *        
 ******************************************************************************/

/**
 * @file mainwindow.h
 * 
 * @brief obsahuje definice funkci k mainwindow.cpp
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/**
 * @defgroup UI Funkce
 * @brief skupina funkci pracujici s uzivatelskym rozhranim
 */

namespace Ui {
class MainWindow;
}
/**
 * @brief Class polisujici hlavni okno
 *
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    // Destructor
    ~MainWindow();

private slots:

    /**
     * @ingroup Interface
     * @brief Tlacitko 1
     * Funkce provadi zapis cisla 1 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 1
     * jestli == false pak prida na konec retezce v okne 1
     */
    void on_BT_1_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko 2
     * Funkce provadi zapis cisla 2 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 2
     * jestli == false pak prida na konec retezce v okne 2
     */
    void on_BT_2_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko 3
     * Funkce provadi zapis cisla 3 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 3
     * jestli == false pak prida na konec retezce v okne 3
     */
    void on_BT_3_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko 4
     * Funkce provadi zapis cisla 4 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 4
     * jestli == false pak prida na konec retezce v okne 4
     */
    void on_BT_4_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko 5
     * Funkce provadi zapis cisla 5 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 5
     * jestli == false pak prida na konec retezce v okne 5
     */
    void on_BT_5_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko 6
     * Funkce provadi zapis cisla 6 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 6
     * jestli == false pak prida na konec retezce v okne 6
     */
    void on_BT_6_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko 7
     * Funkce provadi zapis cisla 7 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 7
     * jestli == false pak prida na konec retezce v okne 7
     */
    void on_BT_7_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko 8
     * Funkce provadi zapis cisla 8 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 8
     * jestli == false pak prida na konec retezce v okne 8
     */
    void on_BT_8_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko 9
     * Funkce provadi zapis cisla 9 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 9
     * jestli == false pak prida na konec retezce v okne 9
     */
    void on_BT_9_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko DELETE
     * Funkce maze posledni znak na kalkulacce. Pokud je zadan jediny znak nastavi se na 0.
     */
    void on_BT_Delete_clicked();

     /**
     * @ingroup Interface
     * @brief Tlacitko CLEAR
     * Funkce nuluje kalkulacku. Prepise obsah vstupniho okna na 0, nastavi prepis na true a nastavi operat na nothing
     */
    void on_BT_CLEAR_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko 0
     * Funkce provadi zapis cisla 0 do okna kalkulacky. Zkontroluje promennou prepis a jestli == true pak prepise obsah vstupniho okna na 0
     * jestli == true pak prida na konec retezce v okne 0
     */
    void on_BT_0_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko plus
     * Pokud je operat rozdilny od nothing tak se prevede retezec na cislo, pote se vypocte vysledek predchozi operace a zobrazi.
     * Funkce nastavi prepis na true a nastavi operat na pluss. Pokud byl operat nothing pouze se prevede retezec na cislo nastavi se prepis
     * na true a operat na pluss. Pokud se nepovede prevod retezce na cislo vypise se chyba.
     */
    void on_BT_Plus_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko minus
     * Pokud je operat rozdilny od nothing tak se prevede retezec na cislo, pote se vypocte vysledek predchozi operace a zobrazi.
     * Funkce nastavi prepis na true a nastavi operat na pluss. Pokud byl operat nothing pouze se prevede retezec na cislo nastavi se prepis
     * na true a operat na pluss.
     */
    void on_BT_Comma_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko rovna se
     * Pokud je operat rozdilny od nothing tak se prevede retezec na cislo, pote se vypocte vysledek predchozi operace a zobrazi.
     * Funkce nastavi prepis na true a nastavi operat na nothing. Pokud byl operat nothing pouze se prevede retezec na cislo nastavi se prepis
     * na true a operat na nothing. Pokud se nepovede prevod retezce na cislo vypise se chyba.
     */
    void on_BT_Equal_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko minus
     * Pokud je operat rozdilny od nothing tak se prevede retezec na cislo, pote se vypocte vysledek predchozi operace a zobrazi.
     * Funkce nastavi prepis na true a nastavi operat na minuss. Pokud byl operat nothing pouze se prevede retezec na cislo nastavi se prepis
     * na true a operat na minuss. Pokud se nepovede prevod retezce na cislo vypise se chyba.
     */
    void on_BT_Minus_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko krat Pokud se nepovede prevod retezce na cislo vypise se chyba.
     * Pokud je operat rozdilny od nothing tak se prevede retezec na cislo, pote se vypocte vysledek predchozi operace a zobrazi.
     * Funkce nastavi prepis na true a nastavi operat na mull. Pokud byl operat nothing pouze se prevede retezec na cislo nastavi se prepis
     * na true a operat na mull. Pokud se nepovede prevod retezce na cislo vypise se chyba.
     */
    void on_BT_Mul_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko deleno
     * Pokud je operat rozdilny od nothing tak se prevede retezec na cislo, pote se vypocte vysledek predchozi operace a zobrazi.
     * Funkce nastavi prepis na true a nastavi operat na divv. Pokud byl operat nothing pouze se prevede retezec na cislo nastavi se prepis
     * na true a operat na divv. Pokud se nepovede prevod retezce na cislo vypise se chyba.
     */
    void on_BT_Div_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko odmocnina
     * Vypocte se vysledek predchozi operace podle operat a pote se vzpocte faktorial z vysledku ktera se zobrazi. Operat se nastavi na nothing a prepis na true.
     * Pokud byla predchozi operace nothing tak se pouze prevede retezec na cislo a vypocte se faktorial z cisla. Operat se nastavi na nothing a prepis na true.
     * Pokud se nepovede prevod retezce na cislo vypise se chyba.
     */
    void on_BT_Fakt_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko odmocnina
     * Vypocte se vysledek predchozi operace podle operat a pote se vzpocte odmocnina z vysledku ktera se zobrazi. Operat se nastavi na nothing a prepis na true.
     * Pokud byla predchozi operace nothing tak se pouze prevede retezec na cislo a vypocte se odmocnina z cisla. Operat se nastavi na nothing a prepis na true.
     */
    void on_BT_Sqrt_clicked();

    /**
     * @ingroup Interface
     * @brief Tlacitko mocnina
     * Pokud je operat rozdilny od nothing tak se prevede retezec na cislo, pote se vypocte vysledek predchozi operace a zobrazi.
     * Funkce nastavi prepis na true a nastavi operat na poww. Pokud byl operat nothing pouze se prevede retezec na cislo nastavi se prepis
     * na true a operat na poww. Pokud se nepovede prevod retezce na cislo vypise se chyba.
     */
    void on_BT_Pow_clicked();

    void on_BT_Lnn_clicked();

    /**
     * @ingroup Interface
     * @brief funkce pro zapis znaku do vstupniho okna
     * @param cislo ASCII znak s hodnotou 0-255 ktery se zapise do vstupniho okna
     * funkce zapisuje do vstupniho okna kalkulacky, pokud je hodnota prepis == true
     * vstupni okno prepise jinak pripoji znak na konec retezce v okne.
     */
    void Zapis(char cislo);

private:
    Ui::MainWindow *ui;
    QString help_qstring;   // pomocna promena pro zapis cisla
    double a=0,b=0;         // pomocna promena pro vypocty
    bool prepis=true;       // bool urcujici jestli je v okne nula
    bool transfer=false;
    enum druh_operator      // vyctovy typ urcijici typ zadaneho operatoru
    {
       nothing,pluss,minuss,mull,divv,faktt,sqrtt,poww,lnn
    }  operat=nothing;   //nic epsi jak operat me nenapadlo
    bool chyba=false;   //pro zjisteni chyby
    void keyPressEvent(QKeyEvent * event);
};

#endif // MAINWINDOW_H
