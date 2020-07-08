#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N;
	int sum = 1;
	scanf("%d", &N);
	if (N == 1)
	{
		printf("1");
	}
	if (N!=1)
	{
		for (int i = 1; I<N; i++)
		{
			sum = (sum + 1) * 2;
		}
		printf("%d", sum);
	}
	return 0;
	
}