#pragma once
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define cover_importFile 1 //覆盖_从文件导入
#define add_importFile 2   //添加_从文件导入
#define accurate_search 3  //精确搜索
#define vague_search 4     //模糊搜索
#define adminAuthority 8   //管理员权限
#define userAuthority 6    //用户权限
#define arrayLen 100       //字符数组长度

typedef struct _course
{
    char name[arrayLen];                //课程名称
    char ID[arrayLen];                  //课程编码
    char duration[arrayLen];            //学分学时
    char specialitie[arrayLen];         //适用专业
    char attribute[arrayLen];           //课程属性
    char prerequisiteCourses[arrayLen]; //先修课程
    char management[arrayLen];          //管理单位
    char director[arrayLen];            //负责人
} course;

typedef struct _listNode
{
    course data;
    struct _listNode *next;
} listNode;

class ALL
{
public:
    bool readFile();                                                                                //读入文件并创建链表
    bool writeFile();                                                                               //保存文件到设定目录
    bool importFile(const char *filename, int type);                                                //导入文件
    bool exportFile(const char *filename);                                                          //导出文件
    bool addData(listNode *addNode);                                                                //添加一条数据
    listNode *search(listNode *searchHead, char info[], int type);                                  //通过编码或名称搜索课程
    void deleteData(char[]);                                                                        //通过编码删除一条数据
    listNode *screenData(char duration[], char attribute[], char specialitie[], char management[]); //筛选出符合条件的数据并放入新链表

    listNode *head;        //所有数据的头节点
    int nodeNum;           //数据数量
    int repeat_importFile; //导入文件时的重复课程的数量
};
