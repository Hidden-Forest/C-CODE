#define _CRT_SECURE_NO_WARNINGS 1
//1998�������˿�λ50�ڣ�������������1.1%���㣬��һ���˿����ڲ�����ӽ� n �ڡ���������Ϊ10����ʾ10�ڣ���������Ϊ5����ʾΪ5�ڡ��������ơ�
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
//������ֵ��Χ���г��÷�Χ�����е�������
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
//��̩�ռ���
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