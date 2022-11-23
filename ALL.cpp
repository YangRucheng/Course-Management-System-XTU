#include "ALL.h"

bool ALL::readFile()
{
    nodeNum = 1;                                     //节点数量
    FILE *fp = fopen("./AppData/sysData.data", "r"); //打开文件
    if (fp == NULL)                                  //打开失败
        return false;
    char ch;
    int i = 0, mode = 0;
    listNode *p = (listNode *)malloc(sizeof(listNode));
    p->next = NULL;
    while ((ch = fgetc(fp)) != EOF) //逐字符读入
    {
        if (mode == 0 && ch != ' ' && ch != '\n')
            p->data.name[i++] = ch;
        else if (mode == 1 && ch != ' ' && ch != '\n')
            p->data.ID[i++] = ch;
        else if (mode == 2 && ch != ' ' && ch != '\n')
            p->data.duration[i++] = ch;
        else if (mode == 3 && ch != ' ' && ch != '\n')
            p->data.specialitie[i++] = ch;
        else if (mode == 4 && ch != ' ' && ch != '\n')
            p->data.attribute[i++] = ch;
        else if (mode == 5 && ch != ' ' && ch != '\n')
            p->data.prerequisiteCourses[i++] = ch;
        else if (mode == 6 && ch != ' ' && ch != '\n')
            p->data.management[i++] = ch;
        else if (mode == 7 && ch != ' ' && ch != '\n' && ch != '\r' && ch != '\n\r')
            p->data.director[i++] = ch;
        else if (ch == '\n' || ch == '\r' || ch == '\n\r') //遇到换行,读入下一个课程
        {
            if (mode == 7)
                p->data.director[i] = '\0';
            i = mode = 0;
            if (head != NULL) //新节点插入在头节点之前
                p->next = head;
            head = p;
            nodeNum++;
            p = (listNode *)malloc(sizeof(listNode));
            p->next = NULL;
        }
        else if (ch == ' ') //遇到空格,读入下一个内容
        {
            if (mode == 0)
                p->data.name[i] = '\0';
            else if (mode == 1)
                p->data.ID[i] = '\0';
            else if (mode == 2)
                p->data.duration[i] = '\0';
            else if (mode == 3)
                p->data.specialitie[i] = '\0';
            else if (mode == 4)
                p->data.attribute[i] = '\0';
            else if (mode == 5)
                p->data.prerequisiteCourses[i] = '\0';
            else if (mode == 6)
                p->data.management[i] = '\0';
            else if (mode == 7)
                p->data.director[i] = '\0';
            mode++;
            i = 0;
        }
    }
    fclose(fp);
    return true;
}

bool ALL::exportFilimage.pnge(const char *filename)
{
    //导出文本文件前,先将链表倒序
    listNode *fileHead = NULL; //新链表头节点
    listNode *pi = (listNode *)malloc(sizeof(listNode));
    pi->next = NULL;
    listNode *p = head;
    while (p != NULL) //遍历
    {
        pi->data = p->data; //深拷贝
        if (fileHead != NULL)
            pi->next = fileHead;
        fileHead = pi;
        pi = (listNode *)malloc(sizeof(listNode));
        pi->next = NULL;
        p = p->next;
    }
    p = fileHead;
    FILE *fp = fopen(filename, "w"); //打开文件
    if (fp == NULL)
        return false;
    while (p != NULL) //写入文件
    {
        fprintf(fp, "%s", p->data.name);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.ID);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.duration);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.specialitie);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.attribute);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.prerequisiteCourses);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.management);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.director);
        fprintf(fp, "\n");
        p = p->next;
    }
    fclose(fp); //关闭文件
    p = fileHead;
    return true;
}

bool ALL::addData(listNode *addNode)
{
    if (search(head, addNode->data.ID, accurate_search) == NULL &&
        search(head, addNode->data.name, accurate_search) == NULL)
    {
        addNode->next = head;
        head = addNode;
        listNode *p = head;
        nodeNum++;
        return true;
    }
    else
        return false;
}

listNode *ALL::search(listNode *searchHead, char info[], int type)
{
    listNode *p = searchHead;
    if (type == accurate_search) //精确搜索
        while (p != NULL)
        {
            if (strcmp(p->data.ID, info) == 0 ||
                strcmp(p->data.name, info) == 0)
                return p;
            p = p->next;
        }
    else if (type == vague_search) //部分搜索
    {
        int strLen = strlen(info);
        while (p != NULL)
        {
            for (int i = 0; i < arrayLen + 1 - strLen; i++)
                if (strncmp(p->data.name + i, info, strLen) == 0)
                    return p;
            p = p->next;
        }
    }
    return NULL;
}

void ALL::deleteData(char info[])
{
    listNode *p = head;
    if (strcmp(p->data.ID, info) == 0)
    {
        head = head->next;
        return;
    }
    while (p->next != NULL)
    {
        if (strcmp(p->next->data.ID, info) == 0)
            break;
        else
            p = p->next;
    }
    p->next = p->next->next;
    nodeNum--;
}

