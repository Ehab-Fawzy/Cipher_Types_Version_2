#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QSaveFile>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QFileDialog>
#include <QDesktopServices>
#include <QTime>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->HomeButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 18pt Comic Sans MS; border:0px;");
    ui->HomePages->setCurrentIndex(0);
    ui->HomeHeader->setHidden(true);
    ui->textEditOUTPUT->setPlaceholderText("OutPut Area");
    ui->New->setDisabled( true );

    this->showMaximized();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_HomeButton_clicked()
{
    ui->HomeButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 18pt Comic Sans MS; border:0px;");
    ui->XORButton->setStyleSheet(" QPushButton#XORButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#XORButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->MorseCodeButton->setStyleSheet(" QPushButton#MorseCodeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#MorseCodeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->ROT13Button->setStyleSheet(" QPushButton#ROT13Button{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#ROT13Button:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->CaesarButton->setStyleSheet(" QPushButton#CaesarButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#CaesarButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->AtbashButton->setStyleSheet(" QPushButton#AtbashButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#AtbashButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->PolybiusButton->setStyleSheet(" QPushButton#PolybiusButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#PolybiusButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->BaconianButton->setStyleSheet(" QPushButton#BaconianButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#BaconianButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->RailFenceButton->setStyleSheet(" QPushButton#RailFenceButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 9pt Comic Sans MS;} QPushButton#RailFenceButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 9pt Comic Sans MS; } ");
    ui->SMButton->setStyleSheet(" QPushButton#SMButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 8pt Comic Sans MS;} QPushButton#SMButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 8pt Comic Sans MS; } ");

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->HomePages->setCurrentIndex(0);
    ui->Key->clear();

}

void MainWindow::on_XORButton_clicked()
{
    MainWindow::SaveTemp();

    ui->XORButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 10pt Comic Sans MS; border:0px;");
    ui->HomeButton->setStyleSheet(" QPushButton#HomeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 18pt Comic Sans MS;} QPushButton#HomeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 18pt Comic Sans MS; } ");
    ui->MorseCodeButton->setStyleSheet(" QPushButton#MorseCodeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#MorseCodeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->ROT13Button->setStyleSheet(" QPushButton#ROT13Button{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#ROT13Button:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->CaesarButton->setStyleSheet(" QPushButton#CaesarButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#CaesarButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->AtbashButton->setStyleSheet(" QPushButton#AtbashButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#AtbashButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->PolybiusButton->setStyleSheet(" QPushButton#PolybiusButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#PolybiusButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->BaconianButton->setStyleSheet(" QPushButton#BaconianButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#BaconianButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->RailFenceButton->setStyleSheet(" QPushButton#RailFenceButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 9pt Comic Sans MS;} QPushButton#RailFenceButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 9pt Comic Sans MS; } ");
    ui->SMButton->setStyleSheet(" QPushButton#SMButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 8pt Comic Sans MS;} QPushButton#SMButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 8pt Comic Sans MS; } ");

    ui->HomePages->setCurrentIndex(1);
    ui->textEdit->setText( arr[ 0 ][ 0 ] );
    ui->textEditOUTPUT->setText( arr[ 1 ][ 0 ] );
    ui->textEdit->setPlaceholderText("This Type of Encryption Deal With letter and numerical data\nThe secret Key Consist of only one letter");
    ui->enterkeyLabel->setHidden(false);
    ui->Key->setHidden(false);

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->Key->clear();
    choice = "8";

}

void MainWindow::on_MorseCodeButton_clicked()
{
    MainWindow::SaveTemp();

    ui->MorseCodeButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 10pt Comic Sans MS; border:0px;");
    ui->HomeButton->setStyleSheet(" QPushButton#HomeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 18pt Comic Sans MS;} QPushButton#HomeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 18pt Comic Sans MS; } ");
    ui->XORButton->setStyleSheet(" QPushButton#XORButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#XORButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->ROT13Button->setStyleSheet(" QPushButton#ROT13Button{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#ROT13Button:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->CaesarButton->setStyleSheet(" QPushButton#CaesarButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#CaesarButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->AtbashButton->setStyleSheet(" QPushButton#AtbashButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#AtbashButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->PolybiusButton->setStyleSheet(" QPushButton#PolybiusButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#PolybiusButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->BaconianButton->setStyleSheet(" QPushButton#BaconianButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#BaconianButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->RailFenceButton->setStyleSheet(" QPushButton#RailFenceButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 9pt Comic Sans MS;} QPushButton#RailFenceButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 9pt Comic Sans MS; } ");
    ui->SMButton->setStyleSheet(" QPushButton#SMButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 8pt Comic Sans MS;} QPushButton#SMButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 8pt Comic Sans MS; } ");

    ui->HomePages->setCurrentIndex(1);
    ui->textEdit->setText( arr[ 0 ][ 1 ] );
    ui->textEditOUTPUT->setText( arr[ 1 ][ 1 ] );
    ui->textEdit->setPlaceholderText("This Type of Encryption Deal With Lower Case English letter and numerical data");
    ui->Key->setHidden(true);
    ui->enterkeyLabel->setHidden(true);

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->Key->clear();
    choice = "7";
}

void MainWindow::on_ROT13Button_clicked()
{
    MainWindow::SaveTemp();

    ui->ROT13Button->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 10pt Comic Sans MS; border:0px;");
    ui->HomeButton->setStyleSheet(" QPushButton#HomeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 18pt Comic Sans MS;} QPushButton#HomeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 18pt Comic Sans MS; } ");
    ui->XORButton->setStyleSheet(" QPushButton#XORButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#XORButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->MorseCodeButton->setStyleSheet(" QPushButton#MorseCodeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#MorseCodeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->CaesarButton->setStyleSheet(" QPushButton#CaesarButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#CaesarButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->AtbashButton->setStyleSheet(" QPushButton#AtbashButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#AtbashButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->PolybiusButton->setStyleSheet(" QPushButton#PolybiusButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#PolybiusButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->BaconianButton->setStyleSheet(" QPushButton#BaconianButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#BaconianButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->RailFenceButton->setStyleSheet(" QPushButton#RailFenceButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 9pt Comic Sans MS;} QPushButton#RailFenceButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 9pt Comic Sans MS; } ");
    ui->SMButton->setStyleSheet(" QPushButton#SMButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 8pt Comic Sans MS;} QPushButton#SMButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 8pt Comic Sans MS; } ");

    ui->HomePages->setCurrentIndex(1);
    ui->textEdit->setText( arr[ 0 ][ 2 ] );
    ui->textEditOUTPUT->setText( arr[ 1 ][ 2 ] );
    ui->textEdit->setPlaceholderText("This Type of Encryption Deal With English letters only");
    ui->Key->setHidden(true);
    ui->enterkeyLabel->setHidden(true);

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->Key->clear();
    choice = "3";
}

void MainWindow::on_CaesarButton_clicked()
{
    MainWindow::SaveTemp();

    ui->CaesarButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 10pt Comic Sans MS; border:0px;");
    ui->HomeButton->setStyleSheet(" QPushButton#HomeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 18pt Comic Sans MS;} QPushButton#HomeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 18pt Comic Sans MS; } ");
    ui->XORButton->setStyleSheet(" QPushButton#XORButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#XORButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->MorseCodeButton->setStyleSheet(" QPushButton#MorseCodeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#MorseCodeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->ROT13Button->setStyleSheet(" QPushButton#ROT13Button{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#ROT13Button:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->AtbashButton->setStyleSheet(" QPushButton#AtbashButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#AtbashButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->PolybiusButton->setStyleSheet(" QPushButton#PolybiusButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#PolybiusButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->BaconianButton->setStyleSheet(" QPushButton#BaconianButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#BaconianButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->RailFenceButton->setStyleSheet(" QPushButton#RailFenceButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 9pt Comic Sans MS;} QPushButton#RailFenceButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 9pt Comic Sans MS; } ");
    ui->SMButton->setStyleSheet(" QPushButton#SMButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 8pt Comic Sans MS;} QPushButton#SMButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 8pt Comic Sans MS; } ");

    ui->HomePages->setCurrentIndex(1);
    ui->textEdit->setText( arr[ 0 ][ 3 ] );
    ui->textEditOUTPUT->setText( arr[ 1 ][ 3 ] );
    ui->textEdit->setPlaceholderText("This Type of Encryption Deal With English letters only");
    ui->Key->setHidden(true);
    ui->enterkeyLabel->setHidden(true);

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->Key->clear();
    choice = "1";
}

void MainWindow::on_AtbashButton_clicked()
{
    MainWindow::SaveTemp();

    ui->AtbashButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 10pt Comic Sans MS; border:0px;");
    ui->HomeButton->setStyleSheet(" QPushButton#HomeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 18pt Comic Sans MS;} QPushButton#HomeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 18pt Comic Sans MS; } ");
    ui->XORButton->setStyleSheet(" QPushButton#XORButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#XORButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->MorseCodeButton->setStyleSheet(" QPushButton#MorseCodeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#MorseCodeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->CaesarButton->setStyleSheet(" QPushButton#CaesarButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#CaesarButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->PolybiusButton->setStyleSheet(" QPushButton#PolybiusButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#PolybiusButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->BaconianButton->setStyleSheet(" QPushButton#BaconianButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#BaconianButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->RailFenceButton->setStyleSheet(" QPushButton#RailFenceButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 9pt Comic Sans MS;} QPushButton#RailFenceButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 9pt Comic Sans MS; } ");
    ui->SMButton->setStyleSheet(" QPushButton#SMButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 8pt Comic Sans MS;} QPushButton#SMButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 8pt Comic Sans MS; } ");
    ui->ROT13Button->setStyleSheet(" QPushButton#ROT13Button{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#ROT13Button:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");

    ui->HomePages->setCurrentIndex(1);
    ui->textEdit->setText( arr[ 0 ][ 4 ] );
    ui->textEditOUTPUT->setText( arr[ 1 ][ 4 ] );
    ui->textEdit->setPlaceholderText("This Type of Encryption Deal With English letters only");
    ui->Key->setHidden(true);
    ui->enterkeyLabel->setHidden(true);

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->Key->clear();
    choice = "2";
}

void MainWindow::on_PolybiusButton_clicked()
{
    MainWindow::SaveTemp();

    ui->PolybiusButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 10pt Comic Sans MS; border:0px;");
    ui->CaesarButton->setStyleSheet(" QPushButton#CaesarButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#CaesarButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->HomeButton->setStyleSheet(" QPushButton#HomeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 18pt Comic Sans MS;} QPushButton#HomeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 18pt Comic Sans MS; } ");
    ui->XORButton->setStyleSheet(" QPushButton#XORButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#XORButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->MorseCodeButton->setStyleSheet(" QPushButton#MorseCodeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#MorseCodeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->ROT13Button->setStyleSheet(" QPushButton#ROT13Button{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#ROT13Button:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->BaconianButton->setStyleSheet(" QPushButton#BaconianButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#BaconianButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->RailFenceButton->setStyleSheet(" QPushButton#RailFenceButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 9pt Comic Sans MS;} QPushButton#RailFenceButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 9pt Comic Sans MS; } ");
    ui->SMButton->setStyleSheet(" QPushButton#SMButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 8pt Comic Sans MS;} QPushButton#SMButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 8pt Comic Sans MS; } ");
    ui->AtbashButton->setStyleSheet(" QPushButton#AtbashButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#AtbashButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");

    ui->HomePages->setCurrentIndex(1);
    ui->textEdit->setText( arr[ 0 ][ 5 ] );
    ui->textEditOUTPUT->setText( arr[ 1 ][ 5 ] );
    ui->textEdit->setPlaceholderText("This Type of Encryption Deal With English letters only\nThe secret Key Consist of 5 distinct numbers\n\nNote : The Decryption Text Will be in Lower Case");
    ui->enterkeyLabel->setHidden(false);
    ui->Key->setHidden(false);

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->Key->clear();
    choice = "6";
}


void MainWindow::on_BaconianButton_clicked()
{
    MainWindow::SaveTemp();

    ui->BaconianButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 10pt Comic Sans MS; border:0px;");
    ui->PolybiusButton->setStyleSheet(" QPushButton#PolybiusButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#PolybiusButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->CaesarButton->setStyleSheet(" QPushButton#CaesarButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#CaesarButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->HomeButton->setStyleSheet(" QPushButton#HomeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 18pt Comic Sans MS;} QPushButton#HomeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 18pt Comic Sans MS; } ");
    ui->XORButton->setStyleSheet(" QPushButton#XORButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#XORButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->MorseCodeButton->setStyleSheet(" QPushButton#MorseCodeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#MorseCodeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->ROT13Button->setStyleSheet(" QPushButton#ROT13Button{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#ROT13Button:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->RailFenceButton->setStyleSheet(" QPushButton#RailFenceButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 9pt Comic Sans MS;} QPushButton#RailFenceButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 9pt Comic Sans MS; } ");
    ui->SMButton->setStyleSheet(" QPushButton#SMButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 8pt Comic Sans MS;} QPushButton#SMButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 8pt Comic Sans MS; } ");
    ui->AtbashButton->setStyleSheet(" QPushButton#AtbashButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#AtbashButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");

    ui->HomePages->setCurrentIndex(1);
    ui->textEdit->setText( arr[ 0 ][ 6 ] );
    ui->textEditOUTPUT->setText( arr[ 1 ][ 6 ] );
    ui->textEdit->setPlaceholderText("This Type of Encryption Deal With English letters only");
    ui->Key->setHidden(true);
    ui->enterkeyLabel->setHidden(true);

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->Key->clear();
    choice = "4";
}

void MainWindow::on_RailFenceButton_clicked()
{
    MainWindow::SaveTemp();

    ui->RailFenceButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 9pt Comic Sans MS; border:0px;");
    ui->BaconianButton->setStyleSheet(" QPushButton#BaconianButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#BaconianButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->PolybiusButton->setStyleSheet(" QPushButton#PolybiusButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#PolybiusButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->CaesarButton->setStyleSheet(" QPushButton#CaesarButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#CaesarButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->HomeButton->setStyleSheet(" QPushButton#HomeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 18pt Comic Sans MS;} QPushButton#HomeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 18pt Comic Sans MS; } ");
    ui->XORButton->setStyleSheet(" QPushButton#XORButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#XORButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->MorseCodeButton->setStyleSheet(" QPushButton#MorseCodeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#MorseCodeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->ROT13Button->setStyleSheet(" QPushButton#ROT13Button{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#ROT13Button:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->SMButton->setStyleSheet(" QPushButton#SMButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 8pt Comic Sans MS;} QPushButton#SMButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 8pt Comic Sans MS; } ");
    ui->AtbashButton->setStyleSheet(" QPushButton#AtbashButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#AtbashButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");

    ui->HomePages->setCurrentIndex(1);
    ui->textEdit->setText( arr[ 0 ][ 7 ] );
    ui->textEditOUTPUT->setText( arr[ 1 ][ 7 ] );
    ui->textEdit->setPlaceholderText("This Type of Encryption Deal With All text\nThe secret Key Consist of only one number");
    ui->enterkeyLabel->setHidden(false);
    ui->Key->setHidden(false);

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->Key->clear();
    choice = "9";
}

void MainWindow::on_SMButton_clicked()
{
    MainWindow::SaveTemp();

    ui->SMButton->setStyleSheet(" background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 187, 241, 255), stop:0.0511364 rgba(2, 187, 241, 255), stop:0.0568182 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0)); color:#f5f6fa; font: 75 8pt Comic Sans MS; border:0px;");
    ui->RailFenceButton->setStyleSheet(" QPushButton#RailFenceButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 9pt Comic Sans MS;} QPushButton#RailFenceButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 9pt Comic Sans MS; } ");
    ui->BaconianButton->setStyleSheet(" QPushButton#BaconianButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#BaconianButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->PolybiusButton->setStyleSheet(" QPushButton#PolybiusButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#PolybiusButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->CaesarButton->setStyleSheet(" QPushButton#CaesarButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#CaesarButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->HomeButton->setStyleSheet(" QPushButton#HomeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 18pt Comic Sans MS;} QPushButton#HomeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 18pt Comic Sans MS; } ");
    ui->XORButton->setStyleSheet(" QPushButton#XORButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#XORButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->MorseCodeButton->setStyleSheet(" QPushButton#MorseCodeButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#MorseCodeButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->ROT13Button->setStyleSheet(" QPushButton#ROT13Button{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#ROT13Button:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");
    ui->AtbashButton->setStyleSheet(" QPushButton#AtbashButton{ background:transparent; border:0px; color:#f5f6fa; font: 75 10pt Comic Sans MS;} QPushButton#AtbashButton:hover{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));border:0px; color:#f5f6fa;font: 75 10pt Comic Sans MS; } ");

    ui->HomePages->setCurrentIndex(1);
    ui->textEdit->setText( arr[ 0 ][ 8 ] );
    ui->textEditOUTPUT->setText( arr[ 1 ][ 8 ] );
    ui->textEdit->setPlaceholderText("This Type of Encryption Deal With English Letters\nThe Secret Key Consist of 5 Distinct English Letters");
    ui->enterkeyLabel->setHidden(false);
    ui->Key->setHidden(false);

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
    ui->Key->clear();
    choice = "5";

}

void MainWindow::on_New_clicked()
{
    key = "";
    ui->Key->clear();
    ui->textEdit->clear();
    ui->textEditOUTPUT->clear();
    ui->TextArea->setCurrentIndex(0);
    ui->output->setText("OutPut");

    bool state = ui->all->checkState();

    if ( state == true ){
        for ( int i = 0; i < 2; i++ ){
            for ( int j = 0; j < 9; j++ ){
                arr[ i ][ j ] = "";
            }
        }
    }

    ui->one->setChecked(false);
    ui->all->setChecked(false);
    ui->New->setDisabled(true);
}

void MainWindow::on_openFile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName( this, "Open the File" , "c://" , "Text file (*.txt)" );
    QFile file(fileName);
    if ( !file.open( QIODevice::ReadOnly | QFile::Text ) ){
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_Encryption_clicked()
{

    type = "1"; bool check = false;

    if      ( choice == "8" ){
        key = ui->Key->text();
        if ( xorKeyChecker() == false ){ return; }
        check = true;
    }
    else if ( choice == "6" ){
        key = ui->Key->text();
        if ( polyKeyChecker() == false ){ return; }
        check = true;
    }
    else if ( choice == "9" ){
        key = ui->Key->text();
        if ( railKeyChecker() == false ){ return; }
        check = true;
    }
    else if ( choice == "5" ){
        key = ui->Key->text();
        if ( smKeyChecker() == false ){ return; }
        check = true;
    }

    QFile file("TEXTFile_INPUT.txt");
    if ( file.open(QIODevice::WriteOnly | QIODevice::Text) ){
        QTextStream out( &file );
        if ( check == true ){ out << choice << endl << type << endl << key << endl << ui->textEdit->toPlainText(); }
        else{ out << choice << endl << type << endl << ui->textEdit->toPlainText(); }
    }

    QDesktopServices::openUrl(QUrl("Cipher_Types_Version2" , QUrl::TolerantMode ) );
    while ( true ){
        QFile file("TEXTFile_OUTPUT.txt");
        if ( file.exists() ){
            delay(1);
            break;
        }
    }

    QString outstring = "";
    QFile infile("TEXTFile_OUTPUT.txt");
    if ( infile.open( QIODevice::ReadOnly | QIODevice::Text ) ){
        outstring = infile.readAll();
        ui->textEditOUTPUT->setText(outstring);
    }
    infile.close();
    file.close();

    ui->output->setText("InPut");
    ui->TextArea->setCurrentIndex(1);

    deleteFile();
}

void MainWindow::on_Decryption_clicked()
{

    type = "2"; bool check = false;

    if      ( choice == "8" ){
        key = ui->Key->text();
        if ( xorKeyChecker() == false ){ return; }
        check = true;
    }
    else if ( choice == "6" ){
        key = ui->Key->text();
        if ( polyKeyChecker() == false ){ return; }
        check = true;
    }
    else if ( choice == "9" ){
        key = ui->Key->text();
        if ( railKeyChecker() == false ){ return; }
        check = true;
    }
    else if ( choice == "5" ){
        key = ui->Key->text();
        if ( smKeyChecker() == false ){ return; }
        check = true;
    }

    QFile file("TEXTFile_INPUT.txt");
    if ( file.open(QIODevice::WriteOnly | QIODevice::Text) ){
        QTextStream out( &file );
        if ( check == true ){ out << choice << endl << type << endl << key << endl << ui->textEdit->toPlainText(); }
        else{ out << choice << endl << type << endl << ui->textEdit->toPlainText(); }
    }

    QDesktopServices::openUrl(QUrl("Cipher_Types_Version2" , QUrl::TolerantMode ) );

    while ( true ){
        QFile file("TEXTFile_OUTPUT.txt");
        if ( file.exists() ){
            delay(1);
            break;
        }
    }

    QString outstring = "";
    QFile infile("TEXTFile_OUTPUT.txt");
    if ( infile.open( QIODevice::ReadOnly | QIODevice::Text ) ){
        outstring = infile.readAll();
        ui->textEditOUTPUT->setText(outstring);
    }
    infile.close();
    file.close();

    ui->output->setText("InPut");
    ui->TextArea->setCurrentIndex(1);

    deleteFile();

}

void MainWindow::on_saveas_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(
                this , tr("Save As") , "c://" , "Text File (*.txt)" );
    QFile file( fileName );
    if ( file.open(QIODevice::WriteOnly | QIODevice::Text) ){
        QTextStream out( &file );
        out << ui->textEditOUTPUT->toPlainText();
        file.close();
        return;
    }
}

void MainWindow::on_output_clicked()
{
    if      ( ui->TextArea->currentIndex() == 0 ){
        ui->output->setText("InPut");
        ui->TextArea->setCurrentIndex(1);
    }
    else if ( ui->TextArea->currentIndex() == 1 ){
        ui->output->setText("OutPut");
        ui->TextArea->setCurrentIndex(0);
    }
}

void MainWindow::SaveTemp(){

    if      ( choice == "8" ){
        arr[ 0 ][ 0 ] = ui->textEdit->toPlainText();
        arr[ 1 ][ 0 ] = ui->textEditOUTPUT->toPlainText();
    }
    else if ( choice == "7" ){
        arr[ 0 ][ 1 ] = ui->textEdit->toPlainText();
        arr[ 1 ][ 1 ] = ui->textEditOUTPUT->toPlainText();
    }
    else if ( choice == "3" ){
        arr[ 0 ][ 2 ] = ui->textEdit->toPlainText();
        arr[ 1 ][ 2 ] = ui->textEditOUTPUT->toPlainText();
    }
    else if ( choice == "1" ){
        arr[ 0 ][ 3 ] = ui->textEdit->toPlainText();
        arr[ 1 ][ 3 ] = ui->textEditOUTPUT->toPlainText();
    }
    else if ( choice == "2" ){
        arr[ 0 ][ 4 ] = ui->textEdit->toPlainText();
        arr[ 1 ][ 4 ] = ui->textEditOUTPUT->toPlainText();
    }
    else if ( choice == "6" ){
        arr[ 0 ][ 5 ] = ui->textEdit->toPlainText();
        arr[ 1 ][ 5 ] = ui->textEditOUTPUT->toPlainText();
    }
    else if ( choice == "4" ){
        arr[ 0 ][ 6 ] = ui->textEdit->toPlainText();
        arr[ 1 ][ 6 ] = ui->textEditOUTPUT->toPlainText();
    }
    else if ( choice == "9" ){
        arr[ 0 ][ 7 ] = ui->textEdit->toPlainText();
        arr[ 1 ][ 7 ] = ui->textEditOUTPUT->toPlainText();
    }
    else if ( choice == "5" ){
        arr[ 0 ][ 8 ] = ui->textEdit->toPlainText();
        arr[ 1 ][ 8 ] = ui->textEditOUTPUT->toPlainText();
    }

}

void MainWindow::on_one_clicked()
{
    ui->all->setChecked(false);
    ui->New->setDisabled( false );

    if ( ui->one->checkState() == false ){ ui->New->setDisabled(true); }
}

void MainWindow::on_all_clicked()
{
    ui->one->setChecked(false);
    ui->New->setDisabled( false );

    if ( ui->all->checkState() == false ){ ui->New->setDisabled(true); }
}

bool MainWindow::xorKeyChecker(){
    if ( key.length() == 1 ){
        if ( key[0] >= 'a' && key[0] <= 'z' ){ return true; }
        if ( key[0] >= 'A' && key[0] <= 'Z' ){ return true; }
        if ( key[0] >= '0' && key[0] <= '9' ){ return true; }
    }
    QMessageBox::warning(this, "Warning" , "The secret key must be one english letter or one number only" );
    ui->Key->clear();
    return false;
}
bool MainWindow::polyKeyChecker(){
    bool x = false;
    if ( key.length() == 6 ){
        for ( int i = 0; i < 6; i++ ){
            for ( int j = i + 1; j < 6; j++ ){
                if ( key[ i ] == key[ j ] ){ x = true; }
            }
        }
        if ( x == false ){ return true; }
    }
    QMessageBox::warning(this, "Warning" , "The secret key must be 5 distinct numbers" );
    ui->Key->clear();
    return false;
}
bool MainWindow::railKeyChecker(){

    int len = ui->textEdit->toPlainText().length();
    if ( key.toInt() <= len / 2 ){ return true; }
    QString length = QString::number(len);
    QString half = QString::number(len/2);
    QMessageBox::warning(this, "Warning" , "The secret key must be less than or equal the length of text\nThe length of text = " + length + "\nThe Range of the key [ 1 , " + half + " ]" );
    ui->Key->clear();
    return false;

}
bool MainWindow::smKeyChecker(){
    bool x = false;
    if ( key.length() == 5 ){
        for ( int i = 0; i < 5; i++ ){
            for ( int j = i + 1; j < 5; j++ ){
                if ( key[ i ] == key[ j ] ){ x = true; }
            }
        }
        if ( x == false ){ return true; }
    }

    QMessageBox::warning(this, "Warning" , "The secret key must be 5 distinct english letters" );
    ui->Key->clear();
    return false;
}

void MainWindow::delay( double sec )
{
    QTime dieTime= QTime::currentTime().addSecs(sec);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void MainWindow::deleteFile(){
    QFile::remove( "TEXTFile_OUTPUT.txt" );
    QFile::remove( "TEXTFile_INPUT.txt" );
}
