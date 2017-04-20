/******************************************************************************
 * Název projektu: IVS-2.-projekt
 * Soubor: math_library.h
 * Datum:  7.4.2017
 * Poslední změna: 20.4.2017
 * Autor:  David Dejmal xdejma00
 *
 * Popis: soubor math_library.h, obsahuje hlavickovy soubor s 
 * definicemi funkci z math_library.cpp
 *        
 ******************************************************************************/

/**
 * @file math_library.h
 * 
 * @brief obsahuje definice funkci k math_library.cpp
 */

#include <stdbool.h>
#include <limits.h>
#include <math.h>

/**
 * @defgroup Functions Matematicke funkce
 * @brief Skupina funkci pocitajicich matematicke operace
 */

/**
 * @brief funkce pocitajici soucet dvou cisel
 * @ingroup Functions
 * @param x prvni cislo souctu
 * @param y druhe cislo souctu
 * @param *error ukazatel na bool oznamujici chybu pri vypoctu
 * @return soucet x + y
 * Funkce plus scita parametr x a y a vraci jejich soucet, pokud pri vypoctu nastane chyba
 * nastavi se bool error na true a navratova hodnota neni specifikovana
 */
double plus(double x, double y, bool *error);

/**
 * @brief funkce pocitajici rozdil dvou cisel
 * @ingroup Functions
 * @param x prvni cislo rozdilu
 * @param y druhe cislo rozdilu
 * @param *error ukazatel na bool oznamujici chybu pri vypoctu
 * @return rozdil x - y
 * Funkce minus odcita parametr x a y a vraci jejich rozdil, pokud pri vypoctu nastane chyba
 * nastavi se bool error na true a navratova hodnota neni specifikovana
 */
double minus(double x, double y, bool *error);

/**
 * @brief funkce pocitajici soucin dvou cisel
 * @ingroup Functions
 * @param x prvni cislo soucinu
 * @param y druhe cislo soucinu
 * @return soucin x * y
 * Funkce multi odcita parametr x a y a vraci jejich soucin, pokud pri vypoctu nastane chyba
 * nastavi se bool error na true a navratova hodnota neni specifikovana
 */
double multi(double x, double y);

/**
 * @brief funkce pocitajici podil dvou cisel
 * @ingroup Functions
 * @param x delenec
 * @param y delitel
 * @param *error ukazatel na bool oznamujici chybu pri vypoctu
 * @return podil x / y
 * Funkce multi odcita parametr x a y a vraci jejich podil, pokud pri vypoctu nastane chyba,
 * nebo vypocet neni definovan nastavi se bool error na true a navratova hodnota neni specifikovana
 */
double divis(double x, double y, bool *error);

/**
 * @brief funkce pocitajici faktorial cisla
 * @ingroup Functions
 * @param x cislo z ktereho chceme vypocist faktorial
 * @param *error ukazatel na bool oznamujici chybu pri vypoctu
 * @return faktorial z cisla x
 * Funkce fact pocita faktorial z hodnoty x a vraci vysledek vypoctu, pokud pri vypoctu nastane chyba,
 * nebo vypocet neni definovan nastavi se bool error na true a navratova hodnota neni specifikovana
 */
double fact(double x, bool *error);

/**
 * @brief funkce pocitajici n-tou mocninu cisla
 * @ingroup Functions
 * @param x cislo z ktereho chceme vypocist mocninu
 * @param n cele kladne cislo urcujici mocnitele
 * @param *error ukazatel na bool oznamujici chybu pri vypoctu
 * @return n-ta mocnina z cisla x
 * Funkce power pocita n-tou mocninu z cisla x, pokud pri vypoctu nastane chyba,
 * nebo vypocet neni definovan nastavi se bool error na true a navratova hodnota neni specifikovana
 */
double power(double x, double n, bool *error);

/**
 * @brief funkce pocitajici druhou odmocninu z cisla
 * @ingroup Functions
 * @param x cislo z ktereho chceme vypocist odmocninu
 * @param *error ukazatel na bool oznamujici chybu pri vypoctu
 * @return odmocnina z cisla x
 * Funkce multi pocita odmocninu z cisla x, pokud pri vypoctu nastane chyba,
 * nebo vypocet neni definovan nastavi se bool error na true a navratova hodnota neni specifikovana
 */
double root(double x, bool *error);

/**
 * @brief funkce pocitajici prirozeny logaritmus cisla
 * @ingroup Functions
 * @param x cislo z ktereho chceme vypocist prirozeny logaritmus
 * @param *error ukazatel na bool oznamujici chybu pri vypoctu
 * @return prirozeny logaritmus z cisla x
 * Funkce ln pocita prirozeny logaritmus z cisla x, pokud pri vypoctu nastane chyba,
 * nebo vypocet neni definovan nastavi se bool error na true a navratova hodnota neni specifikovana
 */
double ln(double x, bool *error); //bonus
