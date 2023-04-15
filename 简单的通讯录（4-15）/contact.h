#pragma once

//存在的问题
//1.一次只能输入一个
//2.数据都是放到内存里的，一旦程序结束数据就没了---》用文件解决
//3.不能检索，输出指定的联系人
//4.检索联系人只能能检索姓名
//5.是静态版本，容量只有一百
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include <stdlib.h>
#define MAX 100//最大人数
#define MAA_NAME 20//名字长度
#define MAX_SEX 10//性别字符串的长度
#define MAX_ADDR 100//地址长度
#define MAX_TILE 20//电话长度
//类型的声明
//个人的信息
typedef struct PEOPLE
{
	char name[MAA_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TILE];
	char addr[MAX_ADDR];
}PEOPLE;

//通讯录
typedef struct CONTACT
{
	PEOPLE data[100];//存放个人数据
	int count;//统计通讯录的人数
}CONTACT;

//初始化通讯录（0）
void InitCONTACT(CONTACT* pc);

//增加联系人
void AddCONTACT(CONTACT* pc);

//打印通讯录
void ShowCONTACT(const CONTACT*pc);//这里只打印但是不做修改，为了防止数据被修改，用const

//删除指定联系人
void DelCONTACT(const CONTACT*pc);

//按名字查找指定联系人
void SearchByName(CONTACT*pc);

//修改指定联系人
void ModifyCONTACT(CONTACT* pc);

//按照名字排序
void SortByName(CONTACT* pc);