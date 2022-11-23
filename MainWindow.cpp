#include "MainWindow.h"

ALL all; //实例化对象

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //===标签页切换到全部课表===
    ui->TabWidgets->setCurrentIndex(3);
    //===读取文件===
    all.readFile();
    //===表格===
    display_student_info(all.head);          //写入table
    display_comboBox_info();                 //写入comboBox
    ui->list->setAlternatingRowColors(true); //设置相邻行颜色交替显示
    ui->list->horizontalHeader()->setStyleSheet("QHeaderView::section{background:#f5f5f5;color: black;}");
    //===检查是否为会员===
    FILE *fpi = fopen("./AppData/VIP.data", "r");
    int temp = 0;
    fscanf(fpi, "%d", &temp);
    bool isVIP = (bool)temp;
    fclose(fpi);
    if (isVIP == true)
    {
        ui->pushButton_3->setStyleSheet("border-image: url(:/image/xtu_red.png);");
        setWindowIcon(QIcon("./AppData/icon/xtu_red.png"));
        ui->VIPbutton->setText("续费会员");
    }
    //===设置UI===
    setUI();
    //===读取权限文件===
    FILE *fp = fopen("./AppData/authority.data", "r");
    fscanf(fp, "%d", &authority);
    fclose(fp);
    //===每隔20s执行自动保存===
    if (authority == adminAuthority)
    {
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(autoSave()));
        timer->start(20000); // 每隔20s
    }
    else if (authority == userAuthority)
    {
        ui->tips_pic->setStyleSheet("border-image: url(:/image/no_logo.png)");
        ui->tips->setText("无权限");
    }
}

MainWindow::~MainWindow()
{
    autoSave();
    delete ui;
}

//==========界面左侧==========
void MainWindow::on_about_clicked() //关于开发者
{
    QDesktopServices::openUrl(QUrl("https://www.yangrucheng.xyz/", QUrl::TolerantMode));
}

void MainWindow::on_add_clicked() //添加课表Tab
{
    if (authority == userAuthority)
    {
        QMessageBox::critical(this, tr("警告"), tr("您没有修改权限!"));
        return;
    }
    ui->TabWidgets->setCurrentIndex(4);
    ui->add->setStyleSheet("background:white;border: 0px solid white;border-radius: 8px;color:black;font:10px;");
    ui->query->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->statistics->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->VIP->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->exportFile->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
}

void MainWindow::on_statistics_clicked() //数据统计Tab
{
    ui->TabWidgets->setCurrentIndex(0);
    on_attributeButton_clicked(); //生成课程属性图表
    ui->statistics->setStyleSheet("background:white;border: 0px solid white;border-radius: 8px;color:black;font:10px;");
    ui->query->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->add->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->VIP->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->exportFile->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
}

void MainWindow::on_VIP_clicked() //增值服务Tab
{
    ui->TabWidgets->setCurrentIndex(2);
    ui->VIP->setStyleSheet("background:white;border: 0px solid white;border-radius: 8px;color:black;font:10px;");
    ui->query->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->add->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->statistics->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->exportFile->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
}

void MainWindow::on_query_clicked() //全部课程Tab
{
    ui->TabWidgets->setCurrentIndex(3);
    ui->query->setStyleSheet("background:white;border: 0px solid white;border-radius: 8px;color:black;font:10px;");
    ui->statistics->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->add->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->VIP->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->exportFile->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
}

void MainWindow::on_exportFile_clicked() //导出文件Tab
{
    ui->TabWidgets->setCurrentIndex(1);
    ui->exportFile->setStyleSheet("background:white;border: 0px solid white;border-radius: 8px;color:black;font:10px;");
    ui->statistics->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->add->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->VIP->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
    ui->query->setStyleSheet("background:rgba(0,0,0,0);border: 1px solid white;border-radius: 8px;color:black;font:10px;");
}

void MainWindow::on_switchAccount_clicked() //切换账号
{
    int ok = QMessageBox::question(NULL, tr("提示"), QString("您要退出当前账号吗?"), QMessageBox::Cancel | QMessageBox::Yes); //对话框确认删除
    if (ok != QMessageBox::Yes)
        return;
    qApp->closeAllWindows();
    QProcess::startDetached(qApp->applicationFilePath(), QStringList()); //重启应用
}

void MainWindow::on_pushButton_3_clicked() //校徽大图预览
{
    QMessageBox MBox;
    MBox.setWindowTitle("图片预览");
    MBox.setIconPixmap(QPixmap("./AppData/xtu.image"));
    MBox.exec();
}

