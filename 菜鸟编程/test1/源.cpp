#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include<math.h>


/*(��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�)*/
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
//	printf("�����λ������%d�ֿ���:\n", count);
//	return 0;
//}
/*(����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿)*/
//int main()
//{
//	int year, month, day, date=0;
//	int months_pin[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int months_run[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	printf("������������\n��ʽ:(2020,3,3)\n");
//	scanf("%d,%d,%d", &year, &month, &day);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		for (int i = 0; i < month; i++)
//		{
//			date += months_run[i];
//		}
//		date += day;
//		printf("������һ���%d��\n", date);
//	}
//	else
//	{
//		for (int i = 0; i < month; i++)
//		{
//			date += months_pin[i];
//		}
//		date += day;
//		printf("������һ���%d��\n", date);
//	}
//	return 0;
//}
/*(������������x,y,z���������������С���������)*/
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
/*(�������ͼ��������c���������У���һ����Very Beautiful!)*/
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
/*(�򵥲�����Ϸ)*/
//int main()
//{
//	int data, guess;
//	srand((unsigned)time(NULL));
//	data = rand() % 5 + 1;
//	printf("������Ҫ�µ�����(��1-5 )��");
//	scanf("%d", &guess);
//	if (guess == data)
//		printf("�¶���!~_~����ȷ����Ϊ %d !\n", data);
//	else
//		printf("�´���!0_0����ȷ����Ϊ %d !\n", data);
//}
/*(�žų˷��ھ���)*/
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
/*�ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�*/
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
/*(ˮ�ɻ�����ӡ)*/
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
/*(��ӡһ������������)*/
//int main()
//{
//	int n, i;
//	printf("������������");
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
/*(���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��)*/
//int main()
//{
//	int score;
//	char grade;
//	printf("���������:    ");
//		scanf("%d", &score);
//		grade = (score >= 90) ? 'A' : (score >= 60) ? 'B' : 'C';
//		printf("%c\n", grade);
//	return 0;
//}
/*��������������m��n���������Լ������С��������*/
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
//	printf("��С��Լ��Ϊ:   %d\n��󹫱���Ϊ:   %d\n", i, t);
//	return 0;
//}
/*��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�*/
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
/*��1000���ڵ���������*/
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
/*һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�*/
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
