#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[10] = { 0 };
	char c = 0;
	//ֱ�������������Ϊ������±꣬���Ҷ�Ӧ�����ŵ����õ��±������һ������һ��
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