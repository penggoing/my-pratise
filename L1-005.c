//���⣡����
//������/û��������ȫ��

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define len_zh_kao_zhen 16//Ϊʲô����ĳ�16�ڴ�ӡ�Ľ������һ������
#define N_max 1000
//�ṹ�������淶��ȫ����д
//�ṹ�����͵������ͺ�������һ������������к���������main������ǰ�����������
//��ô�Ϳ��������к�����ֱ�����������������
//���������ĳ�������н�����������ôֻ���ڸú��������������������
//������е�����һ��


int main()
{
	struct STUDENT
	{
		char zh_kao_zhen[len_zh_kao_zhen];
		int sh_ji;
		int kao_shi;

	}s[N_max];//�������ṹ�����͵�ʱ�򣬲����Զ�����ı������г�ʼ��
			//�����ڶ����ʱ����Գ�ʼ��
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

