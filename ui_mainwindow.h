/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *sidebar;
    QPushButton *about;
    QLabel *title;
    QWidget *tabBar;
    QPushButton *statistics;
    QPushButton *VIP;
    QPushButton *add;
    QPushButton *query;
    QPushButton *exportFile;
    QPushButton *switchAccount;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QTabWidget *TabWidgets;
    QWidget *statisticsTab;
    QPushButton *attributeButton;
    QPushButton *durationButton;
    QPushButton *specialitieButton;
    QPushButton *managementButton;
    QWidget *widget_13;
    QChartView *chartWidget;
    QWidget *exportFileTab;
    QPushButton *txt_exportFileTab;
    QWidget *widget_pic;
    QLabel *label_txt;
    QPushButton *jpg_exportFileTab;
    QWidget *widget_pic_2;
    QLabel *label_txt_2;
    QLabel *label_12;
    QWidget *VIPTab;
    QLabel *label_16;
    QWidget *widget_14;
    QWidget *widget;
    QLabel *label_13;
    QLabel *label;
    QWidget *widget_12;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_17;
    QWidget *widget_15;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *widget_17;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *widget_VIP;
    QPushButton *VIPbutton;
    QLabel *label_20;
    QPushButton *membershipAgreement;
    QWidget *queryTab;
    QComboBox *duration;
    QComboBox *attribute;
    QComboBox *specialitie;
    QPushButton *choose;
    QComboBox *management;
    QLabel *tips;
    QWidget *tips_pic;
    QWidget *widget_2;
    QLineEdit *searchText;
    QPushButton *searchButton;
    QWidget *widget_3;
    QTableWidget *list;
    QCheckBox *checkBox;
    QLabel *label_23;
    QWidget *addTab;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_4;
    QLineEdit *nameAdd;
    QWidget *widget_5;
    QLineEdit *IDAdd;
    QWidget *widget_6;
    QLineEdit *attributeAdd;
    QWidget *widget_7;
    QLineEdit *specialitieAdd;
    QWidget *widget_11;
    QLineEdit *prerequisiteCoursesAdd;
    QWidget *widget_10;
    QLineEdit *managementAdd;
    QWidget *widget_9;
    QLineEdit *directorAdd;
    QWidget *widget_8;
    QLineEdit *durationAdd;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setMinimumSize(QSize(800, 480));
        MainWindow->setMaximumSize(QSize(800, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/xtu_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        sidebar = new QWidget(centralwidget);
        sidebar->setObjectName(QString::fromUtf8("sidebar"));
        sidebar->setGeometry(QRect(0, 0, 150, 480));
        sidebar->setStyleSheet(QString::fromUtf8("background:rgb(240, 243, 249);"));
        about = new QPushButton(sidebar);
        about->setObjectName(QString::fromUtf8("about"));
        about->setGeometry(QRect(10, 450, 80, 18));
        about->setCursor(QCursor(Qt::PointingHandCursor));
        about->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius: 8px;\n"
"border:white;\n"
"color:grey;\n"
"font:10px;"));
        title = new QLabel(sidebar);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(55, 42, 90, 20));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color:black;\n"
