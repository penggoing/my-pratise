#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void GetFactor(int x, int* b, int* n);
int main()
{
	int x = 0;
	scanf("%d", &x);
	int b[100];
	int n = 0;
	GetFactor(x, b,  &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}

	return 0;
}
void GetFactor(int x, int* b, int* n)
{
	int i = 0;
	int k = 0;
	for (i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			b[k++] = i;
			*n=k;//不能是*n++，这是地址自增一
		}
	}


}