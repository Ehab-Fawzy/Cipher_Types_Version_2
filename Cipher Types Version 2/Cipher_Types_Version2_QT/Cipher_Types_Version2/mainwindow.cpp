#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFont>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->HomeButton->setStyleSheet( "background-image: url(:/Images/bk.jpg); color:#2E112D; font: 75 20pt Arial; Border:0px;" );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_HomeButton_clicked()
{
    ui->HomeButton->setStyleSheet( "background-image: url(:/Images/bk.jpg); color:#2E112D; font: 75 20pt Arial; Border:0px;" );
    ui->Group1Button->setStyleSheet( "QPushButton#Group1Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group1Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group1Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group2Button->setStyleSheet( "QPushButton#Group2Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group2Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group2Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group3Button->setStyleSheet( "QPushButton#Group3Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group3Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group3Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->OutputButton->setStyleSheet( "QPushButton#OutputButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#OutputButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#OutputButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Auther_Button->setStyleSheet( "QPushButton#Auther_Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Auther_Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Auther_Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
}

void MainWindow::on_Group1Button_clicked()
{
    ui->HomeButton->setStyleSheet( "QPushButton#HomeButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#HomeButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#HomeButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group1Button->setStyleSheet( "background-image: url(:/Images/bk.jpg); color:#2E112D; font: 75 20pt Arial; Border:0px;" );
    ui->Group2Button->setStyleSheet( "QPushButton#Group2Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group2Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group2Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group3Button->setStyleSheet( "QPushButton#Group3Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group3Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group3Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->OutputButton->setStyleSheet( "QPushButton#OutputButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#OutputButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#OutputButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Auther_Button->setStyleSheet( "QPushButton#Auther_Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Auther_Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Auther_Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
}

void MainWindow::on_Group2Button_clicked()
{
    ui->HomeButton->setStyleSheet( "QPushButton#HomeButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#HomeButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#HomeButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group1Button->setStyleSheet( "QPushButton#Group1Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group1Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group1Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group2Button->setStyleSheet( "background-image: url(:/Images/bk.jpg); color:#2E112D; font: 75 20pt Arial; Border:0px;" );
    ui->Group3Button->setStyleSheet( "QPushButton#Group3Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group3Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group3Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->OutputButton->setStyleSheet( "QPushButton#OutputButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#OutputButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#OutputButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Auther_Button->setStyleSheet( "QPushButton#Auther_Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Auther_Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Auther_Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );

}

void MainWindow::on_Group3Button_clicked()
{
    ui->HomeButton->setStyleSheet( "QPushButton#HomeButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#HomeButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#HomeButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group1Button->setStyleSheet( "QPushButton#Group1Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group1Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group1Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group2Button->setStyleSheet( "QPushButton#Group2Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group2Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group2Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group3Button->setStyleSheet( "background-image: url(:/Images/bk.jpg); color:#2E112D; font: 75 20pt Arial; Border:0px;" );
    ui->OutputButton->setStyleSheet( "QPushButton#OutputButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#OutputButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#OutputButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Auther_Button->setStyleSheet( "QPushButton#Auther_Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Auther_Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Auther_Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );

}

void MainWindow::on_OutputButton_clicked()
{
    ui->HomeButton->setStyleSheet( "QPushButton#HomeButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#HomeButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#HomeButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group1Button->setStyleSheet( "QPushButton#Group1Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group1Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group1Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group2Button->setStyleSheet( "QPushButton#Group2Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group2Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group2Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group3Button->setStyleSheet( "QPushButton#Group3Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group3Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group3Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->OutputButton->setStyleSheet( "background-image: url(:/Images/bk.jpg); color:#2E112D; font: 75 20pt Arial; Border:0px;" );
    ui->Auther_Button->setStyleSheet( "QPushButton#Auther_Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Auther_Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Auther_Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );

}

void MainWindow::on_SaveAsButton_clicked()
{

}

void MainWindow::on_Auther_Button_clicked()
{
    ui->HomeButton->setStyleSheet( "QPushButton#HomeButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#HomeButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#HomeButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group1Button->setStyleSheet( "QPushButton#Group1Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group1Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group1Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group2Button->setStyleSheet( "QPushButton#Group2Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group2Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group2Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Group3Button->setStyleSheet( "QPushButton#Group3Button { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#Group3Button:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#Group3Button:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->OutputButton->setStyleSheet( "QPushButton#OutputButton { background-color: #C9283E; color: #F1F2F2; Border:0px; font: 75 18pt Arial; } QPushButton#OutputButton:hover { background-color: #C9283E; color: #F1F2F2; Border:0px;	font: 75 20pt Arial; background-image: url(:/Images/Hover.jpg); }  QPushButton#OutputButton:pressed { background-color: #EA6380; color: #2E112D; Border:0px; font: 75 18pt Arial; background-image: url(:/Images/bk.jpg);} " );
    ui->Auther_Button->setStyleSheet( "background-image: url(:/Images/bk.jpg); color:#2E112D; font: 75 20pt Arial; Border:0px;" );
}