"font:12px;"));
        tabBar = new QWidget(sidebar);
        tabBar->setObjectName(QString::fromUtf8("tabBar"));
        tabBar->setGeometry(QRect(10, 70, 131, 211));
        tabBar->setStyleSheet(QString::fromUtf8("background:rgb(240, 243, 249);\n"
"border:none;"));
        statistics = new QPushButton(tabBar);
        statistics->setObjectName(QString::fromUtf8("statistics"));
        statistics->setGeometry(QRect(0, 70, 130, 24));
        statistics->setFont(font);
        statistics->setCursor(QCursor(Qt::PointingHandCursor));
        statistics->setStyleSheet(QString::fromUtf8("background:rgba(0,0,0,0);\n"
"border-radius: 8px;\n"
"border: 1px solid white;\n"
"color:black;\n"
"font:10px;"));
        VIP = new QPushButton(tabBar);
        VIP->setObjectName(QString::fromUtf8("VIP"));
        VIP->setGeometry(QRect(0, 100, 130, 24));
        VIP->setFont(font);
        VIP->setCursor(QCursor(Qt::PointingHandCursor));
        VIP->setStyleSheet(QString::fromUtf8("background:rgba(0,0,0,0);\n"
"border-radius: 8px;\n"
"border: 1px solid white;\n"
"color:black;\n"
"font:10px;"));
        add = new QPushButton(tabBar);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(0, 40, 130, 24));
        add->setFont(font);
        add->setCursor(QCursor(Qt::PointingHandCursor));
        add->setStyleSheet(QString::fromUtf8("background:rgba(0,0,0,0);\n"
"border: 1px solid white;\n"
"border-radius: 8px;\n"
"color:black;\n"
"font:10px;"));
        query = new QPushButton(tabBar);
        query->setObjectName(QString::fromUtf8("query"));
        query->setGeometry(QRect(0, 10, 130, 24));
        query->setFont(font);
        query->setCursor(QCursor(Qt::PointingHandCursor));
        query->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 8px;\n"
"color:black;\n"
"font:10px;"));
        exportFile = new QPushButton(tabBar);
        exportFile->setObjectName(QString::fromUtf8("exportFile"));
        exportFile->setGeometry(QRect(0, 130, 130, 24));
        exportFile->setFont(font);
        exportFile->setCursor(QCursor(Qt::PointingHandCursor));
        exportFile->setStyleSheet(QString::fromUtf8("background:rgba(0,0,0,0);\n"
"border-radius: 8px;\n"
"border: 1px solid white;\n"
"color:black;\n"
"font:10px;"));
        switchAccount = new QPushButton(tabBar);
        switchAccount->setObjectName(QString::fromUtf8("switchAccount"));
        switchAccount->setGeometry(QRect(0, 160, 130, 24));
        switchAccount->setFont(font);
        switchAccount->setCursor(QCursor(Qt::PointingHandCursor));
        switchAccount->setStyleSheet(QString::fromUtf8("background:rgba(0,0,0,0);\n"
"border-radius: 8px;\n"
"border: 1px solid white;\n"
"color:black;\n"
"font:10px;"));
        pushButton_3 = new QPushButton(sidebar);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 20, 41, 41));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/image/xtu_blue.png);"));
        label_5 = new QLabel(sidebar);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 25, 30, 20));
        label_5->setStyleSheet(QString::fromUtf8("color:black;\n"
"font:12px;"));
        TabWidgets = new QTabWidget(centralwidget);
        TabWidgets->setObjectName(QString::fromUtf8("TabWidgets"));
        TabWidgets->setGeometry(QRect(150, 0, 700, 480));
        TabWidgets->setMinimumSize(QSize(650, 480));
        TabWidgets->setMaximumSize(QSize(700, 481));
        TabWidgets->setStyleSheet(QString::fromUtf8(""));
        TabWidgets->setTabPosition(QTabWidget::East);
        TabWidgets->setTabShape(QTabWidget::Triangular);
        statisticsTab = new QWidget();
        statisticsTab->setObjectName(QString::fromUtf8("statisticsTab"));
        statisticsTab->setMinimumSize(QSize(650, 480));
        statisticsTab->setMaximumSize(QSize(650, 480));
        statisticsTab->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        attributeButton = new QPushButton(statisticsTab);
        attributeButton->setObjectName(QString::fromUtf8("attributeButton"));
        attributeButton->setGeometry(QRect(30, 420, 120, 30));
        attributeButton->setCursor(QCursor(Qt::PointingHandCursor));
        attributeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-radius:15px;\n"
