#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_BT_1_clicked();
    void on_BT_2_clicked();
    void on_BT_3_clicked();
    void on_BT_4_clicked();
    void on_BT_5_clicked();
    void on_BT_6_clicked();
    void on_BT_7_clicked();
    void on_BT_8_clicked();
    void on_BT_9_clicked();
    void on_BT_Delete_clicked();
    void on_BT_CLEAR_clicked();
    void on_BT_0_clicked();
    void on_BT_Plus_clicked();
    void on_BT_Comma_clicked();
    void on_BT_Equal_clicked();
    void Zapis(char cislo);

    void on_BT_Minus_clicked();

    void on_BT_Mul_clicked();

    void on_BT_Div_clicked();

    void on_BT_Fakt_clicked();

    void on_BT_Sqrt_clicked();

    void on_BT_Pow_clicked();

private:
    Ui::MainWindow *ui;
    QString help_qstring;   //pomocna promena pro zapis cisla
    char help_char[21];  //pro configuraci c , c++ , qt
    double a=0,b=0; //pomocna promena pro vypocty
    bool prepis=true;
    bool transfer=false;
    enum druh_operator
    {
       nothing,plus,minus,mul,div,fakt,sqrt,pow
    }  operat=nothing;   //nic epsi jak operat me nenapadlo
};

#endif // MAINWINDOW_H
