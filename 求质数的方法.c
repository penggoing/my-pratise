#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	int t2 = 0;
	
	scanf("%d", &n);
	int st[1000] = { 0};//0��ʾ��������1��ʾ����
	int i = 0,j=0;
	//1.����ö��
	for (i = 2; i < n; i++)
	{
		int flag = 0;
		for (j = 2; j  <=sqrt(i); j++)
		{
			if (i % j == 0)//һ��Ϊ��һ�ξͲ�������
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



	//2.ɸѡ��
	//�Ѿ���һ�����������в���������ȥ��

	for (i = 2; i < sqrt(n); i++)
	{
		if (st[i] == 0)//�Խ��û��Ӱ�죬���ǿ������㼸�Σ�����Ч��
		{
			for (j = 2; j * i <= n; j++)
			{
				st[i * j] = 1;
			}
		}
		
	}
	printf("ɸѡ���Ľ������\n");
	for (i = 2; i < n; i++)
	{
		if (st[i]==0)
			printf("%d ", i);
	}


	return 0;
}