#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//int main()
//{
//	int i, j;
//	float k;
//	scanf("%d %d", &i, &j);
//	k = (i - j) *100.0 / j;
//	if (k<10)
//	{
//		printf("OK\n");
//	}
//	if ((k>=10) && (k < 50))
//	{
//		printf("Exceed %.0f%% .Ticket 200\n",k);
//	}
//	if (k>=50)
//	{
//		printf("Exceed %.0f%%. License Revoked\n", k);
//	}
//	return 0;
//}

//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (x == 1 || 2 || 3)
//	{
//		printf("hello");
//	}
//	return 0;
//}

//int main()
//{ 
//	int i,j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = (i-1); j > 1; j--)
//		{
//			if (i%j != 0 && j==2)
//			{
//				printf("%d是素数\n", i);
//			}
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int grade;
//	scanf("%d", &grade);
//	if (grade >= 90)
//	{
//		printf("A");
//	}
//	if (grade < 90 && grade>=80)
//	{
//		printf("B");
//	}
//	if (grade >= 70 && grade<80)
//	{
//		printf("C");
//	}
//	if (grade >= 60 && grade<70)
//	{
//		printf("D");
//	}
//	if (grade < 60)
//	{
//		printf("E");
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	float area, perimeter,s;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a>=b+c || b>=a+c || c>=a+b)
//	{
//		printf("These sides do not correspond to a valid triangle\n");
//	}
//	else
//	{
//		s = (a + b + c) / 2.0;
//		area = sqrt(s*(s - a)*(s - b)*(s - c));
//		perimeter = a + b + c;
//		printf("area = %.2f; perimeter = %.2f", area, perimeter);
//	}
//	
//	return 0;
//}
//int main()
//{
//	float x,y;
//	scanf("%f", &x);
//	if (x <= 15)
//	{
//		y = 4*x/3;
//	}
//	else
//	{
//		y = 2.5*x - 17.5;
//	}
//	printf("%.2f", y);
//	return 0;
//}
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
/*计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果*/
//int main()
//{
//	int i;
//	double sum=1;
//	for (i = 2; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= (1.0 / i);
//		}
//		else
//		{
//			sum += (1.0 / i);
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}
/*简单冒泡排序*//*求10 个整数中最大值*/
//int main()
//{
//	int arr[10];
//	int i,k,t,j,num;
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &num);
//		arr[i] = num;
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		for (j = 0; j < 9; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//
//				t = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = t;
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//	printf("%d", arr[0]);
//	return 0;
//}
/*二分查找*/
//int main()
//{
//	int i, key, a[100], n,j=0;
//	int low=0, high, mid;
//	printf("请输入数组的长度：\n");
//	scanf("%d", &n);    
//	printf("请输入数组元素：\n");
//	for (i = 0; i<n; i++)
//		scanf("%d", &a[i]);    
//	printf("请输入你想查找的元素：\n");
//	scanf("%d", &key);    
//	high = n - 1;
//	
//	while (low<high)
//	{
//		mid = (high + low) / 2;
//		if (key<a[mid])
//		{
//			high = mid - 1;
//	    }
//	    else if (key>a[mid])
//		{
//			low = mid + 1;
//		}
//		else if (key == a[mid])
//		{
//			printf("查找成功,下标为:  %d", mid);
//			j += 1;
//			break;
//		}
//	}
//	if (j == 0)
//	{
//		printf("找不到!\n");
//	}
//	return 0;
//}
/*编写程序数一下 1到 100 的所有整数中出现多少个数字9*/
//int main()
//{
//	int i,ge,shi,count=0;
//	for (i = 100; i <= 200; i++)
//	{
//		ge = i / 1 % 10;
//		shi = i / 10 % 10;
//		if (ge == 9)
//		{
//			count += 1;
//		}
//		if (shi == 9)
//		{
//			count += 1;
//		}
//
//	}
//	printf("%d", count);
//	return 0;
//}
/*本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。*/
//int main()
//{
//	int j = 1, i = 1;
//	double sum = 0, n = 1.0, eps;
//	scanf("%lf", &eps);
//	if (eps >= 1) 
//		printf("sum = %.6f", n);
//	else
//	{
//		while (fabs(n)>eps)
//		{
//			n = j*1.0 / i;
//			sum = sum + n;
//			i += 3;
//			j = -j;
//		}
//		printf("sum = %.6f", sum);
//	}
//	return 0;
//}
/*猴子吃桃问题*/
//int main()
//{
//	int N, i;
//	int sum = 1;
//	scanf("%d", &N);
//	for (i = 1; i < N; i++)
//	{
//		sum = (2 * sum + 2);
//	}
//	printf("%d", sum);
//	return 0;
//}
/*兔子繁衍问题*/
//int main()
//{
//	int i=2, f1=1, f2=1, N;
//	scanf("%d", &N);
//	while ((f1 < N) || (f2 < N))
//	{
//		i += 1;
//		if (i % 2 != 0)
//		{
//			f1 = f2 + f1;
//		}
//		if (i % 2 == 0)
//		{
//			f2 = f1 + f2;
//		}
//	}
//	i = i - 1;
//	printf("%d", i);
//	return 0;
//}
/*求整数的位数及各位数字之和*/
//int main()
//{
//	int N;
//	int a=1, b=10, count=0;
//	int sum = 0, i, j, k;
//	scanf("%d", &N);
//	while (1)
//	{
//		count += 1;
//		if ((N >= a) && (N < b))
//		{
//			break;
//		}
//		a *= 10;
//		b *= 10;
//	}
//	for (i = 1; i <= count; i++)
//	{
//		k = i - 1;
//		j = pow((float)10, k);
//		sum += N / j % 10;
//	}
//	printf("%d %d", count, sum);
//}
/*(念数字)*/
//int main()
//{
//	int i,count=0,N,R,j;
//	char *arr[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
//	scanf("%d", &N);
//	count = sizeof(N);
//	for (i = count; i >= 1; i--)
//	{
//		j = pow((float)10, (i-1));
//		R = N / j % 10;
//		printf("%s ", arr[R]);
//	}
//}
/*猜数字游戏*/
//int getNumber()
//{
//	return rand() % 100;
//}
//int main()
//{
//	int k, N, ret;
//	int count = 0;
//	ret = getNumber();
//	scanf("%d%d", &k, &N);
//	while (1)
//	{
//		count += 1;
//		if (k>=0)
//		{
//			if (ret == k)
//			{
//				if (count == 1)
//				{
//					printf("Bingo!");
//					break;
//				}
//				if (count <= 3)
//				{
//					printf("Lucky You!");
//					break;
//				}
//				if ((count > 3) && (count <= N))
//				{
//					printf("Good Guess!");
//					break;
//				}
//				if (count > N)
//				{
//					printf("Game Over!");
//					break;
//				}
//			}
//			else if (ret > k)
//			{
//				printf("Too small");
//			}
//			else if (ret < k)
//			{
//				printf("Too big");
//			}
//		}
//		else
//		{
//			printf("Game Over!");
//			break;
//		}
//		scanf("%d", &k);
//	} 
//	return 0;
//}
//int main()
//
//{
//	int i, sum, is = 0;
//	char op = '0';
//	scanf("%d", &sum);
//	while (op != '=')
//	{
//		scanf("%c", &op);
//		if (op == '=')
//			break;
//		scanf("%d", &i);
//		if (op == '+')
//			sum = sum + i;
//		else if (op == '-')
//			sum = sum - i;
//		else if (op == '*')
//			sum = sum*i;
//		else if (op == '/')
//		{
//			if (i != 0)
//				sum = sum / i;
//			else
//				
//				is = 1;
//		}
//		else
//			is = 1;
//		
//	}
//	if (is == 1)
//		printf("ERROR");
//	else
//		printf("%d\n", sum);
//	return 0;
//}
/*实现一个函数来交换两个整数的内容。*/
//void exchange(int m, int n)
//{
//	int t;
//	t = m;
//	m = n;
//	n = t;
//	printf("%d %d", m, n);
//}
/*函数实现九九乘法表*/
//void jiu_jiu()
//{
//	int i, j;
//	int sum = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = i*j;
//			printf("%d * %d = %-5d", i, j, sum);
//		}
//		printf("\n");
//	}
//}
/*递归实现打印数的每一位*/
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
/*递归与非递归实现求阶乘*/
//int jie_chen1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*jie_chen(n - 1);
//	}
//}
//int jie_chen2(int n)
//{
//	int i,sum=1;
//	for (i = n; i >= 1; i--)
//	{
//		sum *= i;
//	}
//	return sum;
//}
/*递归实现字符串反向排列*/
//void reverse_string(char * string)
//{
//	printf("%c", *string);
//	if (*string != '\0')
//	{
//		string++;
//		reverse_string(string);
//		printf("%c", *(string -1));
//	}
//}
/*计算一个数的每位之和（递归实现）*/
//void DigitSum(int n)
//{	
//	int m;
//	if (n > 9)
//	{
//		
//		DigitSum(n / 10);
//	}
//	m = n % 10;
//	printf("%d", m);
//}
//int ci_fang(int n, int k)
//{
//	if (k>0)
//	{
//		return ci_fang(n, k - 1)*n;
//	}
//	return 1;
//}
/*递归非递归实现斐波那契数列*/
//int Fib(int n)
//{
//	int fib1 = 1, fib2 = 1;
//	int sum = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 3; i <= n; i+=2)
//		{
//			fib1 = fib1 + fib2;
//			fib2 = fib1 + fib2;
//		}
//		if (n % 2 == 0)
//		{
//			return fib2;
//		}
//		else
//		{
//			return fib1;
//		}
//	}
//}
//int my_strlenth(char* str)
//{
//	int count = 0;
//	if (*str != '\0')
//	{
//		while (1)
//		{
//			if (*str == '\0')
//			{
//				break;
//			}
//			else
//			{
//				count += 1;
//				str += 1;
//			}
//		}
//		return count;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int n,k,ret=0;
//	char arr[] = "bit";
//	ret = my_strlenth(arr);
//	printf("%d", ret);
//	return 0;
//}
/*求阶乘序列前N项和*/
//int main()
//{
//	int n,sum1=1,sum2=0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			sum1 *= j;
//		}
//		sum2 += sum1;
//		sum1 = 1;
//	}
//	printf("%d", sum2);
//	return 0;
//}
/* 特殊a串数列求和*/
//int main()
//{
//	int  n;
//	int sum = 0, ret = 0;
//	float a;
//	scanf("%f%d", &a, &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret = pow(a, i);
//		sum += ret;
//	}
//	printf("s = %d", sum);
//	return 0;
//}
/*寻找250*/
//int main()
//{
//	int a, i;
//	i = 0;
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a == 250)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("%d\n", i + 1);
//	return 0;
//}
/*百钱百鸡*/
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i < 100; i++)
//		{
//			for (int j = 1; j < 100; j++)
//			{
//				for (int k = 1; k < 100; k++)
//				{
//					if (5 * i + 3 * j + k / 3 == 100 && k % 3 == 0 && i + j + k == 100)
//					{
//						printf("%d %d %d\n", i, j, k);
//					}
//				}
//			}
//		}
//	return 0;
//}
/*幸运彩票 */
//int main()
//{
//	int N,ret;
//	int ge = 0, shi = 0, bai = 0, qian = 0, wan = 0, shi_wan = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &ret);
//		ge = ret / 1 % 10;
//		shi = ret / 10 % 10;
//		bai = ret / 100 % 10;
//		qian = ret / 1000 % 10;
//		wan = ret / 10000 % 10;
//		shi_wan = ret / 100000 % 10;
//		if ((ge + shi + bai) == (qian + wan + shi_wan))
//		{
//			printf("You are lucky!");
//		}
//		else
//		{
//			printf("Wish you good luck.");
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int N, ret, hh, mm ,count=0;
//	char flag;
//	scanf("%d", &N);
//	while (1)
//	{
//		scanf("%d %c %d:%d", &ret,&flag,&hh,&mm);
//		if (ret == 0)
//		{
//			count += 1;
//		}
//
//		if (count == 3)
//		{
//			break;
//		}
//	}
//}
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//int main()
//{
//	int A[4] = { 1, 2, 3, 4 };
//	int B[4] = { 9, 10, 11, 12 };
//	int t = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		t = A[i];
//		A[i] = B[i];
//		B[i] = t;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", A[i]);
//	}
//}
//逆序数输出
//#include<stdio.h>
//int main()
//{
//	int N, a;
//	int i = 0;
//	int arr[10] = { 0 };
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &a);
//		arr[i] = a;
//	}
//	for (i = N - 1; i >= 0; i--)
//	{
//		if (i != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//		else
//		{
//			printf("%d", arr[i]);
//		}
//	}
//	return 0;
//}
//找出不是两个数组共有的元素
//#include<stdio.h>
//int main()
//{
//	int a[20], b[20], c[20];
//	int m, n, i, j, k = 0;
//	scanf("%d", &m);
//	for (i = 0; i<m; i++)
//		scanf("%d", &a[i]);
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//		scanf("%d", &b[i]);
//	for (i = 0; i<m; i++){
//		for (j = 0; j<n; j++){
//			if (a[i] == b[j])
//				break;
//		}
//		if (j >= n){
//			c[k] = a[i];
//			k++;
//		}
//	}
//	for (i = 0; i<n; i++){
//		for (j = 0; j<m; j++){
//			if (b[i] == a[j])
//				break;
//		}
//		if (j >= m){
//			c[k] = b[i];
//			k++;
//		}
//	}
//	printf("%d", c[0]);
//	for (i = 1; i<k; i++){
//		for (j = 0; j<i; j++){
//			if (c[i] == c[j])
//				break;
//		}
//		if (j >= i)
//			printf(" %d", c[i]);
//	}
//	return 0;
//}
/*加密*/
//int main()
//{
//	int x, V = 0;
//	int a = 0, b = 0, c = 0, d = 0;
//	scanf("%d", &x);
//	a = x / 1000 % 10;
//	b = x / 100 % 10;
//	c = x / 10 % 10;
//	d = x / 1 % 10;
//	a = (a + 9) % 10;
//	b = (b + 9) % 10;
//	c = (c + 9) % 10;
//	d = (d + 9) % 10;
//	V = a * 10 + c * 1000 + b * 1 + d * 100;
//	if (c == 0)
//	{
//		printf("The encrypted number is 0%d", V);
//	}
//	else
//	{
//		printf("The encrypted number is %d", V);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int sum = 0,j=0;
//	int N;
//	int count = 0, k = 0, max = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	scanf("%d", &N);
//	arr1[0] = N;
//	for (int i = 1; i < N; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (arr1[i] == arr1[j])
//			{
//				count++;
//			}
//		}
//		arr2[j] = count;
//		count = 0;
//	}
//	for (int i = 1; i < N; i++)
//	{
//		if (arr2[i] >= max)
//		{
//			max = arr2[i];
//			sum = i;
//		}
//	}
//	printf("%d %d", arr1[sum], arr2[max]);
//
//}
//int main()
//{
//	int n[10] = { 0 };
//	int N;
//	int sum = 0;
//	int count = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d",&n[i]);
//	}
//	if (N <= 4)
//	{
//		for (int i = 0; i < N-1; i++)
//		{
//			sum = n[i + 1] - n[i];
//			if (i != (N - 2))
//			{
//				printf("%d ", sum);
//			}
//			else
//			{
//				printf("%d", sum);
//			}
//		}
//	}
//	else if (N <= 7)
//	{
//		for (int i = 0; i < N-1; i++)
//		{
//			sum = n[i + 1] - n[i];
//			if (i != (N - 2))
//			{
//				printf("%d ", sum);
//			}
//			else
//			{
//				printf("%d", sum);
//			}
//			if (i == 2)
//			{
//				printf("\n");
//			}
//		}
//	}
//	else if (N <= 10)
//	{
//		for (int i = 0; i < N-1; i++)
//		{
//			sum = n[i + 1] - n[i];
//			if (i != (N - 2))
//			{
//				printf("%d ", sum);
//			}
//			else
//			{
//				printf("%d", sum);
//			}
//			if (i == 2)
//			{
//				printf("\n");
//			}
//			else if (i == 5)
//			{
//				printf("\n");
//			}
//		}
//	}
//
//}
//int main()
//{
//	int N;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d", &N);
//	int arr[10];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				continue;
//			}
//			ret = arr[i] * 10 + arr[j];
//			sum += ret;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int N;
//	int arr[1000];
//	int flag[10] = { 0 };
//	int ge = 0;
//	int shi = 0;
//	int bai = 0;
//	int qian = 0;
//	int max = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		ge = arr[i] / 1 % 10;
//		shi = arr[i] / 10 % 10;
//		bai = arr[i] / 100 % 10;
//		qian = arr[i] / 1000 % 10;
//		for (int j = 0; j <= 9; j++)
//		{
//			if (ge == j)
//			{
//				flag[j]++;
//			}
//			if (shi == j)
//			{
//				flag[j]++;
//			}
//			if (bai == j)
//			{
//				flag[j]++;
//			}
//			if (qian == j)
//			{
//				flag[j]++;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (flag[i]>max)
//		{
//			max = flag[i];
//		}
//	}
//	printf("%d:", max);
//	for (int i = 0; i < 10; i++)
//	{
//		if (max == flag[i])
//		{
//			printf(" %d", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int N;
//	int arr[10];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = (N - 1); i >= 0; i--)
//	{
//		if (i == 0)
//		{
//			printf("%d", arr[i]);
//		}
//		else
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int N,num,i;
//	int t = 0;
//	int arr[11];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &num);
//	for ( i = 0; i < (N-1); i++)
//	{
//		if (num >= arr[i] && num <= arr[i + 1])
//		{
//			break;
//		}
//	}
//	for (int j = N; j >= (i+1); j--)
//	{
//		arr[j] = arr[j - 1];
//		if (j == i + 1)
//		{
//			arr[i + 1] = num;
//		}
//	}
//	for (int j = 0; j <= N; j++)
//	{
//		printf("%d ", arr[i]);
//		
//	}
//}
//int main()
//{
//	int n, k, a[101], i, j, tmp;
//	scanf("%d %d", &n, &k);
//	for (i = 0; i<n; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i<k; i++)
//	{
//		for (j = 0; j<n - i - 1; j++)
//		{
//			if (a[j]>a[j + 1])
//			{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	printf("%d", a[0]);
//	for (i = 1; i<n; i++)
//		printf(" %d", a[i]);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int m, n, i, j;
//	int a[101];
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; ++i)
//		scanf("%d", &a[i]);
//	m = m % n;
//	for (i = 0; i < m; ++i)
//	{
//		int t;
//		t = a[0];
//		for (j = 0; j < n - 1; j++)
//			a[j] = a[j + 1];
//		a[n - 1] = t;
//	}
//	for (i = 0; i < n; ++i)
//	{
//		if (i)
//			printf(" ");
//		printf("%d", a[i]);
//	}
//	return 0;
//}
/*计算求和*/
//int main()
//{
//	int Sn = 0;
//	int a;
//	int count = 5;
//	scanf("%d", &a);
//	for (int i = 0; i <= 4; i++)
//	{
//		Sn += a*pow(10.0, i)*count;
//		count--;
//	}
//	printf("%d", Sn);
//	return 0;
//}
/*打印菱形*/
//int main()
//{
//	int n,h;
//	printf("请输入菱形横对角线长度: ");
//	scanf("%d", &n);
//	h = (n - 1) / 2;
//	for (int i = 1; i <= h; i++)
//	{
//		for (int j = i; j <= (h); j++)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= (2 * (i - 1) + 1); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 1; i <= 2*h+1; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = h; i >= 1; i--)
//	{
//		for (int j = i; j <= (h); j++)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= (2 * (i - 1) + 1); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//	}
//}
//
//
//int main()
//{
//	char str[] = "hello bit";
//	Reverse(str);
//	return 0;
//}
//
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//	}
//	return 0;
//}
int main()
{
	int kong = 20;
	int drink = 20;
	int count = 0;
	do
	{
		if (kong % 2 != 0)
		{
			kong++;
			count++;
		}
		kong = kong / 2;
		drink += kong;
		if (count != 0)
		{
			kong--;
			count--;
		}
	} while (kong!=1);
	printf("%d \n",drink);
	return 0;
}