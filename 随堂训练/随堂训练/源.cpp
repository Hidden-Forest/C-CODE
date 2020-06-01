#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<time.h>
/*(输出100以内的奇数)*/
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%3d", i);
//		}
//	}
//	return 0;
//}
//int is_prime(int m )
//{
//	int i,k;
//	int a = 0;
//	for (i = 2; i < m; i+=1)
//	{
//		if (m%i == 0)
//		{
//			a++;
//		}
//	}
//	if (a == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void run_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//}
//void zi_jia(int num)
//{
//	num = num + 1;
//}
//
//int main()
//{	
//	int m;
//	scanf("%d", &m);
//	printf("%d",is_prime(m));
//	printf("%d",printf("%d", 43));
//	return 0;
//}
//
#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)
	test1(arr);
	test2(ch);
	return 0;
}