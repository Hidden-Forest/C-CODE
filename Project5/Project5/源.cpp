#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[10];
//	int max, mmax;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	max = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == max)
//		{
//			arr[i] = 0;
//		}
//	}
//	mmax = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>mmax)
//		{
//			mmax = arr[i];
//		}
//	}
//	printf("%d,%d", max,mmax);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n;
	int arr[10];
	int ret=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (arr[j]>=arr[j - 1])
			{
				arr[j] = ret;
				arr[j] = arr[j - 1];
				arr[j - 1] = ret;

			}
		}
	}
	
	printf("%d,%d", arr[0], arr[1]);
	
}