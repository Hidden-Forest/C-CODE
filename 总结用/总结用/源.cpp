#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d", i);
//		i++;
//	} while (i<=10);
//}
//#include <stdio.h>
//
//int main()
//{
//	int n[10]; /* n 是一个包含 10 个整数的数组 */
//	int i, j;
//
//	/* 初始化数组元素 */
//	for (i = 0; i < 10; i++)
//	{
//		n[i] = i + 100; /* 设置元素 i 为 i + 100 */
//	}
//
//	/* 输出数组中每个元素的值 */
//	for (j = 0; j < 10; j++)
//	{
//		printf("Element[%d] = %d\n", j, n[j]);
//	}
//
//	return 0;
//}
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