listNode *ALL::screenData(char duration[], char attribute[], char specialitie[], char management[])
{
    listNode *pi = (listNode *)malloc(sizeof(listNode));
    pi->next = NULL;
    listNode *reHead = NULL;
    listNode *p = head;
    while (p != NULL)
    {
        if ((strcmp(p->data.duration, duration) == 0 || strcmp(duration, "全部学分学时") == 0) &&
            (strcmp(p->data.attribute, attribute) == 0 || strcmp(attribute, "全部课程属性") == 0) &&
            (strcmp(p->data.specialitie, specialitie) == 0 || strcmp(specialitie, "全部适用专业") == 0) &&
            (strcmp(p->data.management, management) == 0 || strcmp(management, "全部管理单位") == 0))
        {
            pi->data = p->data;
            if (reHead != NULL)
                pi->next = reHead;
            reHead = pi;
            pi = (listNode *)malloc(sizeof(listNode));
            pi->next = NULL;
        }
        p = p->next;
    }
    return reHead;
}

bool ALL::importFile(const char *filename, int type)
{
    repeat_importFile = 0;
    if (type != add_importFile && type != cover_importFile)
        return false;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
        return false;
    char ch;
    int i = 0, mode = 0;
    listNode *imHead = NULL; //导入文件的数据头节点
    listNode *p = (listNode *)malloc(sizeof(listNode));
    p->next = NULL;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (mode == 0 && ch != ' ' && ch != '\n')
            p->data.name[i++] = ch;
        else if (mode == 1 && ch != ' ' && ch != '\n')
            p->data.ID[i++] = ch;
        else if (mode == 2 && ch != ' ' && ch != '\n')
            p->data.duration[i++] = ch;
        else if (mode == 3 && ch != ' ' && ch != '\n')
            p->data.specialitie[i++] = ch;
        else if (mode == 4 && ch != ' ' && ch != '\n')
            p->data.attribute[i++] = ch;
        else if (mode == 5 && ch != ' ' && ch != '\n')
            p->data.prerequisiteCourses[i++] = ch;
        else if (mode == 6 && ch != ' ' && ch != '\n')
            p->data.management[i++] = ch;
        else if (mode == 7 && ch != ' ' && ch != '\n')
            p->data.director[i++] = ch;
        else if (ch == '\n')
        {
            if (mode == 7)
                p->data.director[i] = '\0';
            i = mode = 0;
            if ((search(head, p->data.ID, accurate_search) == NULL &&
                 search(head, p->data.name, accurate_search) == NULL &&
                 type == add_importFile) ||
                type == cover_importFile) //添加数据前需要查重
            {
                if (imHead != NULL)
                    p->next = imHead;
                imHead = p;
                nodeNum++;
            }
            else
                repeat_importFile++;
            p = (listNode *)malloc(sizeof(listNode));
            p->next = NULL;
        }
        else if (ch == ' ')
        {
            if (mode == 0)
                p->data.name[i] = '\0';
            else if (mode == 1)
                p->data.ID[i] = '\0';
            else if (mode == 2)
                p->data.duration[i] = '\0';
            else if (mode == 3)
                p->data.specialitie[i] = '\0';
            else if (mode == 4)
                p->data.attribute[i] = '\0';
            else if (mode == 5)
                p->data.prerequisiteCourses[i] = '\0';
            else if (mode == 6)
                p->data.management[i] = '\0';
            else if (mode == 7)
                p->data.director[i] = '\0';
            mode++;
            i = 0;
        }
    }
    fclose(fp);
    if (type == cover_importFile) //覆盖原链表
        head = imHead;
    else if (type == add_importFile) //添加到后面
    {
        listNode *pi = head;
        while (pi->next != NULL)
        {
            pi = pi->next;
        }
        pi->next = imHead;
    }
    return true;
}

bool ALL::writeFile()
{
    //导出文本文件前,先将链表倒序
    listNode *fileHead = NULL; //新建头节点
    listNode *pi = (listNode *)malloc(sizeof(listNode));
    pi->next = NULL;
    listNode *p = head;
    while (p != NULL) //遍历
    {
        pi->data = p->data; //深拷贝
        if (fileHead != NULL)
            pi->next = fileHead;
        fileHead = pi;
        pi = (listNode *)malloc(sizeof(listNode));
        pi->next = NULL;
        p = p->next;
    }
    p = fileHead;
    FILE *fp = fopen("./AppData/sysData.data", "w"); //打开文件
    if (fp == NULL)
        return false;
    while (p != NULL) //写入文件
    {
        fprintf(fp, "%s", p->data.name);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.ID);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.duration);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.specialitie);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.attribute);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.prerequisiteCourses);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.management);
        fprintf(fp, " ");
        fprintf(fp, "%s", p->data.director);
        fprintf(fp, "\n");
        p = p->next;
    }
    fclose(fp); //关闭文件
    return true;
}
