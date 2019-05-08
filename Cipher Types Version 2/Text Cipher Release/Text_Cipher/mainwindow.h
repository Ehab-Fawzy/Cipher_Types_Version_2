#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

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
    void on_HomeButton_clicked();

    void on_XORButton_clicked();

    void on_MorseCodeButton_clicked();

    void on_ROT13Button_clicked();

    void on_CaesarButton_clicked();

    void on_AtbashButton_clicked();

    void on_PolybiusButton_clicked();

    void on_BaconianButton_clicked();

    void on_RailFenceButton_clicked();

    void on_SMButton_clicked();

    void on_New_clicked();

    void on_openFile_clicked();

    void on_Encryption_clicked();

    void on_Decryption_clicked();

    void on_saveas_clicked();

    void on_output_clicked();

    void SaveTemp();
    bool xorKeyChecker();
    bool polyKeyChecker();
    bool railKeyChecker();
    bool smKeyChecker();

    void on_one_clicked();

    void on_all_clicked();

    void delay( double sec );

    void deleteFile();

private:
    Ui::MainWindow *ui;
    QString choice = "";
    QString type   = "";
    QString arr[ 2 ][ 9 ] = {};
    QString key = "";
};

#endif // MAINWINDOW_H
