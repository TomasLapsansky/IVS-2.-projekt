#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_BT_1_clicked()  //TODO z tohohle zrobit funkci
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
      ui->lineEdit->setText("Spatne zadane cislo!");
    }
    prepis=true;    //nasleduji zadane cislo bude moct prepsat cely retezec
    operat=plus;    //zapamtuju ze mam zadane plus
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
       ui->lineEdit->setText("Spatne zadane cislo!");
       prepis=true;    //nasleduji zadane cislo bude moct prepsat cely retezec
     }
    else
    {
        switch (operat)
        {
            case plus:

                  //TODO arit funcion
                // help_qstring=help_char;

                help_qstring=QString::number(a+b);    //prevede double do qstringu
                ui->lineEdit->setText(help_qstring);

                break;
        case minus:

          //TODO arit funcion
          // help_qstring=help_char;
          //ui->lineEdit->setText(help_qstring);
            help_qstring=QString::number(a-b);    //prevede double do qstringu
            ui->lineEdit->setText(help_qstring);

            break;
        case mul:

          //TODO arit funcion
          // help_qstring=help_char;
          //ui->lineEdit->setText(help_qstring);
            help_qstring=QString::number(a*b);    //prevede double do qstringu
            ui->lineEdit->setText(help_qstring);

            break;
        case div:

          //TODO arit funcion
          // help_qstring=help_char;
          //ui->lineEdit->setText(help_qstring);
            help_qstring=QString::number(a/b);    //prevede double do qstringu
            ui->lineEdit->setText(help_qstring);

            break;
        case fakt:

          //TODO arit funcion
          // help_qstring=help_char;
          //ui->lineEdit->setText(help_qstring);
            help_qstring=QString::number(5555);    //prevede double do qstringu
            ui->lineEdit->setText(help_qstring);

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
   operat=minus;
}

void MainWindow::on_BT_Mul_clicked()
{
    on_BT_Plus_clicked();
    operat=mul;
}

void MainWindow::on_BT_Div_clicked()
{
    on_BT_Plus_clicked();
    operat=div;
}

void MainWindow::on_BT_Fakt_clicked()   // unarni operator si hned vola rovna se
{
    on_BT_Plus_clicked();
    operat=fakt;
    on_BT_Equal_clicked();
}

void MainWindow::on_BT_Sqrt_clicked()
{
    on_BT_Plus_clicked();
    operat=fakt;
    on_BT_Equal_clicked();
}

void MainWindow::on_BT_Pow_clicked()
{
    on_BT_Plus_clicked();
    operat=pow;
}
