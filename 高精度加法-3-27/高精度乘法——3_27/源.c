#define _CRT_SECURE_NO_WARNINGS 1
#define length 1000+1
#include <stdio.h>
#include <string.h>
void nxzfc(char zf[], int len, int num[])
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		num[i] = zf[len - 1 - i]-'0';//�ǵü���0��������
	}
}
int main()
{
	//���������ַ�����������
	char zf_num1[length], zf_num2[length];

	gets(zf_num1);
	gets(zf_num2);

	//�����������֮�����
	int num1[length] = { 0 };
	int num2[length] = { 0 };


	//�˷����ܳ�ʼ��λ0��Ҫ��Ȼ����0����Ͷ�Ϊһ��
	for (int i = 0; i < 50; i++)
	{
		num1[i] = 1;
	}
	for (int i = 0; i < 50; i++)
	{
		num2[i] = 1;
	}

	//���ַ��ĳ���//����0֮ǰ�ĳ���
	int num1_length = strlen(zf_num1);
	int num2_length = strlen(zf_num2);

	//����������
	nxzfc(zf_num1, num1_length, num1);
	nxzfc(zf_num2, num2_length, num2);

	//�ö�ά������������һ����ɳ�����
	int he[50][50] = {0};

	////�ȳɣ�����Ҫȷ��Ҫ�˼��Σ���ѭ���ĸ�����
	//int max_length = num1_length > num2_length ? num1_length : num2_length;

	//�˷����㷨  �г�һ������ ͬ����� �ö�ά���������
	
	for (int i = 0; i < num2_length; i++)
	{
		for (int j = 0; j < num1_length; j++)
		{
			he[i][j]=
		}
	}




	for (int i = 0; i < max_length; i++)
	{
		he[i] = num1[i] * num2[i];
		
	}

	//���н�λ
	for (int i = 0; i < max_length; i++)
	{
		if (he[i] >= 10)
		{
			he[i + 1] += he[i] / 10;
			he[i] %= 10;
		}
	}
	if (he[max_length] != 0)
	{
		for (int i = max_length; i >=0; i--)
		{
			printf("%d", he[i]);
		}
	}
	else
	{
		for (int i = max_length-1; i >= 0; i--)
		{
			printf("%d", he[i]);
		}
	}


	return 0;
}