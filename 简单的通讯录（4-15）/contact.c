#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//函数实现
// 
//查找人名
int  FindByName(CONTACT *pc, char name[MAA_NAME])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
	
}

//初始化通讯录
void InitCONTACT(CONTACT* pc)
{
	assert(pc);//判断pc是否为空 https://www.cnblogs.com/lvchaoshun/p/7816288.html
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));//memset介绍 http://c.biancheng.net/view/231.html

}

//添加联系人
void AddCONTACT(CONTACT* pc)
{
	assert(pc);
	//判断通讯录是否已满，满了就放不下了
	if (pc->count == MAX)
	{
		printf("!!!通讯录已满，无法添加！！！\n	");
		return;//相当于 什么也不返回，表示退出函数。//和循环里的break类似

	}
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->count].name);//name是函数名，不要取地址
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("添加成功！");
}

//打印信息
void ShowCONTACT(const CONTACT* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n",
		"名字", "年龄", "性别", "电话", "地址");//注意打印名字要用字符串
	for (i = 0; i < pc->count; i++)
	{
		
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n",  pc->data[i].name,
												pc->data[i].age,
												pc->data[i].sex,
												pc->data[i].tele,
												pc->data[i].addr);//太长了，换行好看
	}
}

//删除指定联系人
void DelCONTACT( CONTACT* pc)
{
	char name[MAA_NAME] = { 0 };
	
	assert(pc);
	
	if (pc->count == 0)
	{
		printf("!!!通讯录为空，没有信息可删除\n");
		return;
	}
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//查找判断
	int pos=FindByName(pc,name);
	
	//删除
	int i = 0;
	for (i = pos; i < pc->count-1; i++)//count-1是为了防止最后越界
	{
		pc->data[i] = pc->data[i + 1];//用后面的人的信息把前面的那个人的信息覆盖，达到删除的效果

	}
	pc->count--;//要删除最后一个也没问题，数量减一，直接就把最后一个排出去了
	
}