"color:black;\n"
"font:12px;"));
        durationButton = new QPushButton(statisticsTab);
        durationButton->setObjectName(QString::fromUtf8("durationButton"));
        durationButton->setGeometry(QRect(180, 420, 120, 30));
        durationButton->setCursor(QCursor(Qt::PointingHandCursor));
        durationButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-radius:15px;\n"
"color:black;\n"
"font:12px;"));
        specialitieButton = new QPushButton(statisticsTab);
        specialitieButton->setObjectName(QString::fromUtf8("specialitieButton"));
        specialitieButton->setGeometry(QRect(350, 420, 120, 30));
        specialitieButton->setCursor(QCursor(Qt::PointingHandCursor));
        specialitieButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-radius:15px;\n"
"color:black;\n"
"font:12px;"));
        managementButton = new QPushButton(statisticsTab);
        managementButton->setObjectName(QString::fromUtf8("managementButton"));
        managementButton->setGeometry(QRect(500, 420, 120, 30));
        managementButton->setCursor(QCursor(Qt::PointingHandCursor));
        managementButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-radius:15px;\n"
"color:black;\n"
"font:12px;"));
        widget_13 = new QWidget(statisticsTab);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(30, 10, 590, 390));
        widget_13->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-radius:10px;"));
        chartWidget = new QChartView(widget_13);
        chartWidget->setObjectName(QString::fromUtf8("chartWidget"));
        chartWidget->setGeometry(QRect(10, 10, 570, 370));
        chartWidget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius:10px;"));
        TabWidgets->addTab(statisticsTab, QString());
        exportFileTab = new QWidget();
        exportFileTab->setObjectName(QString::fromUtf8("exportFileTab"));
        txt_exportFileTab = new QPushButton(exportFileTab);
        txt_exportFileTab->setObjectName(QString::fromUtf8("txt_exportFileTab"));
        txt_exportFileTab->setGeometry(QRect(60, 50, 150, 240));
        txt_exportFileTab->setCursor(QCursor(Qt::PointingHandCursor));
        txt_exportFileTab->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-radius:12px\n"
""));
        widget_pic = new QWidget(exportFileTab);
        widget_pic->setObjectName(QString::fromUtf8("widget_pic"));
        widget_pic->setGeometry(QRect(110, 85, 50, 50));
        widget_pic->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-image: url(:/image/txt_logo.png);"));
        label_txt = new QLabel(exportFileTab);
        label_txt->setObjectName(QString::fromUtf8("label_txt"));
        label_txt->setGeometry(QRect(60, 150, 150, 30));
        label_txt->setLayoutDirection(Qt::LeftToRight);
        label_txt->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"color: rgb(0, 0, 0);\n"
"font:14px;\n"
""));
        label_txt->setAlignment(Qt::AlignCenter);
        jpg_exportFileTab = new QPushButton(exportFileTab);
        jpg_exportFileTab->setObjectName(QString::fromUtf8("jpg_exportFileTab"));
        jpg_exportFileTab->setGeometry(QRect(260, 50, 150, 240));
        jpg_exportFileTab->setCursor(QCursor(Qt::PointingHandCursor));
        jpg_exportFileTab->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-radius:12px\n"
""));
        widget_pic_2 = new QWidget(exportFileTab);
        widget_pic_2->setObjectName(QString::fromUtf8("widget_pic_2"));
        widget_pic_2->setGeometry(QRect(310, 85, 50, 50));
        widget_pic_2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-image: url(:/image/pic_logo.png);"));
        label_txt_2 = new QLabel(exportFileTab);
        label_txt_2->setObjectName(QString::fromUtf8("label_txt_2"));
        label_txt_2->setGeometry(QRect(260, 150, 150, 30));
        label_txt_2->setLayoutDirection(Qt::LeftToRight);
        label_txt_2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"color: rgb(0, 0, 0);\n"
