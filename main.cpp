#include "MainWindow.h"
#include "login.h"
#include <Windows.h>

int main(int argc, char *argv[])
{
    //===获取屏幕分辨率自适应缩放===
    qreal  cx = GetSystemMetrics(SM_CXSCREEN); //当前屏幕宽度
    qreal scale = cx / 960;
    qputenv("QT_SCALE_FACTOR", QString::number(scale).toLatin1());
    //===实例化对象===
    QApplication a(argc, argv);
    //===加载QSS文件===
    QString qss;
    QFile qssFile(":/MainWindow_white.qss");
//    QFile qssFile(":/MainWindow_black.qss");
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen())
    {
        qss = QLatin1String(qssFile.readAll());
        qApp->setStyleSheet(qss);
        qssFile.close();
    }
    //===启动窗口=== 
//    Login l;
//    if (l.exec() == QDialog::Accepted)
//    {
//        MainWindow w;
//        w.show();
//        return a.exec();
//    }
//    else
//        return 0;

    MainWindow w;
    w.show();
    return a.exec();
}
