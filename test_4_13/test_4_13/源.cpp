#define _CRT_SECURE_NO_WARNINGS 1
//×Ö·û´®¶Ô»»
//#include<stdio.h>
//void zuo_xuan(char arr[5],int count,int len )
//{
//	if (count > len / 2)
//	{
//		count = len - count;
//	}
//	for (int i = 0; i < count; i++)
//	{
//		int ret = 0;
//		ret = arr[i];
//		arr[i] = arr[len - i - 1];
//		arr[len - i - 1] = ret;
//	}
//}
//int main()
//{
//	int count,len;
//	char arr[4] = {'A','B','C','D'};
//	len = sizeof(arr);
//	scanf("%d", &count);
//	zuo_xuan(arr, count,len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//ÑîÊÏ¾ØÕó
//#include<stdio.h>
//int cha_zhao(int num)
//{
//	int arr[9][9];
//	int ret = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (arr[i][j] == num)
//			{
//				ret++;
//				return 1;
//			}
//		}
//	}
//	if (ret == 0)
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	int num;
//	int flag;
//	scanf("%d", &num);
//	flag=cha_zhao(num);
//}
