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
//������������������С�����˳�������
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
//����10����������������С�������һ�����Ի����������������һ�����Ի���д���������� ������10�������ڽ��д��������10������
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
//��n��������ʹǰ�����˳�������m��λ�ã����m�������ǰ��m��������ͼ��дһ������ʵ�����Ϲ��ܣ���������������n����������������n������
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
//��һ�ַ���������n���ַ���дһ�����������ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ�����
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
