#define _CRT_SECURE_NO_WARNINGS 1
//1998年世界人口位50亿，按照年增长率1.1%计算，哪一年人口少于并且最接近 n 亿。输入数字为10，表示10亿；输入数字为5，表示为5亿。依次类推。
//#include<stdio.h>
//int main()
//{
//	int num, year;
//	int i;
//	float n=50;
//	scanf("%d", &num);
//	for (i = 1998; i >= 0; i--)
//	{
//		n /= 1.011;
//		if (n < num)
//		{
//			i--;
//			break;
//		}
//	}
//	printf("%d", i);
//}
//输入数值范围，列出该范围中所有的素数。
//#include<stdio.h>
//int main()
//{
//	int start, end;
//	scanf("%d%d", &start, &end);
//	int count;
//	for (int i = start; i <= end; i++)
//	{
//		for (int j = i; j > 1; j--)
//		{
//			if (i%j == 0)
//			{
//				count++;
//			}
//		}
//	}
//}
//求泰勒级数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float x;
//	scanf("%f", &x);
//	float sum = x;
//	int n;
//	for (int i = 3; i <= 19; i += 2)
//	{
//		n = 1;
//		for (int j = i; j >= 1; j--)
//		{
//			n *= j;
//		}
//		sum -= (pow(x, i) / n);
//	}
//	printf("%f", sum);
//}