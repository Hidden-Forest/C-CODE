#define _CRT_SECURE_NO_WARNINGS 1
//��һ��3��3����Խ���Ԫ��֮�͡�
//#include<stdio.h>
//void main()
//{
//	int arr[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("%d %d\n", arr[0][0] + arr[1][1] + arr[2][2], arr[0][2] + arr[1][1] + arr[2][0]);
//}
//дһ���ж������ĺ�����������������һ������������Ƿ�����������Ϣ��
//#include<stdio.h>
//void judge_prime(int num)
//{
//	int count = 0;
//	for (int i = 1; i < num; i++)
//	{
//		if (num%i == 0)
//		{
//			count++;
//		}
//	}
//	if (count == 1 || count == 0)
//	{
//		printf("prime\n");
//	}
//	else
//	{
//		printf("not prime\n");
//	}
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	judge_prime(num);
//	return 0;
//}
//��дһ��������ʵ�δ���һ���ַ�����ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ��������������������ַ����Լ������������� ֻҪ����������ʲô��ʾ��Ϣ��
//#include<stdio.h>
//void TongJi(char s[])
//{
//	int ZiMu = 0, KongGe = 0, ShuZi = 0, QiTa = 0, i;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] == 32)KongGe++;
//		else if ((s[i] >= 48) && (s[i] <= 57))ShuZi++;
//		else if (((s[i] >= 97) && (s[i] <= 122)) || ((s[i] >= 65) && (s[i] <= 90)))ZiMu++;
//		else QiTa++;
//	}
//	printf("%d %d %d %d\n", ZiMu, ShuZi, KongGe, QiTa);
//}
//int main()
//{
//	char s[100];
//	gets(s);
//	TongJi(s);
//	return 0;
//}
#include<stdio.h>
#define s(a,b) a%b

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d", s(x, y));
	return 0;
}