"font:14px;\n"
""));
        label_txt_2->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(exportFileTab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(60, 370, 331, 71));
        label_12->setStyleSheet(QString::fromUtf8("color:grey;\n"
"font:12px;\n"
""));
        TabWidgets->addTab(exportFileTab, QString());
        VIPTab = new QWidget();
        VIPTab->setObjectName(QString::fromUtf8("VIPTab"));
        VIPTab->setMinimumSize(QSize(650, 480));
        VIPTab->setMaximumSize(QSize(650, 480));
        label_16 = new QLabel(VIPTab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 20, 80, 20));
        label_16->setStyleSheet(QString::fromUtf8("font:20px;\n"
"color:black;"));
        widget_14 = new QWidget(VIPTab);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setGeometry(QRect(10, 60, 621, 301));
        widget_14->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-radius:12px\n"
""));
        widget = new QWidget(widget_14);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 45, 180, 110));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
""));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 50, 160, 40));
        label_13->setStyleSheet(QString::fromUtf8("color:grey;\n"
"font:12px;"));
        label_13->setAlignment(Qt::AlignCenter);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 160, 30));
        label->setStyleSheet(QString::fromUtf8("color:black;\n"
"font:20px;"));
        label->setAlignment(Qt::AlignCenter);
        widget_12 = new QWidget(widget_14);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(220, 45, 180, 110));
        widget_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
""));
        label_14 = new QLabel(widget_12);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 20, 160, 30));
        label_14->setStyleSheet(QString::fromUtf8("color:black;\n"
"font:20px;"));
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(widget_12);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 50, 160, 40));
        label_15->setStyleSheet(QString::fromUtf8("color:grey;\n"
"font:12px;"));
        label_15->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(widget_14);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 10, 50, 20));
        label_17->setStyleSheet(QString::fromUtf8("color:grey;\n"
"font:12px;"));
        widget_15 = new QWidget(widget_14);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setGeometry(QRect(420, 45, 180, 110));
        widget_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
""));
        label_18 = new QLabel(widget_15);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 20, 160, 30));
        label_18->setStyleSheet(QString::fromUtf8("color:black;\n"
"font:20px;"));
        label_18->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(widget_15);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 50, 160, 40));
        label_19->setStyleSheet(QString::fromUtf8("color:grey;\n"
"font:12px;"));
        label_19->setAlignment(Qt::AlignCenter);
        widget_17 = new QWidget(widget_14);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setGeometry(QRect(20, 170, 180, 110));
        widget_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:6px;\n"
""));
        label_21 = new QLabel(widget_17);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 20, 160, 30));
        label_21->setStyleSheet(QString::fromUtf8("color:black;\n"
"font:20px;"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(widget_17);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 50, 160, 40));
        label_22->setStyleSheet(QString::fromUtf8("color:grey;\n"
"font:12px;"));
        label_22->setAlignment(Qt::AlignCenter);
        widget_VIP = new QWidget(VIPTab);
        widget_VIP->setObjectName(QString::fromUtf8("widget_VIP"));
        widget_VIP->setGeometry(QRect(10, 380, 291, 80));
        widget_VIP->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 243, 249);\n"
"border-radius:12px\n"
""));
        VIPbutton = new QPushButton(widget_VIP);
        VIPbutton->setObjectName(QString::fromUtf8("VIPbutton"));
        VIPbutton->setGeometry(QRect(160, 15, 110, 30));
        VIPbutton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(250, 255, 239, 255), stop:0.852273 rgba(255, 241, 244, 255));\n"
