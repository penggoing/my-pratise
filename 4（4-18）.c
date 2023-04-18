#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void GetOdd(int a[], int* b, int* m);
int main()
{
	int a[10];
	int i = 0;
	for (i = 0; i<9;i++)
	{
		scanf("%d", &a[i]);
	}
	int b[100];
	int m = 0;
	GetOdd(a, b, &m);
	if (m != 0)
	{
		for (i = 0; i < m; i++)
		{
			printf("%d ", b[i]);
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}
void GetOdd(int a[], int* b, int* m)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 9; i++)
	{
		if (a[i] %2 == 1)
		{
			b[j++] = a[i];
			*m=j;
		}
	}

}