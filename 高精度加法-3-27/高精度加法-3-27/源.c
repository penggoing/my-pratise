#define _CRT_SECURE_NO_WARNINGS 1
#define length 1001
#include <stdio.h>
#include <string.h>	


void nxzfc(char zf[], int num[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		//因为是逆序，zf数组的第一位，就是num数组的最后一位。
		//要注意的是，相应的字符转化为对应的数组要减去‘0’（就是字符0对应的ascll码值）
		num[len - 1 - i] = zf[i] - '0';
		// num[i] = zf[len - 1 - i];逆序的第一个数就是字符数组的最后一个数
	}
}
int main(void)
{
	//先用两个字符串保存要进行加法的两个数，把数以字符串的形式存储到字符数组里
	char zf_num1[length],zf_num2[length];
	gets(zf_num1);
	gets(zf_num2);
	//求出两个数的长度，为后面逆序做好准备
	int num1_len = strlen(zf_num1);
	int num2_len = strlen(zf_num2);
	//把字符串逆序存到整型数组里
	int num1[length] = { 0 };
	int num2[length] = { 0 };
	//靠一个函数来进行逆序
	nxzfc(zf_num1, num1, num1_len);
	nxzfc(zf_num2, num2, num2_len);
	//逆序结束之后就可以从左往右开始进行加法运算了
	//先进行加法，在进行进位处理
	
	int max_length = num1_len > num2_len ? num1_len: num2_len;
	//再来一个数组来保存相加得到的结果
	int he[length] = { 0 };

	for (int i = 0; i < max_length; i++)
	{
		he[i] = num1[i] + num2[i];

	}
	//接下来进行进位
	for (int i = 0; i < max_length; i++)
	{
		if (he[i] >= 10)
		{
			he[i + 1] += he[i] / 10;
			he[i] %= 10;
		}
	}

	//max_length位也有可能不是二位数，所以要检查一下，如果>=10则位数变成了max_length+_1位，否则仍为max_length位
	//逆序输出
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