//==========右侧界面==========

/* 全部课程 */
void MainWindow::display_student_info(listNode *p) //将链表数据写入table
{
    ui->list->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->list->clearContents();
    for (int loop = 0; loop < ui->list->rowCount();)
        ui->list->removeRow(loop);
    while (p != NULL)
    {
        int rows = ui->list->rowCount();
        ui->list->insertRow(rows);
        ui->list->setItem(rows, 0, new QTableWidgetItem(p->data.name));
        ui->list->setItem(rows, 1, new QTableWidgetItem(p->data.ID));
        ui->list->setItem(rows, 2, new QTableWidgetItem(p->data.duration));
        ui->list->setItem(rows, 3, new QTableWidgetItem(p->data.specialitie));
        ui->list->setItem(rows, 4, new QTableWidgetItem(p->data.attribute));
        ui->list->setItem(rows, 5, new QTableWidgetItem(p->data.prerequisiteCourses));
        ui->list->setItem(rows, 6, new QTableWidgetItem(p->data.management));
        ui->list->setItem(rows, 7, new QTableWidgetItem(p->data.director));
        p = p->next;
    }
    ui->list->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents); //自适应列宽
    ui->list->setEditTriggers(QAbstractItemView::NoEditTriggers);                      //禁止直接编辑
}

void MainWindow::display_comboBox_info() //写入到comboBox
{
    for (int i = ui->duration->count() - 1; i >= 0; i--)
    {
        ui->duration->removeItem(i);
    }
    ui->duration->addItem("全部学分学时");
    for (int i = ui->attribute->count() - 1; i >= 0; i--)
    {
        ui->attribute->removeItem(i);
    }
    ui->attribute->addItem("全部课程属性");
    for (int i = ui->specialitie->count() - 1; i >= 0; i--)
    {
        ui->specialitie->removeItem(i);
    }
    ui->specialitie->addItem("全部适用专业");
    for (int i = ui->management->count() - 1; i >= 0; i--)
    {
        ui->management->removeItem(i);
    }
    ui->management->addItem("全部管理单位");
    listNode *p = all.head;
    while (p != NULL)
    {
        if (ui->duration->findText(p->data.duration) == -1)
            ui->duration->addItem(p->data.duration);
        if (ui->attribute->findText(p->data.attribute) == -1)
            ui->attribute->addItem(p->data.attribute);
        if (ui->specialitie->findText(p->data.specialitie) == -1)
            ui->specialitie->addItem(p->data.specialitie);
        if (ui->management->findText(p->data.management) == -1)
            ui->management->addItem(p->data.management);
        p = p->next;
    }
}

void MainWindow::on_searchButton_clicked() //搜索
{
    QString str = ui->searchText->text(); //获取输入内容
    if (QString(str).isEmpty())           //输入框为空
    {
        display_student_info(all.head); //展示所有课程
        return;
    }
    std::string temp = str.toStdString(); //转为std::string
    char ch[100];
    strcpy(ch, temp.c_str());                    //转为char*
    bool isAccurate = ui->checkBox->isChecked(); //是否精确搜索
    qDebug() << isAccurate;
    if (isAccurate == true) //精确搜索
    {
        listNode *resultNode = all.search(all.head, ch, accurate_search); //精确搜索
        if (resultNode == NULL)                                           //没有搜到
        {
            QMessageBox::critical(this, tr("没有搜索到内容"), tr("请检查搜索项是否正确"));
            return;
        }
        else //搜到了
        {
            ui->list->setRowCount(1);
            ui->list->setItem(0, 0, new QTableWidgetItem(resultNode->data.name));
            ui->list->setItem(0, 1, new QTableWidgetItem(resultNode->data.ID));
            ui->list->setItem(0, 2, new QTableWidgetItem(resultNode->data.duration));
            ui->list->setItem(0, 3, new QTableWidgetItem(resultNode->data.specialitie));
            ui->list->setItem(0, 4, new QTableWidgetItem(resultNode->data.attribute));
            ui->list->setItem(0, 5, new QTableWidgetItem(resultNode->data.prerequisiteCourses));
            ui->list->setItem(0, 6, new QTableWidgetItem(resultNode->data.management));
            ui->list->setItem(0, 7, new QTableWidgetItem(resultNode->data.director));
        }
    }
    else //模糊搜索
    {
        ui->list->setRowCount(0); //清空表格
        listNode *p = all.head;
        int i;
        for (i = 0; p != NULL; i++)
        {
            listNode *resultNode = all.search(p, ch, vague_search); //模糊搜索
            if (resultNode == NULL && i == 0)                       //一个也没搜到
            {
                QMessageBox::critical(this, tr("没有搜索到内容"), tr("请检查搜索项是否正确"));
                return;
            }
            else if (resultNode == NULL) //搜索完成
                break;
            else //搜到了
            {
                ui->list->setRowCount(ui->list->rowCount() + 1); //加一行
                ui->list->setItem(i, 0, new QTableWidgetItem(resultNode->data.name));
                ui->list->setItem(i, 1, new QTableWidgetItem(resultNode->data.ID));
                ui->list->setItem(i, 2, new QTableWidgetItem(resultNode->data.duration));
                ui->list->setItem(i, 3, new QTableWidgetItem(resultNode->data.specialitie));
                ui->list->setItem(i, 4, new QTableWidgetItem(resultNode->data.attribute));
                ui->list->setItem(i, 5, new QTableWidgetItem(resultNode->data.prerequisiteCourses));
                ui->list->setItem(i, 6, new QTableWidgetItem(resultNode->data.management));
                ui->list->setItem(i, 7, new QTableWidgetItem(resultNode->data.director));
                p = resultNode->next; //继续搜索
            }
        }
        QMessageBox::about(this, tr("提示"), QString("搜索到") + QString::number(i) + QString("门含有“") + str + QString("”的课程!"));
    }
}

