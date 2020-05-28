#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[1];
//	int min = arr[1];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] <= min)
//		{
//			min = arr[i];
//		}
//	}
//	int ret = 0;
//	ret = max - min;
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	int ret = 0;
//	int sum = 0.00;
//	int max=0, min=999;
//	float average = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &ret);
//		if (ret > max)
//		{
//			max = ret;
//		}
//		if (min > ret)
//		{
//			min = ret;
//		}
//		sum += ret;
//	}
//	average = sum / n;
//	printf("average = %.2f\nmax = %d.00\nmin = %d", average, max, min);
//}
#include<stdio.h>
#include<math.h>
int main()
{
	double v, x;
	scanf("%lf %lf", &v, &x);
	double result;
	double param;
	double P = 3.14159265;
	param = 2 * x*9.8 / v / v;
	result = asin(param) * 180.0 / P;
	printf("%.0lf", result);
}