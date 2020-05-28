#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//求1 + 2!+ 3!+ ... + 20!的和。
//int main()
//{
//	int sum = 0;
//	int a = 1;
//	for (int i = 1; i <= 20; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			a *= j;
//		}
//		sum += a;
//		a = 1;
//	}
//	printf("%d", sum);
//	return 0;
//}
//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//int main()
//{
//	long a, b, c, d, e, x;
//	printf("请输入 5 位数字：");
//	scanf("%ld", &x);
//	a = x / 10000;        /*分解出万位*/
//	b = x % 10000 / 1000;   /*分解出千位*/
//	c = x % 1000 / 100;     /*分解出百位*/
//	d = x % 100 / 10;       /*分解出十位*/
//	e = x % 10;           /*分解出个位*/
//	if (a != 0){
//		printf("为 5 位数,逆序为： %ld %ld %ld %ld %ld\n", e, d, c, b, a);
//	}
//	else if (b != 0) {
//		printf("为 4 位数,逆序为： %ld %ld %ld %ld\n", e, d, c, b);
//	}
//	else if (c != 0) {
//		printf("为 3 位数,逆序为：%ld %ld %ld\n", e, d, c);
//	}
//	else if (d != 0) {
//		printf("为 2 位数,逆序为： %ld %ld\n", e, d);
//	}
//	else if (e != 0) {
//		printf("为 1 位数,逆序为：%ld\n", e);
//	}
//}
//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
//int main()
//{
//	int a, b, c, d, e;
//	int num;
//	scanf("%d", &num);
//	a = num / 10000;        /*分解出万位*/
//	b = num % 10000 / 1000;   /*分解出千位*/
//	c = num % 1000 / 100;     /*分解出百位*/
//	d = num % 100 / 10;       /*分解出十位*/
//	e = num % 10;           /*分解出个位*/
//	if (a == e && b == d)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}
//删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d", &a + 2);
}