void MainWindow::on_searchText_returnPressed() //按下回车时搜索
{
    on_searchButton_clicked();
}

void MainWindow::on_searchText_cursorPositionChanged(int, int arg2) //清除搜索框时恢复展示所有课程
{
    if (arg2 == 0)
        display_student_info(all.head);
}

void MainWindow::QstringToNode(QString from, char To[]) //将Qstring转为char*
{
    from.remove(QRegularExpression("\\s")); //去除空格
    std::string str = from.toStdString();
    strcpy(To, str.c_str());
}

void MainWindow::on_list_cellDoubleClicked(int row, int column) //双击单元格修改内容
{
    if (authority == userAuthority)
    {
        QMessageBox::critical(this, tr("警告"), tr("您没有修改权限!"));
        return;
    }
    QString temp = ui->list->item(row, 1)->text(); //获取对应的课程编号
    bool ok = false;
    QString item = QInputDialog::getText(this, tr("提示"), tr("请输入修改后的内容!"), QLineEdit::Normal, ui->list->item(row, column)->text(), &ok); //对话框获取修改后的内容
    item.remove(QRegularExpression("\\s"));                                                                                                         //去除空格
    if (item == ui->list->item(row, column)->text())
        return;
    if (!ok)
        return;
    if (item.isEmpty())
    {
        QMessageBox::critical(this, tr("警告"), tr("不允许为空!"));
        return;
    }
    std::string str = temp.toStdString();  //课程编码
    std::string str2 = item.toStdString(); //输入后的内容
    char ch[100];
    char ch2[100];
    strcpy(ch, str.c_str());
    strcpy(ch2, str2.c_str());
    for (int i = 0; i < 100; i++)
        if (ch2[i] == ' ')
            ch2[i] = '\0';
    listNode *p = all.search(all.head, ch, accurate_search); //搜索到的结果
    if (column == 0)
    {
        if (all.search(all.head, ch2, accurate_search) != NULL)
        {
            QMessageBox::critical(this, tr("警告"), tr("课程名称不允许重复!"));
            return;
        }
        strcpy(p->data.name, ch2);
        display_student_info(all.head); //写入table
        display_comboBox_info();        //写入comboBox
        QMessageBox::about(this, tr("提示"), tr("成功修改课程名称!"));
    }
    else if (column == 1)
    {
        if (all.search(all.head, ch2, accurate_search) != NULL)
        {
            QMessageBox::critical(this, tr("警告"), tr("课程编号不允许重复!"));
            return;
        }
        strcpy(p->data.ID, ch2);
        display_student_info(all.head); //写入table
        display_comboBox_info();        //写入comboBox
        QMessageBox::about(this, tr("提示"), tr("成功修改课程编码!"));
    }
    else if (column == 2)
    {
        strcpy(p->data.duration, ch2);
        display_student_info(all.head); //写入table
        display_comboBox_info();        //写入comboBox
        QMessageBox::about(this, tr("提示"), tr("成功修改学时学分!"));
    }
    else if (column == 3)
    {
        strcpy(p->data.specialitie, ch2);
        display_student_info(all.head); //写入table
        display_comboBox_info();        //写入comboBox
        QMessageBox::about(this, tr("提示"), tr("成功修改适用专业!"));
    }
    else if (column == 4)
    {
        strcpy(p->data.attribute, ch2);
        display_student_info(all.head); //写入table
        display_comboBox_info();        //写入comboBox
        QMessageBox::about(this, tr("提示"), tr("成功修改课程属性!"));
    }
    else if (column == 5)
    {
        strcpy(p->data.attribute, ch2);
        display_student_info(all.head); //写入table
        display_comboBox_info();        //写入comboBox
        QMessageBox::about(this, tr("提示"), tr("成功修改先修课程!"));
    }
    else if (column == 6)
    {
        strcpy(p->data.management, ch2);
        display_student_info(all.head); //写入table
        display_comboBox_info();        //写入comboBox
        QMessageBox::about(this, tr("提示"), tr("成功修改管理单位!"));
    }
    else if (column == 7)
    {
        strcpy(p->data.director, ch2);
        display_student_info(all.head); //写入table
        display_comboBox_info();        //写入comboBox
        QMessageBox::about(this, tr("提示"), tr("成功修改负责人!"));
    }
    ui->tips_pic->setStyleSheet("border-image: url(:/image/edit_logo.png)");
    ui->tips->setText("未保存");
}

