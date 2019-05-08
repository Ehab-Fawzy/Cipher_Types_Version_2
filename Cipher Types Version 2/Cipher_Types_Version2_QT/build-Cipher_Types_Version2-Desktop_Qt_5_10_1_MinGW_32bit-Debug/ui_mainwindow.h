/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *BackGround;
    QGridLayout *gridLayout;
    QWidget *Header;
    QVBoxLayout *verticalLayout_2;
    QLabel *PrgramName;
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *HomeButton;
    QPushButton *Group1Button;
    QPushButton *Group2Button;
    QPushButton *Group3Button;
    QPushButton *OutputButton;
    QPushButton *SaveAsButton;
    QPushButton *Auther_Button;
    QStackedWidget *stackedWidget;
    QWidget *Home;
    QWidget *Group1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFormLayout *formLayout;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QWidget *widget_2;
    QWidget *Group2;
    QWidget *Group3;
    QWidget *output;
    QWidget *Auther;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(736, 500);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BackGround = new QWidget(centralWidget);
        BackGround->setObjectName(QStringLiteral("BackGround"));
        BackGround->setStyleSheet(QStringLiteral("background-color: rgb(241, 242, 242);"));
        gridLayout = new QGridLayout(BackGround);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Header = new QWidget(BackGround);
        Header->setObjectName(QStringLiteral("Header"));
        Header->setMinimumSize(QSize(700, 50));
        Header->setMaximumSize(QSize(16777215, 100));
        Header->setLayoutDirection(Qt::LeftToRight);
        Header->setStyleSheet(QStringLiteral("background-color: rgb(46, 17, 45);"));
        verticalLayout_2 = new QVBoxLayout(Header);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        PrgramName = new QLabel(Header);
        PrgramName->setObjectName(QStringLiteral("PrgramName"));
        PrgramName->setStyleSheet(QLatin1String("color: rgb(241, 242, 242);\n"
"font: 75 20pt \"Agency FB\";"));
        PrgramName->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(PrgramName);


        gridLayout->addWidget(Header, 0, 0, 1, 2);

        widget = new QWidget(BackGround);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(170, 0));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(201, 40, 62);"));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 0, 172, 352));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        HomeButton = new QPushButton(widget1);
        HomeButton->setObjectName(QStringLiteral("HomeButton"));
        HomeButton->setMinimumSize(QSize(170, 50));
        HomeButton->setStyleSheet(QLatin1String("QPushButton#HomeButton {\n"
"   		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;			\n"
"		font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton#HomeButton:hover {\n"
"    \n"
"		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 20pt \"Arial\";\n"
"		\n"
"		background-image: url(:/Images/Hover.jpg);\n"
"}\n"
"\n"
"QPushButton#HomeButton:pressed {\n"
"        \n"
"		background-color: \"#EA6380\";\n"
"		color: \"#2E112D\";\n"
"		Border:0px;		\n"
"		font: 75 20pt \"Arial\";\n"
"		\n"
"	background-image: url(:/Images/bk.jpg);\n"
"}\n"
""));

        verticalLayout->addWidget(HomeButton);

        Group1Button = new QPushButton(widget1);
        Group1Button->setObjectName(QStringLiteral("Group1Button"));
        Group1Button->setMinimumSize(QSize(170, 50));
        Group1Button->setStyleSheet(QLatin1String("QPushButton#Group1Button {\n"
"   		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton#Group1Button:hover {\n"
"    \n"
"		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 20pt \"Arial\";\n"
"		background-image: url(:/Images/Hover.jpg);\n"
"}\n"
"\n"
"QPushButton#Group1Button:pressed {\n"
"        \n"
"		background-color: \"#EA6380\";\n"
"		color: \"#2E112D\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"		background-image: url(:/Images/bk.jpg);\n"
"}"));

        verticalLayout->addWidget(Group1Button);

        Group2Button = new QPushButton(widget1);
        Group2Button->setObjectName(QStringLiteral("Group2Button"));
        Group2Button->setMinimumSize(QSize(170, 50));
        Group2Button->setStyleSheet(QLatin1String("QPushButton#Group2Button {\n"
"   		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton#Group2Button:hover {\n"
"    \n"
"		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 20pt \"Arial\";\n"
"		\n"
"		background-image: url(:/Images/Hover.jpg);\n"
"}\n"
"\n"
"QPushButton#Group2Button:pressed {\n"
"        \n"
"		background-color: \"#EA6380\";\n"
"		color: \"#2E112D\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"		\n"
"	background-image: url(:/Images/bk.jpg);\n"
"}"));

        verticalLayout->addWidget(Group2Button);

        Group3Button = new QPushButton(widget1);
        Group3Button->setObjectName(QStringLiteral("Group3Button"));
        Group3Button->setMinimumSize(QSize(170, 50));
        Group3Button->setStyleSheet(QLatin1String("QPushButton#Group3Button {\n"
"   		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton#Group3Button:hover {\n"
"    \n"
"		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 20pt \"Arial\";\n"
"		background-image: url(:/Images/Hover.jpg);\n"
"}\n"
"\n"
"QPushButton#Group3Button:pressed {\n"
"        \n"
"		background-color: \"#EA6380\";\n"
"		color: \"#2E112D\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"		\n"
"	background-image: url(:/Images/bk.jpg);\n"
"}"));

        verticalLayout->addWidget(Group3Button);

        OutputButton = new QPushButton(widget1);
        OutputButton->setObjectName(QStringLiteral("OutputButton"));
        OutputButton->setMinimumSize(QSize(170, 50));
        OutputButton->setStyleSheet(QLatin1String("QPushButton#OutputButton {\n"
"   		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton#OutputButton:hover {\n"
"    \n"
"		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 20pt \"Arial\";\n"
"		background-image: url(:/Images/Hover.jpg);\n"
"}\n"
"\n"
"QPushButton#OutputButton:pressed {\n"
"        \n"
"		background-color: \"#EA6380\";\n"
"		color: \"#2E112D\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"		background-image: url(:/Images/bk.jpg);	\n"
"}"));

        verticalLayout->addWidget(OutputButton);

        SaveAsButton = new QPushButton(widget1);
        SaveAsButton->setObjectName(QStringLiteral("SaveAsButton"));
        SaveAsButton->setMinimumSize(QSize(170, 50));
        SaveAsButton->setStyleSheet(QLatin1String("QPushButton#SaveAsButton {\n"
"   		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton#SaveAsButton:hover {\n"
"    \n"
"		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 20pt \"Arial\";\n"
"		background-image: url(:/Images/Hover.jpg);\n"
"}\n"
"\n"
"QPushButton#SaveAsButton:pressed {\n"
"        \n"
"		background-color: \"#EA6380\";\n"
"		color: \"#2E112D\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"		background-image: url(:/Images/bk.jpg);\n"
"}"));

        verticalLayout->addWidget(SaveAsButton);

        Auther_Button = new QPushButton(widget1);
        Auther_Button->setObjectName(QStringLiteral("Auther_Button"));
        Auther_Button->setMinimumSize(QSize(170, 50));
        Auther_Button->setStyleSheet(QLatin1String("QPushButton#Auther_Button {\n"
"   		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton#Auther_Button:hover {\n"
"    \n"
"		background-color: \"#C9283E\";\n"
"		color: \"#F1F2F2\";\n"
"		Border:0px;		\n"
"		font: 75 20pt \"Arial\";\n"
"		background-image: url(:/Images/Hover.jpg);\n"
"}\n"
"\n"
"QPushButton#Auther_Button:pressed {\n"
"        \n"
"		background-color: \"#EA6380\";\n"
"		color: \"#2E112D\";\n"
"		Border:0px;		\n"
"		font: 75 18pt \"Arial\";\n"
"		background-image: url(:/Images/bk.jpg);\n"
"}"));

        verticalLayout->addWidget(Auther_Button);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(BackGround);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        Home = new QWidget();
        Home->setObjectName(QStringLiteral("Home"));
        Home->setMinimumSize(QSize(0, 40));
        stackedWidget->addWidget(Home);
        Group1 = new QWidget();
        Group1->setObjectName(QStringLiteral("Group1"));
        gridLayout_2 = new QGridLayout(Group1);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(Group1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Group1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Group1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(0);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        comboBox = new QComboBox(Group1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(150, 0));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, comboBox);

        lineEdit = new QLineEdit(Group1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        gridLayout_2->addLayout(formLayout, 1, 0, 1, 1);

        textEdit = new QTextEdit(Group1);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"margin:5px;"));
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Sunken);
        textEdit->setLineWidth(1);

        gridLayout_2->addWidget(textEdit, 2, 0, 1, 1);

        widget_2 = new QWidget(Group1);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 40));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(234, 57, 87);"));

        gridLayout_2->addWidget(widget_2, 0, 0, 1, 1);

        stackedWidget->addWidget(Group1);
        Group2 = new QWidget();
        Group2->setObjectName(QStringLiteral("Group2"));
        stackedWidget->addWidget(Group2);
        Group3 = new QWidget();
        Group3->setObjectName(QStringLiteral("Group3"));
        stackedWidget->addWidget(Group3);
        output = new QWidget();
        output->setObjectName(QStringLiteral("output"));
        stackedWidget->addWidget(output);
        Auther = new QWidget();
        Auther->setObjectName(QStringLiteral("Auther"));
        stackedWidget->addWidget(Auther);

        gridLayout->addWidget(stackedWidget, 1, 1, 1, 1);


        horizontalLayout->addWidget(BackGround);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        PrgramName->setText(QApplication::translate("MainWindow", "Messages Encryption", nullptr));
        HomeButton->setText(QApplication::translate("MainWindow", "Home", nullptr));
        Group1Button->setText(QApplication::translate("MainWindow", "Group I", nullptr));
        Group2Button->setText(QApplication::translate("MainWindow", " Group II", nullptr));
        Group3Button->setText(QApplication::translate("MainWindow", "  Group III", nullptr));
        OutputButton->setText(QApplication::translate("MainWindow", "OutPut", nullptr));
        SaveAsButton->setText(QApplication::translate("MainWindow", "  Save As", nullptr));
        Auther_Button->setText(QApplication::translate("MainWindow", "Auther", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Caeser Cipher", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Atbsh Cipher", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "ROT13 Cipher", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
