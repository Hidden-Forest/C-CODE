#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h<
//#include<stdlib.h<
//#include<string.h<
//int main()
//{
//	int i = 0;
//	char arr[100] = { '0' };
//	scanf("%s", &arr);
//	while (arr[i]!='0')
//	{
//		if (arr[i] != ' ')
//		{
//			arr[i] = (arr[i] - 96) % 26;
//			arr[i] += 97;
//		}
//		else
//		{
//			i++;
//			continue;
//		}
//		i++;
//	}
//	printf("%s", arr);
//}
//输入三个整数，按由小到大的顺序输出。
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b && a < c)
//	{
//		if (b < c)
//		{
//			printf("%d %d %d ", a, b, c);
//		}
//		else
//		{
//			printf("%d %d %d ", a, c, b);
//		}
//	}
//	if (b < a && a < c)
//	{
//		if (a < c)
//		{
//			printf("%d %d %d ", b, a, c);
//		}
//		else
//		{
//			printf("%d %d %d ", b, c, a);
//		}
//	}
//	if (c < b && c < a)
//	{
//		if (b < a)
//		{
//			printf("%d %d %d ", c, b, a);
//		}
//		else
//		{
//			printf("%d %d %d ", c, a, b);
//		}
//	}
//	return 0;
//}
//输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写三个函数； ①输入10个数；②进行处理；③输出10个数。
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int mmax;
//	int mmin;
//	int max;
//	int min;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	min = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//			mmax = i;
//		}
//		if (arr[i] <= min)
//		{
//			min = arr[i];
//			mmin = i;
//		}
//	}
//	int ret;
//	ret = arr[mmax];
//	arr[mmax] = arr[9];
//	arr[9] = ret;
//	ret = arr[mmin];
//	arr[mmin] = arr[0];
//	arr[0] = ret;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//有n个整数，使前面各数顺序向后移m个位置，最后m个数变成前面m个数，见图。写一函数：实现以上功能，在主函数中输入n个数和输出调整后的n个数。
//#include<stdio.h>
//int main()
//{
//	int n,m;
//	int ret;
//	int arr[400];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	for (int i = 0; i < n; i++)
//	{
//		ret = arr[i];
//		arr[i+m]
//	}
//}
//有一字符串，包含n个字符。写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。
#include<stdio.h>
int main()
{
	int n,m;
	char arr[100] = { 0 };
	scanf("%d", &n);
	scanf("%s", &arr);
	scanf("%d", &m);
	for (int i = (m-1); i < n; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}
