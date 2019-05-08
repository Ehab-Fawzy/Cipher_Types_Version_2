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
    void on_HomeButton_clicked();

    void on_Group1Button_clicked();

    void on_Group2Button_clicked();

    void on_Group3Button_clicked();

    void on_OutputButton_clicked();

    void on_SaveAsButton_clicked();

    void on_Auther_Button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
