#define _CRT_SECURE_NO_WARNINGS 1
//6 - 1 使用函数求特殊a串数列和(10分)
//#include <stdio.h>
//#include <math.h>
//int fn(int a, int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += (int)(pow(10.0, i)*a);
//	}
//	return sum;
//}
//int SumA(int a, int n)
//{
//	int sum = 0;
//	int sumsum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sumsum = 0;
//		for (int j = 0; j < i; j++)
//		{
//			sumsum += (int)(pow(10.0, j)*a);
//		}
//		sum += sumsum;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a, n;
//
//	scanf("%d %d", &a, &n);
//	printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
//	printf("s = %d\n", SumA(a, n));
//
//	return 0;
//}
//
//6-2 递归实现指数函数 (10分)
//#include<stdio.h>
//
//double calc_pow(double x, int n)
//{
//	double sum=1;
//	for (int i = 0; i < n; i++)
//	{
//		sum *= x;
//	}
//	return sum;
//}
//
//int main()
//{
//	double x;
//	int n;
//
//	scanf("%lf %d", &x, &n);
//	printf("%.0f\n", calc_pow(x, n));
//
//	return 0;
//}
//
//6-3 递归计算Ackermenn函数 (10分)
//#include <stdio.h>
//
//int Ack(int m, int n)
//{
//	if (m == 0)
//	{
//		return n + 1;
//	}
//	else if (n == 0 && m > 0)
//	{
//		return Ack(m - 1, 1);
//	}
//	else if (m >0 && n > 0)
//	{
//		return Ack(m - 1, Ack(m, n - 1));
//	}
//}
//
//int main()
//{
//	int m, n;
//
//	scanf("%d %d", &m, &n);
//	printf("%d\n", Ack(m, n));
//
//	return 0;
//}
//
//
//递归求Fabonacci数列
//#include <stdio.h>
//
//int f(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n >= 2)
//	{
//		return f(n - 2) + f(n - 1);
//	}
//}
//
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//	printf("%d\n", f(n));
//
//	return 0;
//}
//
//6-5 使用函数的选择法排序 (10分)
//#include <stdio.h>
//#define MAXN 10
//void sort(int a[], int n)
//{
//	int temp, k, min, i;
//	for (k = 0; k<n - 1; k++){
//		min = k;
//		for (i = k + 1; i<n; i++)
//		if (a[i]<a[min])
//			min = i;
//		temp = a[min];
//		a[min] = a[k];
//		a[k] = temp;
//
//	}
//}
//int main()
//{
//	int i, n;
//	int a[MAXN];
//
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//		scanf("%d", &a[i]);
//
//	sort(a, n);
//
//	printf("After sorted the array is:");
//	for (i = 0; i < n; i++)
//		printf(" %d", a[i]);
//	printf("\n");
//
//	return 0;
//}
//6-6 递归计算P函数 (10分)
//#include <stdio.h>
//
//double P(int n, double x)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return x;
//	else if (n > 1)
//	{
//		return ((2 * n - 1) * P(n - 1, x) - (n - 1) * P(n - 2, x)) / n;
//	}
//}
//int main()
//{
//	int n;
//	double x;
//
//	scanf("%d %lf", &n, &x);
//	printf("%.2f\n", P(n, x));
//
//	return 0;
//}
//7-1 求幂之和 (10分)
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += (int)pow(2.0, i);
//	}
//	printf("result = %d\n", sum);
//}
//7-4 求n以内最大的k个素数以及它们的和 (10分)
#include <stdio.h>
#include <math.h>

int isPrime(int n) {
	if (n <= 1) {
		return 0;
	}
	else {
		int max, i;

		max = sqrt(n);
		for (i = 2; i <= max; i++) {
			if (n%i == 0) {
				break;
			}
		}
		if (i > max) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

int main(void) {
	int n, k, i, count = 0, sum = 0, prime[10];

	scanf("%d %d", &n, &k);
	for (i = n; i >= 1; i--) {
		if (isPrime(i)) {
			prime[count] = i;
			count++;
		}
		if (count == k) {
			break;
		}
	}
	for (i = 0; i < count; i++) {
		if (i == 0) {
			printf("%d", prime[i]);
		}
		else {
			printf("+%d", prime[i]);
		}
	}
	for (i = 0; i < count; i++) {
		sum += prime[i];
	}
	printf("=%d\n", sum);

	return 0;
}