"font:14px;\n"
"color:black;\n"
"border-radius:6px;\n"
""));
        label_20 = new QLabel(widget_VIP);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 20, 131, 16));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font:12px;"));
        membershipAgreement = new QPushButton(widget_VIP);
        membershipAgreement->setObjectName(QString::fromUtf8("membershipAgreement"));
        membershipAgreement->setGeometry(QRect(20, 50, 131, 18));
        membershipAgreement->setStyleSheet(QString::fromUtf8("color: grey;\n"
"font:10px;"));
        TabWidgets->addTab(VIPTab, QString());
        queryTab = new QWidget();
        queryTab->setObjectName(QString::fromUtf8("queryTab"));
        queryTab->setEnabled(true);
        queryTab->setMinimumSize(QSize(650, 480));
        queryTab->setMaximumSize(QSize(650, 480));
        queryTab->setStyleSheet(QString::fromUtf8(""));
        duration = new QComboBox(queryTab);
        duration->addItem(QString());
        duration->setObjectName(QString::fromUtf8("duration"));
        duration->setGeometry(QRect(10, 50, 120, 20));
        duration->setCursor(QCursor(Qt::PointingHandCursor));
        duration->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1px solid grey;"));
        attribute = new QComboBox(queryTab);
        attribute->addItem(QString());
        attribute->setObjectName(QString::fromUtf8("attribute"));
        attribute->setGeometry(QRect(140, 50, 140, 20));
        attribute->setCursor(QCursor(Qt::PointingHandCursor));
        attribute->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1px solid grey;"));
        specialitie = new QComboBox(queryTab);
        specialitie->addItem(QString());
        specialitie->setObjectName(QString::fromUtf8("specialitie"));
        specialitie->setGeometry(QRect(290, 50, 140, 20));
        specialitie->setCursor(QCursor(Qt::PointingHandCursor));
        specialitie->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1px solid grey;"));
        choose = new QPushButton(queryTab);
        choose->setObjectName(QString::fromUtf8("choose"));
        choose->setGeometry(QRect(590, 50, 50, 20));
        choose->setCursor(QCursor(Qt::PointingHandCursor));
        choose->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"border:1px solid black;"));
        management = new QComboBox(queryTab);
        management->addItem(QString());
        management->setObjectName(QString::fromUtf8("management"));
        management->setGeometry(QRect(440, 50, 140, 20));
        management->setCursor(QCursor(Qt::PointingHandCursor));
        management->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1px solid grey;"));
        tips = new QLabel(queryTab);
        tips->setObjectName(QString::fromUtf8("tips"));
        tips->setGeometry(QRect(590, 12, 41, 20));
        tips->setStyleSheet(QString::fromUtf8("font:11px;\n"
"background-color: rgb(255, 255, 255,100);\n"
"color:black;"));
        tips_pic = new QWidget(queryTab);
        tips_pic->setObjectName(QString::fromUtf8("tips_pic"));
        tips_pic->setGeometry(QRect(570, 15, 16, 16));
        tips_pic->setStyleSheet(QString::fromUtf8("border-image: url(:/image/ok_logo.png);\n"
"background-color: rgba(255, 255, 255,0);"));
        widget_2 = new QWidget(queryTab);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 300, 24));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius:12px;\n"
"background:rgba(244, 244, 244,255);\n"
"font:11px;"));
        searchText = new QLineEdit(widget_2);
        searchText->setObjectName(QString::fromUtf8("searchText"));
        searchText->setGeometry(QRect(26, 2, 275, 20));
        searchText->setFont(font);
        searchText->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        searchText->setMaxLength(48);
        searchText->setCursorPosition(0);
        searchText->setClearButtonEnabled(true);
        searchButton = new QPushButton(widget_2);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(6, 5, 16, 16));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/search.png);\n"
"background:rgba(244, 244, 244,0)"));
        searchButton->setAutoDefault(false);
        widget_3 = new QWidget(queryTab);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(9, 79, 632, 392));
        widget_3->setStyleSheet(QString::fromUtf8("border: 1px solid grey;"));
        list = new QTableWidget(widget_3);
        if (list->columnCount() < 8)
            list->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        list->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        list->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        list->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        list->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        list->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        list->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        list->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        list->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(1, 1, 630, 390));
        list->setMaximumSize(QSize(630, 16777215));
        list->setStyleSheet(QString::fromUtf8("color:black;\n"
"border: 0px solid grey;"));
        list->setTextElideMode(Qt::ElideRight);
        checkBox = new QCheckBox(queryTab);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(320, 10, 88, 24));
        checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox->setStyleSheet(QString::fromUtf8(""));
        checkBox->setIconSize(QSize(15, 15));
        checkBox->setChecked(true);
        label_23 = new QLabel(queryTab);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(350, 16, 50, 12));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255,0);\n"
