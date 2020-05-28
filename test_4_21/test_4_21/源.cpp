#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int kong = 0;
//	int drink = 0;
//	int k = 0;
//	while (1)
//	{
//		scanf("%d", &kong);
//		if (kong == 0)
//		{
//			break;
//		}
//		else
//		{
//			while (kong != 1)
//			{
//				if (kong == 2 || kong == 3)
//				{
//					drink++;
//					kong = 1;
//					break;
//				}
//				else if (kong > 3)
//				{
//					k = kong / 3;
//					drink += (kong / 3);
//					kong = (kong % 3) + k;
//				}
//			}
//			printf("%d\n", drink);
//			drink = 0;
//		}
//	}
//	return 0;
//}
//不和谐的弯弯学姐
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0, b = 0;
//	int arr[1000];
//	char ch;
//	do{
//
//		scanf("%d", &arr[i]);
//
//		i++;
//
//	} while ((ch = getchar()) != '\n');
//	for (int j = 0; j <= i; j++)
//	{
//		if (arr[j] == 1)
//		{
//			a++;
//		}
//		if (arr[j] == 0)
//		{
//			b++;
//		}
//		if (a == 10 || b == 10)
//		{
//			printf("%d:%d\n", a, b);
//			a = 0;
//			b = 0;
//		}
//	}
//	printf("%d:%d\n", a, b);
//	a = 0;
//	b = 0;
//	for (int j = 0; j <= i; j++)
//	{
//		if (arr[j] == 1)
//		{
//			a++;
//		}
//		if (arr[j] == 0)
//		{
//			b++;
//		}
//		if (a == 15 || b == 15)
//		{
//			printf("%d:%d\n", a, b);
//			a = 0;
//			b = 0;
//		}
//	}
//	printf("%d:%d\n", a, b);
//	a = 0;
//	b = 0;
//	return 0;
//}
//求指定年月天数
//#include<stdio.h>
//int main()
//{
//	int run[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int pin[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int a, b;
//	while (1)
//	{
//		scanf("%d%d", &a, &b);
//		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//		{
//			printf("%d", run[b]);
//		}
//		else
//		{
//			printf("%d", pin[b]);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	printf("**\n
		****\n
		******\n
		****\n
		**\n");
}