#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int q_h(int sum)
{
	int r = 0;
	while (2 * r * r - 1 <= sum)
	{
		r++;

	}
	r -= 1;
	
	return r;
}
void my_print(int h, char c)
{
	int i = 0, z = 0;
	int di = 1 + 2 * (h - 1);
	for (z = 0; z < h; z++)
	{
		for (i = 0; i <= z - 1; i++)
		{
			printf(" ");

		}
		for (i = 0; i < di - 2 * z; i++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	for (z = 1; z <= h - 1; z++)
	{
		for (i = 0; i < (di - (3 + 2*(z - 1))) / 2; i++)
		{
			printf(" ");
		}
		for (i = 0; i < 3 + 2 * (z - 1); i++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
}
int main()
{
	int sum = 0;
	char c = 0;
	scanf("%d %c", &sum, &c);
	int h = q_h(sum);
	my_print(h, c);
	printf("%d", sum - (2*h*h-1));
	return 0;
}

//{/#inclnude<stdio.h>
//#include<math.h>
//in
//	int i = 0, j = 0, k = 0;
//	int num = 0, hangshu = 0, shengyu = 0;
//	char ch = 0;
//	scanf("%d %c", &num, &ch);
//	int temp = (num + 1) / 2;
//	hangshu = (int)sqrt(temp);//计算上半部分行数
//	for (i = 0; i < hangshu; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2 * (hangshu - i) - 1; k++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	for (i = 1; i < hangshu; i++)
//	{
//		for (j = hangshu - i - 1; j > 0; j--)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2 * (i + 1) - 1; k++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	shengyu = num - (2 * hangshu * hangshu - 1);
//	printf("%d", shengyu);
//	return 0;
//}