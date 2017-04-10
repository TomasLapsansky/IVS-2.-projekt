#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QKeyEvent"
#include <math_library.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()   //destruktor hlavního okna
{
    delete ui;
}

void MainWindow::on_BT_1_clicked()
{
    Zapis('1');
}

void MainWindow::on_BT_2_clicked()
{
    Zapis('2');
}

void MainWindow::on_BT_3_clicked()
{
    Zapis('3');
}

void MainWindow::on_BT_4_clicked()
{
    Zapis('4');
}

void MainWindow::on_BT_5_clicked()
{
    Zapis('5');
}

void MainWindow::on_BT_6_clicked()
{
    Zapis('6');
}

void MainWindow::on_BT_7_clicked()
{
     Zapis('7');
}

void MainWindow::on_BT_8_clicked()
{
    Zapis('8');
}

void MainWindow::on_BT_9_clicked()
{
     Zapis('9');
}

void MainWindow::on_BT_0_clicked()
{
     Zapis('0');
}

void MainWindow::on_BT_pi_clicked()
{

}

void MainWindow::Zapis(char cislo)
{
    if(prepis)  //prepis je povolen a text se zmenil zapsanim do primo do labelu
    {
        ui->lineEdit->setText("0"); //prepis na nulu
    }
    help_qstring=ui->lineEdit->text();
    if((help_qstring[0]=='0')&&(help_qstring.size()==1))    //muze prepsat prvni znak
    {
     help_qstring[0]=cislo;
     ui->lineEdit->setText(help_qstring) ;
    }
    else
    {
        ui->lineEdit->setText(help_qstring+cislo);   //prida znak nakonec
    }
     prepis=false;
}

void MainWindow::on_BT_Delete_clicked()
{

    help_qstring=ui->lineEdit->text();  //kopie do poocného qstringu
    if(help_qstring.size()>1)
    {
     help_qstring.resize(help_qstring.size()-1);    //orizne jeden znak z konce retece
    }
    else if(help_qstring[0]!='0')   //retezec je jeden znak
    {
        help_qstring="0";
    }
    ui->lineEdit->setText(help_qstring) ;   //nastavi lineedit
}

void MainWindow::on_BT_CLEAR_clicked()
{
    ui->lineEdit->setText("0"); //vynuluje lineedit
    a=b=0;
    operat=nothing;

}

void MainWindow::on_BT_Plus_clicked()
{
    if(operat!=nothing) //jiz byla zadana operace
    {
      on_BT_Equal_clicked();
    }
    help_qstring=ui->lineEdit->text();
    a=help_qstring.toDouble(&transfer);     //prevod retezce na double
    //funce zvladne desetine tecky i carky
   if(transfer==0)  //prevod se nepodaril
    {
      a=0;
      ui->lineEdit->setText("Spatny format cisla!");
    }
    prepis=true;    //nasleduji zadane cislo bude moct prepsat cely retezec
    operat=pluss;    //zapamtuju ze mam zadane plus
}

void MainWindow::on_BT_Comma_clicked()
{
    help_qstring=ui->lineEdit->text();
    if(help_qstring.count('.')==0)  //v retezci jeste neni desetina tecka
    {
        ui->lineEdit->setText(help_qstring+ui->BT_Comma->text());   //prida tecku nakonec
    }
    prepis=false;
}