void MainWindow::on_choose_clicked() //筛选数据
{
    char duration[100], attribute[100], specialitie[100], management[100];
    QstringToNode(ui->duration->currentText(), duration);
    QstringToNode(ui->attribute->currentText(), attribute);
    QstringToNode(ui->specialitie->currentText(), specialitie);
    QstringToNode(ui->management->currentText(), management);
    listNode *reHead = all.screenData(duration, attribute, specialitie, management);
    if (reHead != NULL)
    {
        display_student_info(reHead);
        QMessageBox::about(this, tr("提示"), tr("筛选完成!"));
    }
    else
    {
        display_student_info(NULL);
        QMessageBox::information(this, tr("提示"), tr("没有符合条件的课程!"));
    }
}

void MainWindow::on_del_triggered() //右键删除
{
    if (authority == userAuthority)
    {
        QMessageBox::critical(this, tr("警告"), tr("您没有修改权限!"));
        return;
    }
    int Row = ui->list->currentRow();
    if (Row == -1)
    {
        QMessageBox::critical(this, tr("删除失败"), tr("您没有选中任何课程!"));
        return;
    }
    int ok = QMessageBox::question(NULL, tr("警告"), QString("确认删除课程《") + (ui->list->item(Row, 0)->text()) + ("》吗?"), QMessageBox::Cancel | QMessageBox::Ok); //对话框确认删除
    if (ok != QMessageBox::Ok)
        return;
    char ch[100];
    QString s = ui->list->item(Row, 1)->text();
    std::string str = s.toStdString();
    strcpy(ch, str.c_str());
    all.deleteData(ch);
    ui->list->removeRow(Row);
    ui->list->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents); //自适应列宽
    display_comboBox_info();                                                           //写入comboBox
    ui->tips_pic->setStyleSheet("border-image: url(:/image/edit_logo.png)");
    ui->tips->setText("已修改");
}

void MainWindow::on_add_triggered() //右键添加
{
    on_add_clicked();
}

void MainWindow::on_change_triggered() //右键修改
{
    int Row = ui->list->currentRow();
    int Column = ui->list->currentColumn();
    on_list_cellDoubleClicked(Row, Column); //调用双击单元格的槽函数
}

void MainWindow::on_copy_triggered() //右键复制
{
    int Row = ui->list->currentRow();
    int Column = ui->list->currentColumn();
    QClipboard *clip = QApplication::clipboard();
    clip->setText(ui->list->item(Row, Column)->text());
}

void MainWindow::on_list_customContextMenuRequested(const QPoint &) // Qtable右键
{
    menu->exec(QCursor::pos());
}

void MainWindow::autoSave() //自动保存功能
{
    all.writeFile();
    ui->tips_pic->setStyleSheet("border-image: url(:/image/ok_logo.png)");
    ui->tips->setText("已保存");
}

