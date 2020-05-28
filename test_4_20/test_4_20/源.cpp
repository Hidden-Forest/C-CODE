#define _CRT_SECURE_NO_WARNINGS 1
//前100个自然数之和为S=1+2+3+...+100。要求编写和调用递归函数实现该计算。
//#include<stdio.h>
//int main()
//{
//	printf("5050");
//}
//给出两个数a和b，求两个数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int T;
//	int a, b;
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		scanf("%d%d", &a, &b);
//		if (a >= b)
//		{
//			for (int j = b; j >= 1; j--)
//			{
//				if (a%j == 0 && b%j == 0)
//				{
//					printf("%d", j);
//				}
//			}
//		}
//		if (a <= b)
//		{
//			for (int j = a; j >= 1; j--)
//			{
//				if (a%j == 0 && b%j == 0)
//				{
//					printf("%d", j);
//				}
//			}
//		}
//	}
//}
//输入三个整数，求最大值。
//#include<stdio.h>
//int main()
//{
//	int arr[3];
//	int max;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (int i = 0; i < 3; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//求a的b次方对c取余的结果。

//（1 <= a，b，c <= 1e9）
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int  b, c;
//	float a;
//	long int sum=0;
//	scanf("%f%d%d", &a, &b, &c);
//	sum = pow(a, b);
//	sum %= c;
//	printf("%d", sum);
//}
//求圆周长
//#include<stdio.h>
//int main()
//{
//	float R;
//	scanf("%f", &R);
//	printf("%.2f", 2*R*3.14);
//}
//画方形框
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < (n-2); i++)
//	{
//		printf("*");
//		for (int j = 0; j < (n - 2); j++)
//		{
//			printf(" ");
//		}
//		printf("*\n");
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("*");
//	}
//}
//判断水仙花数
//#include<stdio.h>
//int main()
//{
//	int n;
//	int a, b, c;
//	while (1)
//	{
//		scanf("%d", &n);
//		a = n / 1 % 10;
//		b = n / 10 % 10;
//		c = n / 100 % 10;
//		if (a*a*a + b*b*b + c*c*c == n)
//		{
//			printf("true");
//		}
//		else
//		{
//			printf("false");
//		}
//	}
//	
//}
//画倒三角形
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j>0; j--)
//		{
//			printf(" ");
//		}
//		for (int j = i; j < n; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//画正三角形
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = (n-1); j>i; j--)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//画*三角堆
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i, j, k;
//	scanf("%d", &n);
//	for (i = 1; i < (n+1); i++)
//	{
//		/* 观察每行的空格数量 */
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");    //输出空格
//		}
//		/* 观察每行*号的数量 */
//		for (k = 0; k < 2 * i - 1; k++)
//		{
//			printf("*");   //每行输出的*号
//		}
//		printf("\n");     //每次循环换行
//	}
//	return 0;
//}
//#include <stdio.h>
//
//void main()
//{
//	int i, j, n;
//	scanf("%d", &n);
//	n = (n - 1) / 2;
//	for (i = 1; i <= n + 1; i++)
//	{
//		for (j = 1; j <= n + 1 - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = n; i > 0; i--)
//	{
//		for (j = n - i; j >= 0; j--)
//			printf(" ");
//		for (j = 2 * i - 2; j >= 0; j--)
//			printf("*");
//		printf("\n");
//	}
//}
//爱学习的小老头
//#include<stdio.h>
//int main()
//{
//	int arr[100][200];
//	int a, b;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < (2 * b); j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < (2 * b); j += 2)
//		{
//			if (arr[i][j] == 1 || arr[i][j + 1] == 1)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//}
//弟弟的作业
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int a, b;
//	char c;
//	char flag,ret;
//	int anwser;
//	while (scanf("%d%c%d=%c", &a, &flag, &b, &c) != EOF)
//	{
//		if (c = '?')
//		{
//			continue;
//		}
//		else if (flag == '-')
//		{
//			anwser = a - b;
//		}
//		else if (flag == '+')
//		{
//			anwser = a + b;
//		}
//		(char)anwser;
//		if (anwser == c)
//		{
//			count++;
//		}
//	}printf("%d", count);
//	return 0;
//}
//数字整除
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int ret;
//	int a;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] == 0)
//		{
//			ret = i - 1;
//			break;
//		}
//		a = arr[i] % 10;
//		arr[i] = (arr[i] - a) / 10;
//		if ((arr[i] - a * 5) % 17 == 0)
//		{
//			printf("1\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//	}
//}
