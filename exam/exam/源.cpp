#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int su_shu(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (su_shu(i) == 1)
		{
			count++;
			printf("%d  ", i);
			if (count % 8 == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}