/* 添加课程 */
void MainWindow::on_pushButton_2_clicked() //从文件添加
{
    QString fileName = QFileDialog::getOpenFileName(this, "选择需要导入的文件", "D:", "文本文件(*txt);;XTU课程数据文件(*yrc)");
    if (fileName.isEmpty())
        return;
    std::string str = fileName.toStdString();
    const char *filename = (char *)str.c_str();
    QMessageBox MBox;
    int type = 0;
    MBox.setWindowTitle("选择");
    MBox.setText("您想要添加课程还是覆盖现有课程?\n"
                 "提醒:添加数据时会自动忽略课程名称或编码相同的课程!");
    QPushButton *addBtton = MBox.addButton("添加", QMessageBox::AcceptRole);
    QPushButton *coverButton = MBox.addButton("覆盖", QMessageBox::AcceptRole);
    QPushButton *cancelButton = MBox.addButton("取消", QMessageBox::AcceptRole);
    MBox.exec();
    if (MBox.clickedButton() == (QAbstractButton *)addBtton)
    {
        type = add_importFile;
    }
    else if (MBox.clickedButton() == (QAbstractButton *)coverButton)
    {
        type = cover_importFile;
    }
    else if (MBox.clickedButton() == (QAbstractButton *)cancelButton)
    {
        return;
    }
    if (type != 0)
    {
        if (!all.importFile(filename, type))
        {
            QMessageBox::critical(this, tr("导入失败"), tr("请检查是否存在中文路径或中文文件名!"));
            return;
        }
        display_student_info(all.head);
        on_query_clicked();
        if (all.repeat_importFile != 0)
            QMessageBox::about(this, tr("提示"), QString("添加成功!\n共有") + (QString::number(all.repeat_importFile) + ("条重复的课程被过滤!")));
        else
            QMessageBox::about(this, tr("提示"), QString("添加成功!"));
    }
    ui->tips_pic->setStyleSheet("border-image: url(:/image/edit_logo.png)");
    ui->tips->setText("未保存");
}

void MainWindow::on_pushButton_clicked() //添加数据
{
    listNode *p = new listNode;
    QstringToNode(ui->nameAdd->text(), p->data.name);
    QstringToNode(ui->IDAdd->text(), p->data.ID);
    QstringToNode(ui->durationAdd->text(), p->data.duration);
    QstringToNode(ui->specialitieAdd->text(), p->data.specialitie);
    QstringToNode(ui->attributeAdd->text(), p->data.attribute);
    QstringToNode(ui->prerequisiteCoursesAdd->text(), p->data.prerequisiteCourses);
    QstringToNode(ui->managementAdd->text(), p->data.management);
    QstringToNode(ui->directorAdd->text(), p->data.director);
    if (ui->nameAdd->text().isEmpty() || ui->IDAdd->text().isEmpty() || ui->durationAdd->text().isEmpty() || ui->specialitieAdd->text().isEmpty() ||
        ui->attributeAdd->text().isEmpty() || ui->prerequisiteCoursesAdd->text().isEmpty() || ui->managementAdd->text().isEmpty() || ui->directorAdd->text().isEmpty())
    {
        QMessageBox::critical(this, tr("警告"), tr("不允许为空!"));
        return;
    }
    if (!all.addData(p))
        QMessageBox::critical(this, tr("添加失败"), tr("请检查课程名称和编码是否重复!"));
    else
    {
        display_student_info(all.head);
        display_comboBox_info(); //写入comboBox
        QMessageBox::about(this, tr("提示"), tr("添加成功!"));
    }
    ui->tips_pic->setStyleSheet("border-image: url(:/image/edit_logo.png)");
    ui->tips->setText("未保存");
}

