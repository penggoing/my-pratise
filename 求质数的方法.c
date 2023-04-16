#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	int t2 = 0;
	
	scanf("%d", &n);
	int st[1000] = { 0};//0表示是质数，1表示不是
	int i = 0,j=0;
	//1.暴力枚举
	for (i = 2; i < n; i++)
	{
		int flag = 0;
		for (j = 2; j  <=sqrt(i); j++)
		{
			if (i % j == 0)//一旦为真一次就不是质数
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");



	//2.筛选法
	//已经有一个数表，把其中不是素数的去掉

	for (i = 2; i < sqrt(n); i++)
	{
		if (st[i] == 0)//对结果没有影响，但是可以少算几次，增加效率
		{
			for (j = 2; j * i <= n; j++)
			{
				st[i * j] = 1;
			}
		}
		
	}
	printf("筛选法的结果如下\n");
	for (i = 2; i < n; i++)
	{
		if (st[i]==0)
			printf("%d ", i);
	}


	return 0;
}