void MainWindow::on_BT_Equal_clicked()
{

    help_qstring=ui->lineEdit->text();
    b=help_qstring.toDouble(&transfer);
    if(transfer==0)  //prevod se nepodaril
     {
       b=0;
       ui->lineEdit->setText("Spatny format cisla!");
       prepis=true;    //nasleduji zadane cislo bude moct prepsat cely retezec
     }
    else
    {
        switch (operat)
        {
            case pluss:
                help_qstring=QString::number(plus(a,b,&chyba));    //prevede double do qstringu
                if(chyba)
                {
                   ui->lineEdit->setText("Math error!");
                }
                else
                {

                    ui->lineEdit->setText(help_qstring);
                }
                break;

        case minuss:
            help_qstring=QString::number(minus(a,b,&chyba));    //prevede double do qstringu
            if(chyba)
            {
               ui->lineEdit->setText("Math error!");
               prepis=true;
               chyba=false;
            }
            else
            {
                ui->lineEdit->setText(help_qstring);
            }

            break;

        case mull:
            help_qstring=QString::number(multi(a,b,&chyba));    //prevede double do qstringu
            ui->lineEdit->setText(help_qstring);
            if(chyba)
            {
               ui->lineEdit->setText("Math error!");
               prepis=true;
               chyba=false;
            }
            else
            {

                ui->lineEdit->setText(help_qstring);
            }
            break;

        case divv:
            help_qstring=QString::number(divis(a,b,&chyba));    //prevede double do qstringu
            if(chyba)
            {
               ui->lineEdit->setText("Math error!");
               prepis=true;
               chyba=false;
            }
            else
            {
                ui->lineEdit->setText(help_qstring);
                prepis=true;
                chyba=false;
            }
            break;

        case faktt:
            help_qstring=QString::number(fact(b,&chyba));    //prevede double do qstringu
            if(chyba)
            {
               ui->lineEdit->setText("Math error!");
            }
            else
            {
                ui->lineEdit->setText(help_qstring);
                prepis=true;
                chyba=false;
            }
            break;

        case poww:
            help_qstring=QString::number(power(a,b,&chyba));    //prevede double do qstringu
            if(chyba)
            {
               ui->lineEdit->setText("Math error!");
            }
            else
            {
                ui->lineEdit->setText(help_qstring);
                prepis=true;
                chyba=false;
            }
            break;

        case sqrtt:
            help_qstring=QString::number(root(b,&chyba));    //prevede double do qstringu
            if(chyba)
            {
               ui->lineEdit->setText("Math error!");
               prepis=true;
               chyba=false;
            }
            else
            {

                ui->lineEdit->setText(help_qstring);
            }
            break;


       default:
               break;
        }

    operat=nothing;
   }
}

void MainWindow::on_BT_Minus_clicked()
{
   on_BT_Plus_clicked();
   operat=minuss;
}

void MainWindow::on_BT_Mul_clicked()
{
    on_BT_Plus_clicked();
    operat=mull;
}

void MainWindow::on_BT_Div_clicked()
{
    on_BT_Plus_clicked();
    operat=divv;
}

void MainWindow::on_BT_Fakt_clicked()   // unarni operator si hned vola rovna se
{
    on_BT_Plus_clicked();
    operat=faktt;
    on_BT_Equal_clicked();
}

void MainWindow::on_BT_Sqrt_clicked()   // unarni operator si hned vola rovna se
{
    on_BT_Plus_clicked();
    operat=sqrtt;
    on_BT_Equal_clicked();
}

void MainWindow::on_BT_Pow_clicked()
{
    on_BT_Plus_clicked();
    operat=poww;
}

void MainWindow::keyPressEvent(QKeyEvent * event)
{

 switch (event->key()) {
     case Qt::Key_0:
          Zapis('0');
          break;
     case Qt::Key_1:
          Zapis('1');
          break;
     case Qt::Key_2:
          Zapis('2');
          break;
     case Qt::Key_3:
          Zapis('3');
          break;
     case Qt::Key_4:
          Zapis('4');
          break;
     case Qt::Key_5:
          Zapis('5');
          break;
     case Qt::Key_6:
          Zapis('6');
          break;
     case Qt::Key_7:
          Zapis('7');
          break;
     case Qt::Key_8:
          Zapis('8');
          break;
     case Qt::Key_9:
          Zapis('9');
          break;
     case Qt::Key_Plus:
          on_BT_Plus_clicked();
          break;
     case Qt::Key_Minus:
          on_BT_Minus_clicked();
          break;
     case Qt::Key_Enter:
          on_BT_Equal_clicked();
          break;
     case Qt::Key_Backspace:
          on_BT_Delete_clicked();
          break;
     case Qt::Key_Delete:
          on_BT_CLEAR_clicked();
          break;
     case Qt::Key_Comma:
          on_BT_Comma_clicked();
          break;
     case Qt::Key_Slash:
          on_BT_Div_clicked();
          break;
     case Qt::Key_Exclam:
          on_BT_Fakt_clicked();
          break;
     case Qt::Key_Period://TODO znak *
          on_BT_Mul_clicked();
          break;
     case Qt::Key_Equal:
          on_BT_Equal_clicked();
          break;
   /*  case Qt::Key_://TODO znak ^ a sqrt ma zkratku???
          on_BT_Pow_clicked();
          break;*/
    default:
         break;
 }
}
