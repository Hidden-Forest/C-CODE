#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}
//

//#include<stdio.h>
//int main()
//{
//	int r;
//	double area;
//	scanf("%d", &r);
//	area = r*r*3.14159265;
//	printf("%.7lf", area);
//}
//æÿ’Ûªª––
//#include<stdio.h>
//
//int main()
//{
//	int arr[5][5];
//	int m, n;
//	int ret = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d", &m, &n);
//	for (int j = 0; j < 5; j++)
//	{
//		ret = arr[m - 1][j];
//		arr[m - 1][j] = arr[n - 1][j];
//		arr[n - 1][j] = ret;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}