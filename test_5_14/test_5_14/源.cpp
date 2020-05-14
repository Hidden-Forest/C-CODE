#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int a, b, c;
//	for (int i = 100; i <= 999; i++)
//	{
//		a = i / 1 % 10;
//		b = i / 10 % 10;
//		c = i / 100 % 10;
//		num = a*a*a + b*b*b + c*c*c;
//		if (num == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (int i = 0; i <= 10; i++)
//	{
//		for (int j = 0; j <= 5; j++)
//		{
//			ret = i + j * 2;
//			if (ret == num)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int num = 0;
	int a, b, c, d, e, f;
	scanf("%d", &num);
	for (int i = 10000; i <= 99999; i++)
	{
		a = i / 1 % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
		d = i / 1000 % 10;
		e = i / 10000 % 10;
		if (a == e && b == d)
		{
			if (num == a + b + c + d + e)
			{
				printf("%d\n", i);
			}
		}
	}
	for (int i = 100000; i <= 999999; i++)
	{
		a = i / 1 % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
		d = i / 1000 % 10;
		e = i / 10000 % 10;
		f = i / 100000 % 10;
		if (a == f && b == e && c==d)
		{
			if (num == a + b + c + d + e + f)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}