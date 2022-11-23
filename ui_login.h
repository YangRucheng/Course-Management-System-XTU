/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *login_box;
    QPushButton *login;
    QPushButton *exit;
    QLabel *logo;
    QLabel *title;
    QPushButton *forget;
    QPushButton *read;
    QWidget *widget;
    QLineEdit *user;
    QWidget *widget_2;
    QLineEdit *password;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(600, 360);
        Login->setMinimumSize(QSize(600, 360));
        Login->setMaximumSize(QSize(600, 360));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/xtu_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setAutoFillBackground(false);
        Login->setStyleSheet(QString::fromUtf8("#Login\n"
"{\n"
"border-image: url(:/image/login_background.png);\n"
"}"));
        login_box = new QWidget(Login);
        login_box->setObjectName(QString::fromUtf8("login_box"));
        login_box->setGeometry(QRect(395, 70, 180, 210));
        login_box->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255,200);\n"
"border-radius: 15px;"));
        login = new QPushButton(login_box);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(15, 128, 150, 24));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("background:rgba(0, 170, 255,180);\n"
"border-radius: 12px;\n"
"color:white;\n"
"font:12px"));
        login->setAutoDefault(true);
        exit = new QPushButton(login_box);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(15, 160, 150, 24));
        exit->setFont(font);
        exit->setCursor(QCursor(Qt::PointingHandCursor));
        exit->setStyleSheet(QString::fromUtf8("background:rgba(0, 170, 255,180);\n"
"border-radius: 12px;\n"
"color:white;\n"
"font:12px"));
        logo = new QLabel(login_box);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(15, 15, 36, 36));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/image/xtu_blue.png);\n"
"background-color: rgba(255, 255, 255,0);"));
        title = new QLabel(login_box);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(58, 24, 105, 22));
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255,0);\n"
"color:black;\n"
"font:12px;"));
        forget = new QPushButton(login_box);
        forget->setObjectName(QString::fromUtf8("forget"));
        forget->setGeometry(QRect(122, 188, 45, 15));
        forget->setFont(font);
        forget->setCursor(QCursor(Qt::PointingHandCursor));
        forget->setStyleSheet(QString::fromUtf8("color:grey;\n"
"font:7px;\n"
"background:rgba(255, 255, 255,0);"));
        read = new QPushButton(login_box);
        read->setObjectName(QString::fromUtf8("read"));
        read->setGeometry(QRect(15, 188, 101, 16));
        read->setCursor(QCursor(Qt::PointingHandCursor));
        read->setStyleSheet(QString::fromUtf8("color:grey;\n"
"font:7px;\n"
"background:rgba(255, 255, 255,0);"));
        widget = new QWidget(login_box);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(15, 62, 150, 25));
        widget->setStyleSheet(QString::fromUtf8("border-radius: 6px;\n"
"background-color: rgba(247,247,247,180);\n"
"color:rgb(183, 183, 183);\n"
"font:14px"));
        user = new QLineEdit(widget);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(5, 4, 140, 16));
        user->setFont(font);
        user->setStyleSheet(QString::fromUtf8("border-radius: 3px;\n"
"background-color: rgba(255,255,255,0);\n"
"color:rgb(183, 183, 183);\n"
"font:11px"));
        user->setInputMask(QString::fromUtf8(""));
        user->setMaxLength(18);
        widget_2 = new QWidget(login_box);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(15, 95, 150, 25));
        widget_2->setStyleSheet(QString::fromUtf8("border-radius: 6px;\n"
"background-color: rgba(247,247,247,180);\n"
"color:rgb(183, 183, 183);\n"
"font:14px"));
        password = new QLineEdit(widget_2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(5, 4, 140, 16));
        password->setFont(font);
        password->setStyleSheet(QString::fromUtf8("border-radius: 3px;\n"
"background-color: rgba(255,255,255,0);\n"
"color:rgb(183, 183, 183);\n"
"font:11px"));
        password->setMaxLength(18);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "XTU \350\257\276\347\250\213\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        login->setText(QCoreApplication::translate("Login", "\347\231\273\351\231\206", nullptr));
        exit->setText(QCoreApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
        logo->setText(QString());
        title->setText(QCoreApplication::translate("Login", "XTU \350\257\276\347\250\213\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        forget->setText(QCoreApplication::translate("Login", "\345\277\230\350\256\260\345\257\206\347\240\201?", nullptr));
        read->setText(QCoreApplication::translate("Login", "\347\231\273\351\231\206\345\215\263\344\273\243\350\241\250\346\202\250\345\220\214\346\204\217\343\200\212\344\275\277\347\224\250\346\235\241\346\254\276\343\200\213", nullptr));
        user->setText(QString());
        user->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
