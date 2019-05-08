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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *Menu;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *HomeButton;
    QPushButton *XORButton;
    QPushButton *MorseCodeButton;
    QPushButton *ROT13Button;
    QPushButton *CaesarButton;
    QPushButton *AtbashButton;
    QPushButton *PolybiusButton;
    QPushButton *BaconianButton;
    QPushButton *RailFenceButton;
    QPushButton *SMButton;
    QStackedWidget *HomePages;
    QWidget *home;
    QGridLayout *gridLayout_5;
    QWidget *HomeHeader;
    QWidget *BK;
    QWidget *MainPage;
    QGridLayout *gridLayout_6;
    QWidget *MainPageHeader;
    QGridLayout *gridLayout_3;
    QPushButton *New;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *one;
    QSpacerItem *horizontalSpacer;
    QLabel *enterkeyLabel;
    QCheckBox *all;
    QLineEdit *Key;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *TextArea;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QWidget *page_2;
    QGridLayout *gridLayout_7;
    QTextEdit *textEditOUTPUT;
    QVBoxLayout *verticalLayout_3;
    QPushButton *openFile;
    QPushButton *Encryption;
    QPushButton *Decryption;
    QPushButton *saveas;
    QPushButton *output;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 419);
        MainWindow->setMinimumSize(QSize(700, 419));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Menu = new QWidget(centralWidget);
        Menu->setObjectName(QStringLiteral("Menu"));
        Menu->setMinimumSize(QSize(135, 401));
        Menu->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(38, 42, 65, 255), stop:1 rgba(69, 78, 111, 255));"));
        gridLayout_4 = new QGridLayout(Menu);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_2 = new QWidget(Menu);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 71));
        widget_2->setMaximumSize(QSize(135, 71));
        widget_2->setStyleSheet(QLatin1String("background:transparent;\n"
"image: url(:/Images/Logo.png);"));

        verticalLayout_2->addWidget(widget_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        HomeButton = new QPushButton(Menu);
        HomeButton->setObjectName(QStringLiteral("HomeButton"));
        HomeButton->setStyleSheet(QLatin1String("QPushButton#HomeButton{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 18pt \"Comic Sans MS\";\n"
"}\n"
"\n"
"QPushButton#HomeButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 18pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(HomeButton);

        XORButton = new QPushButton(Menu);
        XORButton->setObjectName(QStringLiteral("XORButton"));
        XORButton->setMinimumSize(QSize(135, 33));
        XORButton->setStyleSheet(QLatin1String("QPushButton#XORButton{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}\n"
"\n"
"QPushButton#XORButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(XORButton);

        MorseCodeButton = new QPushButton(Menu);
        MorseCodeButton->setObjectName(QStringLiteral("MorseCodeButton"));
        MorseCodeButton->setMinimumSize(QSize(135, 33));
        MorseCodeButton->setStyleSheet(QLatin1String("QPushButton#MorseCodeButton{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"	width:135px;\n"
"}\n"
"\n"
"QPushButton#MorseCodeButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(MorseCodeButton);

        ROT13Button = new QPushButton(Menu);
        ROT13Button->setObjectName(QStringLiteral("ROT13Button"));
        ROT13Button->setMinimumSize(QSize(135, 33));
        ROT13Button->setStyleSheet(QLatin1String("QPushButton#ROT13Button{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}\n"
"\n"
"QPushButton#ROT13Button:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(ROT13Button);

        CaesarButton = new QPushButton(Menu);
        CaesarButton->setObjectName(QStringLiteral("CaesarButton"));
        CaesarButton->setMinimumSize(QSize(0, 33));
        CaesarButton->setStyleSheet(QLatin1String("QPushButton#CaesarButton{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}\n"
"\n"
"QPushButton#CaesarButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(CaesarButton);

        AtbashButton = new QPushButton(Menu);
        AtbashButton->setObjectName(QStringLiteral("AtbashButton"));
        AtbashButton->setMinimumSize(QSize(0, 32));
        AtbashButton->setStyleSheet(QLatin1String("QPushButton#AtbashButton{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}\n"
"\n"
"QPushButton#AtbashButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(AtbashButton);

        PolybiusButton = new QPushButton(Menu);
        PolybiusButton->setObjectName(QStringLiteral("PolybiusButton"));
        PolybiusButton->setMinimumSize(QSize(0, 32));
        PolybiusButton->setStyleSheet(QLatin1String("QPushButton#PolybiusButton{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}\n"
"\n"
"QPushButton#PolybiusButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(PolybiusButton);

        BaconianButton = new QPushButton(Menu);
        BaconianButton->setObjectName(QStringLiteral("BaconianButton"));
        BaconianButton->setMinimumSize(QSize(0, 32));
        BaconianButton->setStyleSheet(QLatin1String("QPushButton#BaconianButton{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}\n"
"\n"
"QPushButton#BaconianButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 10pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(BaconianButton);

        RailFenceButton = new QPushButton(Menu);
        RailFenceButton->setObjectName(QStringLiteral("RailFenceButton"));
        RailFenceButton->setMinimumSize(QSize(0, 32));
        RailFenceButton->setStyleSheet(QLatin1String("QPushButton#RailFenceButton{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 9pt \"Comic Sans MS\";\n"
"\n"
"}\n"
"\n"
"QPushButton#RailFenceButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 9pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(RailFenceButton);

        SMButton = new QPushButton(Menu);
        SMButton->setObjectName(QStringLiteral("SMButton"));
        SMButton->setMinimumSize(QSize(0, 32));
        SMButton->setStyleSheet(QLatin1String("QPushButton#SMButton{\n"
"	\n"
"	background:transparent;\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 8pt \"Comic Sans MS\";\n"
"\n"
"}\n"
"\n"
"QPushButton#SMButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.125 rgba(69, 78, 111, 255), stop:1 rgba(5, 220, 249, 0));\n"
"	border:0px;\n"
"	color:#f5f6fa;\n"
"	font: 75 8pt \"Comic Sans MS\";\n"
"\n"
"}"));

        verticalLayout->addWidget(SMButton);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(Menu, 0, 0, 1, 1);

        HomePages = new QStackedWidget(centralWidget);
        HomePages->setObjectName(QStringLiteral("HomePages"));
        HomePages->setMinimumSize(QSize(10, 324));
        HomePages->setStyleSheet(QStringLiteral("background-color: rgb(245, 246, 250);"));
        home = new QWidget();
        home->setObjectName(QStringLiteral("home"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(home->sizePolicy().hasHeightForWidth());
        home->setSizePolicy(sizePolicy);
        home->setMinimumSize(QSize(541, 401));
        gridLayout_5 = new QGridLayout(home);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        HomeHeader = new QWidget(home);
        HomeHeader->setObjectName(QStringLiteral("HomeHeader"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(HomeHeader->sizePolicy().hasHeightForWidth());
        HomeHeader->setSizePolicy(sizePolicy1);
        HomeHeader->setMinimumSize(QSize(581, 77));
        HomeHeader->setMaximumSize(QSize(16777215, 77));
        HomeHeader->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(9, 191, 243, 255), stop:1 rgba(5, 220, 249, 255));"));

        gridLayout_5->addWidget(HomeHeader, 0, 0, 1, 1, Qt::AlignTop);

        BK = new QWidget(home);
        BK->setObjectName(QStringLiteral("BK"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(BK->sizePolicy().hasHeightForWidth());
        BK->setSizePolicy(sizePolicy2);
        BK->setMinimumSize(QSize(565, 324));
        BK->setLayoutDirection(Qt::LeftToRight);
        BK->setStyleSheet(QLatin1String("image: url(:/Images/BK.png);\n"
"image-position:left;\n"
"padding-left:50px;"));

        gridLayout_5->addWidget(BK, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        HomePages->addWidget(home);
        MainPage = new QWidget();
        MainPage->setObjectName(QStringLiteral("MainPage"));
        MainPage->setMinimumSize(QSize(541, 401));
        MainPage->setStyleSheet(QStringLiteral("background-color: rgb(245, 246, 250);"));
        gridLayout_6 = new QGridLayout(MainPage);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        MainPageHeader = new QWidget(MainPage);
        MainPageHeader->setObjectName(QStringLiteral("MainPageHeader"));
        MainPageHeader->setMinimumSize(QSize(360, 77));
        MainPageHeader->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(9, 191, 243, 255), stop:1 rgba(5, 220, 249, 255));"));
        gridLayout_3 = new QGridLayout(MainPageHeader);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(10, 10, 10, 10);
        New = new QPushButton(MainPageHeader);
        New->setObjectName(QStringLiteral("New"));
        sizePolicy.setHeightForWidth(New->sizePolicy().hasHeightForWidth());
        New->setSizePolicy(sizePolicy);
        New->setMinimumSize(QSize(150, 40));
        New->setStyleSheet(QLatin1String("QPushButton#New{\n"
"background-color:#f5f6fa;\n"
"font: 18pt \"Leelawadee\";\n"
"color: rgb(69, 78, 111);\n"
"border:0px;\n"
"}\n"
"\n"
"QPushButton#New:hover{\n"
"	\n"
"background-color: rgb(237, 238, 241);\n"
"font: 18pt \"Leelawadee\";\n"
"color: rgb(69, 78, 111);\n"
"border:0px;\n"
"	\n"
"}"));

        gridLayout_3->addWidget(New, 0, 0, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        one = new QCheckBox(MainPageHeader);
        one->setObjectName(QStringLiteral("one"));
        one->setStyleSheet(QLatin1String("background:transparent;\n"
"color:#f5f6fa;\n"
"font: 10pt \"Leelawadee\";"));

        gridLayout_3->addWidget(one, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(193, 54, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 3, 2, 1);

        enterkeyLabel = new QLabel(MainPageHeader);
        enterkeyLabel->setObjectName(QStringLiteral("enterkeyLabel"));
        enterkeyLabel->setMinimumSize(QSize(141, 20));
        enterkeyLabel->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 14pt \"Leelawadee\";\n"
"color:#f5f6fa;\n"
""));
        enterkeyLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(enterkeyLabel, 0, 4, 1, 1);

        all = new QCheckBox(MainPageHeader);
        all->setObjectName(QStringLiteral("all"));
        all->setStyleSheet(QLatin1String("background:transparent;\n"
"color:#f5f6fa;\n"
"font: 10pt \"Leelawadee\";"));

        gridLayout_3->addWidget(all, 1, 2, 1, 1);

        Key = new QLineEdit(MainPageHeader);
        Key->setObjectName(QStringLiteral("Key"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Key->sizePolicy().hasHeightForWidth());
        Key->setSizePolicy(sizePolicy3);
        Key->setMinimumSize(QSize(140, 23));
        Key->setMaximumSize(QSize(16777215, 16777215));
        Key->setBaseSize(QSize(0, 0));
        Key->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 8pt \"Comic Sans MS\";\n"
"color: rgb(69, 78, 111);"));

        gridLayout_3->addWidget(Key, 1, 4, 1, 1);


        gridLayout_6->addWidget(MainPageHeader, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        TextArea = new QStackedWidget(MainPage);
        TextArea->setObjectName(QStringLiteral("TextArea"));
        TextArea->setMinimumSize(QSize(391, 304));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QLatin1String("QTextEdit{\n"
"background:white;\n"
"margin-left:10px;\n"
"margin-top:10px;\n"
"margin-bottom:10px;\n"
"font: 16pt \"Comic Sans MS\";\n"
"color: rgb(69, 78, 111);\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: 0px;\n"
"    background-color:rgb(9, 191, 243);\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    border: 0px;\n"
"    background-color:rgb(9, 191, 243);\n"
"}"));
        textEdit->setInputMethodHints(Qt::ImhMultiLine);
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textEdit->setAutoFormatting(QTextEdit::AutoNone);
        textEdit->setOverwriteMode(false);

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);

        TextArea->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_7 = new QGridLayout(page_2);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        textEditOUTPUT = new QTextEdit(page_2);
        textEditOUTPUT->setObjectName(QStringLiteral("textEditOUTPUT"));
        textEditOUTPUT->setStyleSheet(QLatin1String("QTextEdit{\n"
"background:white;\n"
"margin-left:10px;\n"
"margin-top:10px;\n"
"margin-bottom:10px;\n"
"font: 16pt \"Comic Sans MS\";\n"
"color: rgb(69, 78, 111);\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: 0px;\n"
"    background-color:rgb(9, 191, 243);\n"
"   \n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    border: 0px;\n"
"    background-color:rgb(9, 191, 243);\n"
"}\n"
""));
        textEditOUTPUT->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        gridLayout_7->addWidget(textEditOUTPUT, 0, 0, 1, 1);

        TextArea->addWidget(page_2);

        horizontalLayout->addWidget(TextArea);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        openFile = new QPushButton(MainPage);
        openFile->setObjectName(QStringLiteral("openFile"));
        sizePolicy.setHeightForWidth(openFile->sizePolicy().hasHeightForWidth());
        openFile->setSizePolicy(sizePolicy);
        openFile->setMinimumSize(QSize(145, 53));
        openFile->setStyleSheet(QLatin1String("QPushButton#openFile{\n"
"	\n"
"	background-color: rgb(9, 191, 243);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"	\n"
"}\n"
"\n"
"QPushButton#openFile:hover{\n"
"	\n"
"	background-color: rgb(9, 169, 206);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"}"));

        verticalLayout_3->addWidget(openFile);

        Encryption = new QPushButton(MainPage);
        Encryption->setObjectName(QStringLiteral("Encryption"));
        sizePolicy.setHeightForWidth(Encryption->sizePolicy().hasHeightForWidth());
        Encryption->setSizePolicy(sizePolicy);
        Encryption->setMinimumSize(QSize(145, 53));
        Encryption->setStyleSheet(QLatin1String("QPushButton#Encryption{\n"
"	\n"
"	background-color: rgb(9, 191, 243);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"	\n"
"}\n"
"\n"
"QPushButton#Encryption:hover{\n"
"	\n"
"	background-color: rgb(9, 169, 206);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"}"));

        verticalLayout_3->addWidget(Encryption);

        Decryption = new QPushButton(MainPage);
        Decryption->setObjectName(QStringLiteral("Decryption"));
        sizePolicy.setHeightForWidth(Decryption->sizePolicy().hasHeightForWidth());
        Decryption->setSizePolicy(sizePolicy);
        Decryption->setMinimumSize(QSize(145, 53));
        Decryption->setStyleSheet(QLatin1String("QPushButton#Decryption{\n"
"	\n"
"	background-color: rgb(9, 191, 243);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"	\n"
"}\n"
"\n"
"QPushButton#Decryption:hover{\n"
"	\n"
"	background-color: rgb(9, 169, 206);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"}"));

        verticalLayout_3->addWidget(Decryption);

        saveas = new QPushButton(MainPage);
        saveas->setObjectName(QStringLiteral("saveas"));
        sizePolicy.setHeightForWidth(saveas->sizePolicy().hasHeightForWidth());
        saveas->setSizePolicy(sizePolicy);
        saveas->setMinimumSize(QSize(145, 53));
        saveas->setStyleSheet(QLatin1String("QPushButton#saveas{\n"
"	\n"
"	background-color: rgb(9, 191, 243);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"	\n"
"}\n"
"\n"
"QPushButton#saveas:hover{\n"
"	\n"
"	background-color: rgb(9, 169, 206);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"}"));

        verticalLayout_3->addWidget(saveas);

        output = new QPushButton(MainPage);
        output->setObjectName(QStringLiteral("output"));
        sizePolicy.setHeightForWidth(output->sizePolicy().hasHeightForWidth());
        output->setSizePolicy(sizePolicy);
        output->setMinimumSize(QSize(145, 53));
        output->setStyleSheet(QLatin1String("QPushButton#output{\n"
"	\n"
"	background-color: rgb(9, 191, 243);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"	\n"
"}\n"
"\n"
"QPushButton#output:hover{\n"
"	\n"
"	background-color: rgb(9, 169, 206);\n"
"	border:5px;\n"
"	color:#f5f6fa;\n"
"	font: 18pt \"Leelawadee\";\n"
"}"));

        verticalLayout_3->addWidget(output);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout_6->addLayout(horizontalLayout, 1, 0, 1, 1);

        HomePages->addWidget(MainPage);

        gridLayout->addWidget(HomePages, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        HomePages->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Text Cipher", nullptr));
        HomeButton->setText(QApplication::translate("MainWindow", "Home", nullptr));
        XORButton->setText(QApplication::translate("MainWindow", "XOR Cipher", nullptr));
        MorseCodeButton->setText(QApplication::translate("MainWindow", "Morse Code", nullptr));
        ROT13Button->setText(QApplication::translate("MainWindow", "ROT13 Cipher", nullptr));
        CaesarButton->setText(QApplication::translate("MainWindow", "Caesar Cipher", nullptr));
        AtbashButton->setText(QApplication::translate("MainWindow", "Atbash Cipher", nullptr));
        PolybiusButton->setText(QApplication::translate("MainWindow", "Polybius Square", nullptr));
        BaconianButton->setText(QApplication::translate("MainWindow", "Baconian Cipher", nullptr));
        RailFenceButton->setText(QApplication::translate("MainWindow", "Rail Fence Cipher", nullptr));
        SMButton->setText(QApplication::translate("MainWindow", "Simple Substitution", nullptr));
        New->setText(QApplication::translate("MainWindow", "New", nullptr));
        one->setText(QApplication::translate("MainWindow", "This Encryption", nullptr));
        enterkeyLabel->setText(QApplication::translate("MainWindow", "Enter The Key", nullptr));
        all->setText(QApplication::translate("MainWindow", "All Encryption", nullptr));
        openFile->setText(QApplication::translate("MainWindow", "Open File", nullptr));
        Encryption->setText(QApplication::translate("MainWindow", "Encryption", nullptr));
        Decryption->setText(QApplication::translate("MainWindow", "Decryption", nullptr));
        saveas->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        output->setText(QApplication::translate("MainWindow", "OutPut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
