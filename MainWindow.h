#pragma once
#include <QMainWindow>
#include <QWidget>
#include <QDesktopServices>
#include <QUrl>
#include <QApplication>
#include <QDialog>
#include <QMessageBox>
#include <QHeaderView>
#include <QAction>
#include <QTableWidget>
#include <QMenu>
#include <QAction>
#include <QFileDialog>
#include <QInputDialog>
#include <QRegularExpression>
#include <QTextEdit>
#include <QTextStream>
#include <QSettings>
#include <QTimer>
#include <QProcess>
#include <QtCharts>
#include <QRegularExpression>
#include "ALL.h"
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_about_clicked();
    void on_add_clicked();
    void on_statistics_clicked();
    void on_VIP_clicked();
    void on_query_clicked();
    void on_searchButton_clicked();
    void on_exportFile_clicked();
    void on_pushButton_clicked();
    void on_list_cellDoubleClicked(int row, int column);
    void on_choose_clicked();
    void on_del_triggered();
    void on_add_triggered();
    void on_list_customContextMenuRequested(const QPoint &pos);
    void on_pushButton_2_clicked();
    void on_txt_exportFileTab_clicked();
    void on_pushButton_3_clicked();
    void autoSave();
    void on_switchAccount_clicked();
    void on_attributeButton_clicked();
    void on_durationButton_clicked();
    void on_specialitieButton_clicked();
    void on_managementButton_clicked();
    void on_jpg_exportFileTab_clicked();
    void on_VIPbutton_clicked();
    void on_membershipAgreement_clicked();
    void on_change_triggered();
    void on_copy_triggered();
    void on_searchText_cursorPositionChanged(int arg1, int arg2);
    void on_searchText_returnPressed();

private:
    Ui::MainWindow *ui;

    void QstringToNode(QString from, char To[]);
    void display_student_info(listNode *p);
    void display_comboBox_info();
    void setUI();
    void delay();

    QMenu *menu;
    int authority; //权限
};
