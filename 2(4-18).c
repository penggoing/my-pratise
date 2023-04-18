#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap(int *p1,int *p2);
int main()
{
	int a, b;
	scanf("%d,%d", &a, &b);
	int* p1 = &a;
	int* p2 = &b;
	Swap(p1, p2);
	printf("%d,%d", a, b);
	return 0;
}
void Swap(int* p1, int* p2)
{
	int t = *p1;
	*p1 = *p2;
	*p2 = t;

}