/* 数据统计 */
void MainWindow::on_attributeButton_clicked() //课程属性
{
    //===生成数据链表===
    typedef struct _chartData
    {
        char *attribute;
        int num;
        struct _chartData *next;
    } chartData;

    chartData *pi = NULL, *chartHead = NULL;
    listNode *p = all.head;
    while (p != NULL)
    {
        pi = chartHead;
        bool isSame = false;
        while (pi != NULL)
        {
            if (strcmp(pi->attribute, p->data.attribute) == 0)
            {
                pi->num++;
                isSame = true;
                break;
            }
            pi = pi->next;
        }
        if (isSame == false)
        {
            pi = new chartData;
            pi->next = NULL;
            pi->attribute = p->data.attribute;
            pi->num = 1;
            if (chartHead != NULL)
                pi->next = chartHead;
            chartHead = pi;
        }
        p = p->next;
    }
    //===写入chart图表===
    pi = chartHead;
    QChart *chart = ui->chartWidget->chart(); //获取chart对象
    chart->removeAllSeries();                 //删除序列
    QPieSeries *series = new QPieSeries();    //创建序列
    series->setHoleSize(0.35);                //中间空心大小
    QPieSlice *slice;
    int i = 0;
    while (pi != NULL)
    {
        series->append(pi->attribute, pi->num);
        slice = series->slices().at(i++);
        slice->setLabel(slice->label() + QString::asprintf(":%.0f门", slice->value())); //设置标签信息
        slice->setLabelFont(QFont("黑体", 6));
        slice->setLabelVisible(); //该块标签可见
        pi = pi->next;
    }
    chart->addSeries(series);                     //序列添加到图表
    chart->legend()->setAlignment(Qt::AlignLeft); //图例左侧
    chart->setTheme(QChart::ChartThemeLight);     //主题
    chart->legend()->setFont(QFont("黑体", 6));   //设置图例字体及大小
    ui->chartWidget->setChart(chart);
}

void MainWindow::on_durationButton_clicked() //学时学分
{
    //===生成数据链表===
    typedef struct _chartData
    {
        char *duration;
        int num;
        struct _chartData *next;
    } chartData;

    chartData *pi = NULL, *chartHead = NULL;
    listNode *p = all.head;
    while (p != NULL)
    {
        pi = chartHead;
        bool isSame = false;
        while (pi != NULL)
        {
            if (strcmp(pi->duration, p->data.duration) == 0)
            {
                pi->num++;
                isSame = true;
                break;
            }
            pi = pi->next;
        }
        if (isSame == false)
        {
            pi = new chartData;
            pi->next = NULL;
            pi->duration = p->data.duration;
            pi->num = 1;
            if (chartHead != NULL)
                pi->next = chartHead;
            chartHead = pi;
        }
        p = p->next;
    }
    //===写入chart图表===
    pi = chartHead;
    QChart *chart = ui->chartWidget->chart(); //获取chart对象
    chart->removeAllSeries();                 //删除序列
    QPieSeries *series = new QPieSeries();    //创建序列
    series->setHoleSize(0.35);                //中间空心大小
    QPieSlice *slice;
    int i = 0;
    while (pi != NULL)
    {
        series->append(pi->duration, pi->num);
        slice = series->slices().at(i++);
        slice->setLabel(slice->label() + QString::asprintf(":%.0f门", slice->value())); //设置标签信息
        slice->setLabelFont(QFont("黑体", 6));
        slice->setLabelVisible(); //该块标签可见
        pi = pi->next;
    }
    chart->addSeries(series);                     //序列添加到图表
    chart->legend()->setAlignment(Qt::AlignLeft); //图例左侧
    chart->setTheme(QChart::ChartThemeLight);     //主题
    chart->legend()->setFont(QFont("黑体", 6));   //设置图例字体及大小
    ui->chartWidget->setChart(chart);
}

void MainWindow::on_specialitieButton_clicked() //适用专业
{
    //===生成数据链表===
    typedef struct _chartData
    {
        char *specialitie;
        int num;
        struct _chartData *next;
    } chartData;

    chartData *pi = NULL, *chartHead = NULL;
    listNode *p = all.head;
    while (p != NULL)
    {
        pi = chartHead;
        bool isSame = false;
        while (pi != NULL)
        {
            if (strcmp(pi->specialitie, p->data.specialitie) == 0)
            {
                pi->num++;
                isSame = true;
                break;
            }
            pi = pi->next;
        }
        if (isSame == false)
        {
            pi = new chartData;
            pi->next = NULL;
            pi->specialitie = p->data.specialitie;
            pi->num = 1;
            if (chartHead != NULL)
                pi->next = chartHead;
            chartHead = pi;
        }
        p = p->next;
    }
    //===写入chart图表===
    pi = chartHead;
    QChart *chart = ui->chartWidget->chart(); //获取chart对象
    chart->removeAllSeries();                 //删除序列
    QPieSeries *series = new QPieSeries();    //创建序列
    series->setHoleSize(0.35);                //中间空心大小
    QPieSlice *slice;
    int i = 0;
    while (pi != NULL)
    {
        series->append(pi->specialitie, pi->num);
        slice = series->slices().at(i++);
        slice->setLabel(slice->label() + QString::asprintf(":%.0f门", slice->value())); //设置标签信息
        slice->setLabelFont(QFont("黑体", 6));
        slice->setLabelVisible(); //该块标签可见
        pi = pi->next;
    }
    chart->addSeries(series);                     //序列添加到图表
    chart->legend()->setAlignment(Qt::AlignLeft); //图例左侧
    chart->setTheme(QChart::ChartThemeLight);     //主题
    chart->legend()->setFont(QFont("黑体", 6));   //设置图例字体及大小
    ui->chartWidget->setChart(chart);
}

