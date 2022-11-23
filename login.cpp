#include "login.h"

Login::Login(QWidget *parent) : QDialog(parent),
                                ui(new Ui::Login)
{
    ui->setupUi(this);
    //===密码输入框隐藏字符===
    ui->password->setEchoMode(QLineEdit::Password);
    //===读取上次使用时的日期===
    FILE *fp = fopen("./AppData/date.data", "r");
    int month, day, year;
    fscanf(fp, "%d %d %d", &year, &month, &day);
    fclose(fp);
    QDate date(QDate::currentDate());
    fp = fopen("./AppData/date.data", "w");
    fprintf(fp, "%d %d %d", date.year(), date.month(), date.day());
    fclose(fp);
    //===禁用LineEdit右键菜单===
    ui->user->setContextMenuPolicy(Qt::NoContextMenu);
    ui->password->setContextMenuPolicy(Qt::NoContextMenu);
    //===检查是否为会员===
    FILE *fpi = fopen("./AppData/VIP.data", "r");
    int VIPday = 0;
    fscanf(fpi, "%d", &VIPday);
    bool isVIP = (bool)VIPday;
    fclose(fpi);
    if (isVIP == true)
    {
        ui->logo->setStyleSheet("border-image: url(:/image/xtu_red.png);background-color: rgba(255, 255, 255,0);");
        setWindowIcon(QIcon("./AppData/icon/xtu_red.png"));
        if (year != date.year() || month != date.month() || day != date.day())
        {
            //写入剩余天数(减一)
            fpi = fopen("./AppData/VIP.data", "w");
            fprintf(fp, "%d", VIPday - 1);
            fclose(fp);
        }
    }
}

Login::~Login()
{
    delete ui;
}

void Login::on_login_clicked() //登陆
{

    if (ui->user->text() == "xtuAdmin" &&
        ui->password->text() == "123456") // admin权限
    {
        FILE *fp = fopen("./AppData/authority.data", "w");
        fprintf(fp, "%d", adminAuthority);
        fclose(fp);
        accept();
    }
    else if (ui->user->text() == "xtuUser" &&
             ui->password->text() == "123456") // user权限
    {
        FILE *fp = fopen("./AppData/authority.data", "w");
        fprintf(fp, "%d", userAuthority);
        fclose(fp);
        accept();
    }
    else
    {
        QMessageBox::warning(this, tr("警告"), tr("账号或密码错误!"), QMessageBox::Yes);
    }
}

void Login::on_exit_clicked() //退出
{
    close();
}

void Login::on_read_clicked() //用户协议
{
    QDesktopServices::openUrl(QUrl("https://sway.office.com/AHZeeXw2On1YUJAZ/", QUrl::TolerantMode));
}

void Login::on_forget_clicked() //忘记密码
{
    QDesktopServices::openUrl(QUrl("https://yangrucheng.xyz/password/", QUrl::TolerantMode));
}
