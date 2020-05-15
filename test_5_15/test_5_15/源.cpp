#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char a[205];
//	char b[205];
//	while (scanf("%s %s", &a, &b))
//	{
//
//		int h1, h2, i, j;
//		h1 = strlen(a);
//		h2 = strlen(b);
//		
//		for (i = h1, j = 0; j < h2; i++, j++)
//		{
//			a[i] = b[j];
//		}
//		a[i] = '\0';
//		printf("%s\n", a);
//
//		break;
//
//	}
//	return 0;
//
//}
////#include<stdio.h>
//void max_min(int arr[100], int n,int max , int min)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if ()
//	}
//}
//int main()
//{
//	int n;
//	int arr[100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0;
//	int min = 0;
//	max_min( arr , n , max , min);
//	printf("max=%d\nmin=%d", max, min);
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
////在包含n个字符串的二维字符数组name中，查找值最大的字符串，将其下标存入指针p所指内存单元
//void find(char *name[], int n, int *p);
//int main()
//{
//	char *name[102];
//	char str[6];
//	int i, max = 0;
//	int count = 0;
//	for (i = 0;; i++)
//	{
//		gets(str);
//		count++;
//		
//		if (count!=5)
//		{
//			name[i] = (char*)malloc(sizeof(char)*(strlen(str) + 1));
//			strcpy(name[i], str);
//		}
//		if (count == 5)
//			break;
//		
//	}
//
//	find(name, i, &max);
//	printf("max is : %s\n", name[max]);
//
//	return 0;
//}
//void find(char *name[], int n, int *p)
//{
//
//	int i = 0;
//	*p = 0;
//	for (i = 0; i<n; i++)
//	{
//		if (strcmp(name[i], name[*p])>0)
//			*p = i;
//	}
//
//
//}
//
#include<stdio.h>
int main()
{
	int repeat, n, x;
	int arr[10];
	int count;
	scanf("%d", &repeat);
	for (int i = 0; i < repeat; i++)
	{
		count = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		scanf("%d", &x);
		for (int j = 0; j < n; j++)
		{
			if (arr[j] == x)
			{
				printf("index = %d\n", j);
				count++;
				break;
			}
		}
		if (count == 0)
		{
			printf("Not found\n");
		}
	}
	return 0;
}