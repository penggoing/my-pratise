#define _CRT_SECURE_NO_WARNINGS 1
#define length 1001
#include <stdio.h>
#include <string.h>	


void nxzfc(char zf[], int num[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		//��Ϊ������zf����ĵ�һλ������num��������һλ��
		//Ҫע����ǣ���Ӧ���ַ�ת��Ϊ��Ӧ������Ҫ��ȥ��0���������ַ�0��Ӧ��ascll��ֵ��
		num[len - 1 - i] = zf[i] - '0';
		// num[i] = zf[len - 1 - i];����ĵ�һ���������ַ���������һ����
	}
}
int main(void)
{
	//���������ַ�������Ҫ���мӷ������������������ַ�������ʽ�洢���ַ�������
	char zf_num1[length],zf_num2[length];
	gets(zf_num1);
	gets(zf_num2);
	//����������ĳ��ȣ�Ϊ������������׼��
	int num1_len = strlen(zf_num1);
	int num2_len = strlen(zf_num2);
	//���ַ�������浽����������
	int num1[length] = { 0 };
	int num2[length] = { 0 };
	//��һ����������������
	nxzfc(zf_num1, num1, num1_len);
	nxzfc(zf_num2, num2, num2_len);
	//�������֮��Ϳ��Դ������ҿ�ʼ���мӷ�������
	//�Ƚ��мӷ����ڽ��н�λ����
	
	int max_length = num1_len > num2_len ? num1_len: num2_len;
	//����һ��������������ӵõ��Ľ��
	int he[length] = { 0 };

	for (int i = 0; i < max_length; i++)
	{
		he[i] = num1[i] + num2[i];

	}
	//���������н�λ
	for (int i = 0; i < max_length; i++)
	{
		if (he[i] >= 10)
		{
			he[i + 1] += he[i] / 10;
			he[i] %= 10;
		}
	}

	//max_lengthλҲ�п��ܲ��Ƕ�λ��������Ҫ���һ�£����>=10��λ�������max_length+_1λ��������Ϊmax_lengthλ
	//�������
	if (he[max_length] != 0)
	{
		for (int i = max_length; i >= 0; i--)//
		{
			printf("%d", he[i]);
		}
	}
	else
	{
		for (int i = max_length-1; i >= 0; i--)//
		{
			printf("%d", he[i]);
		}
	}
	
	
	return 0;
	

}
