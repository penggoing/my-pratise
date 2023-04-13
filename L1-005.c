//审题！！！
//看错题/没看完整，全错

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define len_zh_kao_zhen 16//为什么这里改成16在打印的结果里会多一个方框
#define N_max 1000
//结构体命名规范是全部大写
//结构体类型的声明和函数声明一样，如果在所有函数，包括main函数的前面进行声明，
//那么就可以在所有函数中直接用它来定义变量；
//但如果是在某个函数中进行声明，那么只能在该函数中用它来定义变量。
//与变量有点像这一点


int main()
{
	struct STUDENT
	{
		char zh_kao_zhen[len_zh_kao_zhen];
		int sh_ji;
		int kao_shi;

	}s[N_max];//在声明结构体类型的时候，不可以对里面的变量进行初始化
			//但是在定义的时候可以初始化
	int i = 0,j=0;
	
	int N = 0,M=0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s%d%d", &s[i].zh_kao_zhen, &s[i].sh_ji, &s[i].kao_shi);
	}
	scanf("%d", &M);
	int a[N_max];
	for (i = 0; i < M; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i] == s[j].sh_ji)
			{
				printf("%s %d\n", s[j].zh_kao_zhen, s[j].kao_shi);
			}
		}
	}

	
	return 0;

}

