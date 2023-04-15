#define _CRT_SECURE_NO_WARNINGS 1
//代码不是从第一行还是写，是分模块，需要什么写什么
#include "contact.h"//引用自己的头文件用双引号
void menu()
{
	printf("\t主菜单\n");
	printf("=================================\n");
	printf("1.add\t\t2.del\n");
	printf("3.search\t4.modify\n");//“\t”给八个位。左对齐，不够八个右补空格
	printf("5.show\t\t6.sort\n");
	printf("0.exit\n");
	printf("=================================\n");

}
int main()
{	
	int input = 0;
	CONTACT con;//通讯录---包括包括个人信息的结构体和统计人数的count
	//初始化通讯录
	InitCONTACT(&con);//要改变结构体，所以传指针
	

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddCONTACT(&con);
			break;
		case 2:
			DelCONTACT(&con);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowCONTACT(&con);
			break;
		case 6:
			break;
		case 0:
			break;
		default:
			printf("！！！选择错误！！！\n");
			break;
		}
	} while (input);


}