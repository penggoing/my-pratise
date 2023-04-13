#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int F = 0, C = 0;
	scanf("%d", &F);
	C = 5 * (F - 32) / 9;
	printf("Celsius=%d",C );


	return 0;
}