void MainWindow::on_managementButton_clicked() //管理单位
{
    //===生成数据链表===
    typedef struct _chartData
    {
        char *management;
        int num;
        struct _chartData *next;
    } chartData;

    chartData *pi = NULL, *chartHead = NULL;
    listNode *p = all.head;
    while (p != NULL)
    {
        pi = chartHead;
        bool isSame = false;
        while (pi != NULL)
        {
            if (strcmp(pi->management, p->data.management) == 0)
            {
                pi->num++;
                isSame = true;
                break;
            }
            pi = pi->next;
        }
        if (isSame == false)
        {
            pi = new chartData;
            pi->next = NULL;
            pi->management = p->data.management;
            pi->num = 1;
            if (chartHead != NULL)
                pi->next = chartHead;
            chartHead = pi;
        }
        p = p->next;
    }
    //===写入chart图表===
    pi = chartHead;
    QChart *chart = ui->chartWidget->chart(); //获取chart对象
    chart->removeAllSeries();                 //删除序列
    QPieSeries *series = new QPieSeries();    //创建序列
    series->setHoleSize(0.35);                //中间空心大小
    QPieSlice *slice;
    int i = 0;
    while (pi != NULL)
    {
        series->append(pi->management, pi->num);
        slice = series->slices().at(i++);
        slice->setLabel(slice->label() + QString::asprintf(":%.0f门", slice->value())); //设置标签信息
        slice->setLabelFont(QFont("黑体", 6));
        slice->setLabelVisible(); //该块标签可见
        pi = pi->next;
    }
    chart->addSeries(series);                     //序列添加到图表
    chart->legend()->setAlignment(Qt::AlignLeft); //图例左侧
    chart->setTheme(QChart::ChartThemeLight);     //主题
    chart->legend()->setFont(QFont("黑体", 6));   //设置图例字体及大小
    ui->chartWidget->setChart(chart);
}

/* 导出文件 */
void MainWindow::on_txt_exportFileTab_clicked() //导出到txt文件
{
    QString fileName = QFileDialog::getSaveFileName(this, "将文件保存到", "", "文本文件 (*.txt)");
    if (!fileName.isNull())
    {
        std::string str = fileName.toStdString();
        char ch[100];
        strcpy(ch, str.c_str());
        if (all.exportFile(ch))
            QMessageBox::about(this, tr("提示"), tr("导出成功!"));
        else
            QMessageBox::critical(this, tr("导出失败"), tr("请检查是否存在中文路径或中文文件名!"));
    }
}

void MainWindow::on_jpg_exportFileTab_clicked() //导出可视化图表到图片
{
    //读取VIP文件
    FILE *fp = fopen("./AppData/VIP.data", "r");
    int temp = 0;
    fscanf(fp, "%d", &temp);
    bool isVIP = (bool)temp;
    fclose(fp);
    if (isVIP == false)
    {
        QMessageBox::about(this, tr("提示"), tr("此功能为付费功能!\n请在增值服务中开通!"));
        return;
    }
    //导出
    QString fileName = QFileDialog::getSaveFileName(this, "将文件保存到", "", "图像文件 (*.png)");
    if (!fileName.isNull())
    {
        std::string str = fileName.toStdString();
        QPixmap p = ui->chartWidget->grab();
        QImage image = p.toImage();
        image.save(fileName);
        QMessageBox::about(this, tr("提示"), tr("导出成功!"));
    }
}

