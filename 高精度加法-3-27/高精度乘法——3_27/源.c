#define _CRT_SECURE_NO_WARNINGS 1
#define length 1000+1
#include <stdio.h>
#include <string.h>
void nxzfc(char zf[], int len, int num[])
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		num[i] = zf[len - 1 - i]-'0';//记得减‘0’！！！
	}
}
int main()
{
	//先来两个字符数组来放数
	char zf_num1[length], zf_num2[length];

	gets(zf_num1);
	gets(zf_num2);

	//新数组放逆序之后的数
	int num1[length] = { 0 };
	int num2[length] = { 0 };


	//乘法不能初始化位0，要不然乘以0结果就都为一了
	for (int i = 0; i < 50; i++)
	{
		num1[i] = 1;
	}
	for (int i = 0; i < 50; i++)
	{
		num2[i] = 1;
	}

	//求字符的长度//遇到0之前的长度
	int num1_length = strlen(zf_num1);
	int num2_length = strlen(zf_num2);

	//把数组逆序
	nxzfc(zf_num1, num1_length, num1);
	nxzfc(zf_num2, num2_length, num2);

	//用二维数组数组来放一组组成出来的
	int he[50][50] = {0};

	////先成，首先要确定要乘几次，及循环的个数、
	//int max_length = num1_length > num2_length ? num1_length : num2_length;

	//乘法的算法  列出一个矩阵 同列相加 用二维数组来存放
	
	for (int i = 0; i < num2_length; i++)
	{
		for (int j = 0; j < num1_length; j++)
		{
			he[i][j]=
		}
	}




	for (int i = 0; i < max_length; i++)
	{
		he[i] = num1[i] * num2[i];
		
	}

	//进行进位
	for (int i = 0; i < max_length; i++)
	{
		if (he[i] >= 10)
		{
			he[i + 1] += he[i] / 10;
			he[i] %= 10;
		}
	}
	if (he[max_length] != 0)
	{
		for (int i = max_length; i >=0; i--)
		{
			printf("%d", he[i]);
		}
	}
	else
	{
		for (int i = max_length-1; i >= 0; i--)
		{
			printf("%d", he[i]);
		}
	}


	return 0;
}