"font:12px;"));
        TabWidgets->addTab(queryTab, QString());
        addTab = new QWidget();
        addTab->setObjectName(QString::fromUtf8("addTab"));
        addTab->setMinimumSize(QSize(650, 480));
        addTab->setMaximumSize(QSize(650, 480));
        addTab->setStyleSheet(QString::fromUtf8("color:black;"));
        label_2 = new QLabel(addTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 101, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font:20px;"));
        label_3 = new QLabel(addTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 72, 61, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font:12px;"));
        label_4 = new QLabel(addTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 102, 61, 16));
        label_4->setStyleSheet(QString::fromUtf8("font:12px;\n"
""));
        label_6 = new QLabel(addTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 252, 61, 16));
        label_6->setStyleSheet(QString::fromUtf8("font:12px;"));
        label_7 = new QLabel(addTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 282, 61, 16));
        label_7->setStyleSheet(QString::fromUtf8("font:12px;"));
        label_8 = new QLabel(addTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 132, 61, 16));
        label_8->setStyleSheet(QString::fromUtf8("font:12px;"));
        label_9 = new QLabel(addTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 162, 61, 16));
        label_9->setStyleSheet(QString::fromUtf8("font:12px;"));
        label_10 = new QLabel(addTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 192, 61, 16));
        label_10->setStyleSheet(QString::fromUtf8("font:12px;"));
        label_11 = new QLabel(addTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 222, 61, 16));
        label_11->setStyleSheet(QString::fromUtf8("font:12px;"));
        pushButton = new QPushButton(addTab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 350, 150, 30));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font:14px;"));
        pushButton_2 = new QPushButton(addTab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 350, 150, 30));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("font:14px;"));
        widget_4 = new QWidget(addTab);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(100, 70, 160, 24));
        widget_4->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        nameAdd = new QLineEdit(widget_4);
        nameAdd->setObjectName(QString::fromUtf8("nameAdd"));
        nameAdd->setGeometry(QRect(5, 2, 150, 20));
        nameAdd->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        nameAdd->setMaxLength(48);
        nameAdd->setClearButtonEnabled(true);
        widget_5 = new QWidget(addTab);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(100, 100, 160, 24));
        widget_5->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        IDAdd = new QLineEdit(widget_5);
        IDAdd->setObjectName(QString::fromUtf8("IDAdd"));
        IDAdd->setGeometry(QRect(5, 2, 150, 20));
        IDAdd->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        IDAdd->setMaxLength(48);
        IDAdd->setClearButtonEnabled(true);
        widget_6 = new QWidget(addTab);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(100, 130, 160, 24));
        widget_6->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        attributeAdd = new QLineEdit(widget_6);
        attributeAdd->setObjectName(QString::fromUtf8("attributeAdd"));
        attributeAdd->setGeometry(QRect(5, 2, 150, 20));
        attributeAdd->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        attributeAdd->setMaxLength(48);
        attributeAdd->setClearButtonEnabled(true);
        widget_7 = new QWidget(addTab);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(100, 280, 160, 24));
        widget_7->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        specialitieAdd = new QLineEdit(widget_7);
        specialitieAdd->setObjectName(QString::fromUtf8("specialitieAdd"));
        specialitieAdd->setGeometry(QRect(5, 2, 150, 20));
        specialitieAdd->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        specialitieAdd->setMaxLength(48);
        specialitieAdd->setClearButtonEnabled(true);
        widget_11 = new QWidget(addTab);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(100, 160, 160, 24));
        widget_11->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        prerequisiteCoursesAdd = new QLineEdit(widget_11);
        prerequisiteCoursesAdd->setObjectName(QString::fromUtf8("prerequisiteCoursesAdd"));
        prerequisiteCoursesAdd->setGeometry(QRect(5, 2, 150, 20));
        prerequisiteCoursesAdd->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        prerequisiteCoursesAdd->setMaxLength(48);
        prerequisiteCoursesAdd->setClearButtonEnabled(true);
        widget_10 = new QWidget(addTab);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(100, 190, 160, 24));
        widget_10->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        managementAdd = new QLineEdit(widget_10);
        managementAdd->setObjectName(QString::fromUtf8("managementAdd"));
        managementAdd->setGeometry(QRect(5, 2, 150, 20));
        managementAdd->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        managementAdd->setMaxLength(48);
        managementAdd->setClearButtonEnabled(true);
        widget_9 = new QWidget(addTab);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(100, 220, 160, 24));
        widget_9->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        directorAdd = new QLineEdit(widget_9);
        directorAdd->setObjectName(QString::fromUtf8("directorAdd"));
        directorAdd->setGeometry(QRect(5, 2, 150, 20));
        directorAdd->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        directorAdd->setMaxLength(48);
        directorAdd->setClearButtonEnabled(true);
        widget_8 = new QWidget(addTab);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(100, 250, 160, 24));
        widget_8->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        durationAdd = new QLineEdit(widget_8);
        durationAdd->setObjectName(QString::fromUtf8("durationAdd"));
        durationAdd->setGeometry(QRect(5, 2, 150, 20));
        durationAdd->setStyleSheet(QString::fromUtf8("background: rgb(239, 239, 239);\n"
"border-radius:10px;"));
        durationAdd->setMaxLength(48);
        durationAdd->setClearButtonEnabled(true);
        TabWidgets->addTab(addTab, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        TabWidgets->setCurrentIndex(2);
        searchButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "XTU \350\257\276\347\250\213\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\345\274\200\345\217\221\350\200\205", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        statistics->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\273\237\350\256\241                        ", nullptr));
        VIP->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\200\274\346\234\215\345\212\241                        ", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\257\276\347\250\213                        ", nullptr));
        query->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\350\257\276\347\250\213                        ", nullptr));
        exportFile->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\346\226\207\344\273\266                        ", nullptr));
        switchAccount->setText(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242\350\264\246\345\217\267                        ", nullptr));
        pushButton_3->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "XTU", nullptr));
        attributeButton->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\345\261\236\346\200\247", nullptr));
        durationButton->setText(QCoreApplication::translate("MainWindow", "\345\255\246\346\227\266\345\255\246\345\210\206", nullptr));
        specialitieButton->setText(QCoreApplication::translate("MainWindow", "\351\200\202\347\224\250\344\270\223\344\270\232", nullptr));
        managementButton->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\215\225\344\275\215", nullptr));
        TabWidgets->setTabText(TabWidgets->indexOf(statisticsTab), QString());
        txt_exportFileTab->setText(QString());
        label_txt->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\346\226\207\344\273\266", nullptr));
        jpg_exportFileTab->setText(QString());
        label_txt_2->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\346\226\207\344\273\266", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\346\263\250\346\204\217\344\272\213\351\241\271:\n"
