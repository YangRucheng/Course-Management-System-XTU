#pragma once
#include <QWidget>
#include <QDesktopServices>
#include <QUrl>
#include <QApplication>
#include <QMessageBox>
#include <QAction>
#include <qdialog.h>
#include <QDateTime>
#include "ALL.h"
#include "ui_login.h"

namespace Ui
{
    class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_login_clicked();
    void on_exit_clicked();
    void on_read_clicked();
    void on_forget_clicked();

private:
    Ui::Login *ui;
};