/* 增值服务 */
void MainWindow::on_VIPbutton_clicked() //开通和续费会员
{
    //读取会员剩余天数
    FILE *fpi = fopen("./AppData/VIP.data", "r");
    int VIPday = 0;
    fscanf(fpi, "%d", &VIPday);
    bool isVIP = (bool)VIPday;
    fclose(fpi);
    if (isVIP == true)
    {
        int ok = QMessageBox::question(NULL, tr("提示"), QString("您确定要续费会员吗?"), QMessageBox::Cancel | QMessageBox::Ok); //对话框确认
        if (ok != QMessageBox::Ok)
            return;
        VIPday += 30;
        QMessageBox::about(this, tr("提示"), QString("续费成功!\n当前会员还有") + QString::number(VIPday) + QString("天到期!"));
        FILE *fp = fopen("./AppData/VIP.data", "w");
        fprintf(fp, "%d", VIPday);
        fclose(fp);
        return;
    }
    else
    {
        int ok = QMessageBox::question(NULL, tr("提示"), QString("您确定要开通会员吗?"), QMessageBox::Cancel | QMessageBox::Ok); //对话框确认
        if (ok != QMessageBox::Ok)
            return;
        FILE *fp = fopen("./AppData/VIP.data", "w");
        fprintf(fp, "30");
        fclose(fp);
        ui->pushButton_3->setStyleSheet("border-image: url(:/image/xtu_red.png);"); //切换红色logo
        setWindowIcon(QIcon("./AppData/icon/xtu_red.png"));                         //切换红色logo
        ui->VIPbutton->setText("续费会员");
        QMessageBox::about(this, tr("提示"), tr("开通成功!\n当前会员还有30天到期!"));
        fp = fopen("./AppData/date.data", "w");
        QDate date(QDate::currentDate());
        fprintf(fp, "%d %d %d", date.year(), date.month(), date.day());
        fclose(fp);
    }
}

void MainWindow::on_membershipAgreement_clicked() //会员协议
{
    QDesktopServices::openUrl(QUrl("https://sway.office.com/AHZeeXw2On1YUJAZ/", QUrl::TolerantMode));
}

//==========设置UI==========
void MainWindow::setUI()
{
    //===表格设置右键菜单===
    ui->list->setContextMenuPolicy(Qt::CustomContextMenu);
    menu = new QMenu(ui->list);
    QAction *copyAct = new QAction("复制 到剪切板", ui->list);
    QAction *changeAct = new QAction("修改 该课程", ui->list);
    QAction *delAct = new QAction("删除 该课程", ui->list);
    QAction *addAct = new QAction("添加 新课程", ui->list);
    copyAct->setIcon(QIcon(":/image/copy_logo.png"));
    changeAct->setIcon(QIcon(":/image/change_logo.png"));
    delAct->setIcon(QIcon(":/image/del_logo.png"));
    addAct->setIcon(QIcon(":/image/add_logo.png"));
    connect(copyAct, SIGNAL(triggered()), this, SLOT(on_copy_triggered()));
    connect(changeAct, SIGNAL(triggered()), this, SLOT(on_change_triggered()));
    connect(delAct, SIGNAL(triggered()), this, SLOT(on_del_triggered()));
    connect(addAct, SIGNAL(triggered()), this, SLOT(on_add_triggered()));
    menu->addAction(copyAct);
    menu->addSeparator(); //分割线
    menu->addAction(changeAct);
    menu->addAction(delAct);
    menu->addSeparator(); //分割线
    menu->addAction(addAct);
    //===禁用LineEdit右键菜单===
    ui->searchText->setContextMenuPolicy(Qt::NoContextMenu);
    ui->managementAdd->setContextMenuPolicy(Qt::NoContextMenu);
    ui->prerequisiteCoursesAdd->setContextMenuPolicy(Qt::NoContextMenu);
    ui->nameAdd->setContextMenuPolicy(Qt::NoContextMenu);
    ui->IDAdd->setContextMenuPolicy(Qt::NoContextMenu);
    ui->attributeAdd->setContextMenuPolicy(Qt::NoContextMenu);
    ui->specialitieAdd->setContextMenuPolicy(Qt::NoContextMenu);
    ui->durationAdd->setContextMenuPolicy(Qt::NoContextMenu);
    ui->directorAdd->setContextMenuPolicy(Qt::NoContextMenu);
    //===设置图片文字不挡住button===
    ui->label_txt->setAttribute(Qt::WA_TransparentForMouseEvents, true);
    ui->widget_pic->setAttribute(Qt::WA_TransparentForMouseEvents, true);
    ui->label_txt_2->setAttribute(Qt::WA_TransparentForMouseEvents, true);
    ui->widget_pic_2->setAttribute(Qt::WA_TransparentForMouseEvents, true);
    ui->label_23->setAttribute(Qt::WA_TransparentForMouseEvents, true);
}

//==========其他函数==========
/* 延时函数 */
void MainWindow::delay()
{
    Sleep(1000);
}