"1. \351\201\277\345\205\215\344\275\277\347\224\250\344\270\255\346\226\207\350\267\257\345\276\204\346\210\226\344\270\255\346\226\207\346\226\207\344\273\266\345\220\215!\n"
"2. \345\257\274\345\207\272\345\233\276\347\211\207\345\211\215\345\205\210\345\234\250\"\346\225\260\346\215\256\347\273\237\350\256\241\"\344\270\255\351\200\211\346\213\251\350\246\201\345\257\274\345\207\272\347\232\204\345\206\205\345\256\271!", nullptr));
        TabWidgets->setTabText(TabWidgets->indexOf(exportFileTab), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\344\274\232\345\221\230\344\270\255\345\277\203", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\346\202\250\345\217\257\344\273\245\350\275\273\346\235\276\345\257\274\345\207\272\n"
"\"\346\225\260\346\215\256\347\273\237\350\256\241\"\344\270\255\347\232\204\345\217\257\350\247\206\345\214\226\345\233\276\350\241\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\345\233\276\347\211\207", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\344\270\223\345\261\236\345\233\276\346\240\207", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\202\250\345\217\257\344\273\245\344\275\277\347\224\250\n"
"\344\273\230\350\264\271\347\224\250\346\210\267\344\270\223\345\261\236\347\232\204\"\351\237\266\345\263\260\347\272\242\"\345\233\276\346\240\207", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\200\274\346\235\203\347\233\212", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\350\207\263\345\260\212\344\275\223\351\252\214", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\346\202\250\345\217\257\344\273\245\344\275\223\351\252\214\345\210\260\n"
"\346\262\241\346\234\211\345\273\266\346\227\266\345\207\275\346\225\260\347\232\204\347\226\276\351\200\237\344\275\223\351\252\214", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\346\225\254\350\257\267\346\234\237\345\276\205...", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\346\210\221\344\273\254\344\273\215\345\234\250\n"
"\344\270\272\347\224\250\346\210\267\345\274\200\345\217\221\346\233\264\345\244\232\345\212\237\350\203\275...", nullptr));
        VIPbutton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\351\200\232\344\274\232\345\221\230", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232\345\215\217\350\256\256\345\271\266\346\224\257\344\273\230 \302\2450.00", nullptr));
        membershipAgreement->setText(QCoreApplication::translate("MainWindow", "\345\274\200\351\200\232\345\211\215\350\257\267\345\205\210\351\230\205\350\257\273\343\200\212\344\274\232\345\221\230\345\215\217\350\256\256\343\200\213", nullptr));
        TabWidgets->setTabText(TabWidgets->indexOf(VIPTab), QString());
        duration->setItemText(0, QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\345\255\246\345\210\206\345\255\246\346\227\266", nullptr));

        attribute->setItemText(0, QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\350\257\276\347\250\213\345\261\236\346\200\247", nullptr));

        specialitie->setItemText(0, QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\351\200\202\347\224\250\344\270\223\344\270\232", nullptr));

        choose->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211", nullptr));
        management->setItemText(0, QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\347\256\241\347\220\206\345\215\225\344\275\215", nullptr));

        tips->setText(QCoreApplication::translate("MainWindow", "\345\267\262\344\277\235\345\255\230", nullptr));
        searchText->setPlaceholderText(QCoreApplication::translate("MainWindow", "\351\200\232\350\277\207\350\257\276\347\250\213\345\220\215\347\247\260\346\210\226\350\257\276\347\250\213\347\274\226\347\240\201\346\220\234\347\264\242", nullptr));
        searchButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = list->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = list->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\347\274\226\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = list->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\255\246\346\227\266\345\255\246\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = list->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\351\200\202\347\224\250\344\270\223\344\270\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = list->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\345\261\236\346\200\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = list->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\345\205\210\344\277\256\350\257\276\347\250\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = list->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\215\225\344\275\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = list->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\350\264\237\350\264\243\344\272\272", nullptr));
        checkBox->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "\347\262\276\347\241\256\346\220\234\347\264\242", nullptr));
        TabWidgets->setTabText(TabWidgets->indexOf(queryTab), QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\257\276\347\250\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\347\274\226\347\240\201", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\210\206\345\255\246\346\227\266", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\200\202\347\224\250\344\270\223\344\270\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\345\261\236\346\200\247", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\205\210\344\277\256\350\257\276\347\250\213", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\215\225\344\275\215", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\350\264\237\350\264\243\344\272\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\226\207\344\273\266\346\267\273\345\212\240", nullptr));
        TabWidgets->setTabText(TabWidgets->indexOf(addTab), QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
