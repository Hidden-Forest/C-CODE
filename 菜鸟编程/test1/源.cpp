#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include<math.h>


/*(有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？)*/
//int main()
//{
//	int count=0;
//	for (int i = 1; i <= 4; i++)
//	{
//		for (int j = 1; j <= 4; j++)
//		{
//			for (int k = 1; k <= 4; k++)
//			{
//				if (i != j && i != k && k != j)
//				{	
//					count += 1;
//					printf("%d%d%d\n", i, j, k);
//				}
//			}
//		}
//	}
//	printf("这个三位数共有%d种可能:\n", count);
//	return 0;
//}
/*(输入某年某月某日，判断这一天是这一年的第几天？)*/
//int main()
//{
//	int year, month, day, date=0;
//	int months_pin[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int months_run[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	printf("请输入年月日\n格式:(2020,3,3)\n");
//	scanf("%d,%d,%d", &year, &month, &day);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		for (int i = 0; i < month; i++)
//		{
//			date += months_run[i];
//		}
//		date += day;
//		printf("这是这一年的%d天\n", date);
//	}
//	else
//	{
//		for (int i = 0; i < month; i++)
//		{
//			date += months_pin[i];
//		}
//		date += day;
//		printf("这是这一年的%d天\n", date);
//	}
//	return 0;
//}
/*(输入三个整数x,y,z，请把这三个数由小到大输出。)*/
//int main()
//{
//	int x, y, z;
//	scanf("%d %d %d", &x, &y, &z);
//	if (x > y&&x > z)
//	{
//		if (y > z)
//		{
//			printf("%d>%d>%d", x, y, z);
//		}
//		else
//		{
//			printf("%d>%d>%d", x, z, y);
//		}
//	}
//	if (y > x&&y > z)
//	{
//		if (x > z)
//		{
//			printf("%d>%d>%d", y, x, z);
//		}
//		else
//		{
//			printf("%d>%d>%d", y, z, x);
//		}
//	}
//	if (z > y&&z > x)
//	{
//		if (y > x)
//		{
//			printf("%d>%d>%d", z, y, x);
//		}
//		else
//		{
//			printf("%d>%d>%d", z, x, y);
//		}
//	}
//	return 0;
//}
/*(输出特殊图案，请在c环境中运行，看一看，Very Beautiful!)*/
//int main(void)
//{
//	int i, j;
//	SetConsoleOutputCP(437);
//	char a = 176, b = 219;
//	for (i = 0; i<5; i++)
//	{
//		for (j = 0; j<5; j++)
//		{
//			if (i == j || (i + j + 1) == 5)
//				printf("%c", b);
//			else
//				printf("%c%c", a, a);
//		}
//		printf("\n");
//	}
//}
/*(简单猜字游戏)*/
//int main()
//{
//	int data, guess;
//	srand((unsigned)time(NULL));
//	data = rand() % 5 + 1;
//	printf("请输入要猜的数字(限1-5 )：");
//	scanf("%d", &guess);
//	if (guess == data)
//		printf("猜对了!~_~，正确数字为 %d !\n", data);
//	else
//		printf("猜错了!0_0，正确数字为 %d !\n", data);
//}
/*(九九乘法口诀表)*/
//int main()
//{
//	int i, j,num;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = i; j < 10; j++)
//		{
//			num = i*j;
//			printf("%d*%d=%-5d", i, j, num);
//		}
//		printf("\n");
//	}
//	return 0;
//}
/*古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）*/
//int main()
//{
//	int f1 = 1, f2 = 1,i, N;
//	scanf("%d", &N);
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%12d%12d", f1, f2);
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//	}
//	return 0;
//}
/*(水仙花数打印)*/
//int main()
//{
//	int i,ge,shi,bai,num;
//	for (i = 100; i < 1000; i++)
//	{
//		ge = i % 10;
//		shi = i / 10 % 10;
//		bai = i / 100 % 10;
//		if (i ==ge*ge*ge+shi*shi*shi+bai*bai*bai )
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
/*(打印一个数的质因数)*/
//int main()
//{
//	int n, i;
//	printf("请输入整数：");
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (i = 2; i <= n; i++)
//	{
//		while (n%i == 0)
//		{
//			printf("%d", i);
//			n /= i;
//			if (n != 1) printf("*");
//		}
//	}
//
//	printf("\n");
//	return 0;
//}
/*(利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。)*/
//int main()
//{
//	int score;
//	char grade;
//	printf("请输入分数:    ");
//		scanf("%d", &score);
//		grade = (score >= 90) ? 'A' : (score >= 60) ? 'B' : 'C';
//		printf("%c\n", grade);
//	return 0;
//}
/*输入两个正整数m和n，求其最大公约数和最小公倍数。*/
//int main()
//{
//	int m, n, i,t;
//	scanf("%d%d", &m, &n);
//	t = (m < n) ? m : n;
//	for (i = 2; i <= t ; i++)
//	{
//		if (m%i == 0 && n%i == 0)
//		{
//			break;
//		}
//		break;
//	}
//	t = m*n / i;
//	printf("最小公约数为:   %d\n最大公倍数为:   %d\n", i, t);
//	return 0;
//}
/*求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。*/
//int main()
//{
//	int a, n, i, j;
//	double d;
//	int sum1 = 0,sum=0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			d = pow(10,i)
//			sum1 += a*d;
//		}
//		sum += sum1;
//	}
//	printf("%d", sum);
//	return 0;
//}
/*求1000以内的所有完数*/
//#define N 1000
//int main()
//{
//	int i, j, k, n, sum;
//	int a[256];
//	for (i = 2; i <= N; i++)
//	{
//		sum = a[0] = 1;
//		k = 0;
//		for (j = 2; j <= (i / 2); j++)
//		{
//			if (i%j == 0)
//			{
//				sum += j;
//				a[++k] = j;
//			}
//
//		}
//		if (i == sum)
//		{
//			printf("%d=%d", i, a[0]);
//			for (n = 1; n <= k; n++)
//				printf("+%d", a[n]);
//			printf("\n");
//		}
//
//	}
//	return 0;
//}
/*一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？*/
//int main()
//{
//	int i;
//	float sum, h;
//	h = 50;
//	sum = 0;
//	for (i = 2; i <= 10; i++)
//	{
//		sum += h*2;
//		h =h / 2.0;
//	}
//	sum += 100;
//	printf("%f", sum);
//	return 0;
//}
