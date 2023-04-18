#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Score(int b[], int* max, int* min,float*avg)
{
	int s = 0;
	int i = 0;
	*max = *min = b[0];
	for (i = 0; i < 5; i++)
	{
		if (*max <= b[i])
			*max = b[i];
		if (*min >= b[i])
			*min = b[i];
		s += b[i];
	}
	*avg = 1.0 * (s) / 5.0;

}
int main()
{
	int a[6] = { 0 };
	int i = 0;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}


	int max = a[0];
	int min = a[4];
	float avg=a[0];

	Score(a, &max, &min, &avg);
	printf("max=%d,min=%d,avg=%.1f", max, min, avg);

	return 0;

}