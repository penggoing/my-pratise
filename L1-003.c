#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[10] = { 0 };
	char c = 0;
	//直接用输入的数作为数组的下标，并且对应的数放到对用的下标里，出现一次自增一次
	while ((c = getchar()) != '\n')
	{
		arr[c - '0']++;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d:%d\n", i, arr[i]);
		}
	}
	return 0;
}