#define _CRT_SECURE_NO_WARNINGS 1
//用带参的宏交换两个数
//#include<stdio.h>
//#define Swap(a,b){int temp; temp=a; a=b; b=temp;}
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a, &b);
//	Swap(a, b);
//	printf("%d %d", a, b);
//	return 0;
//}
//用带参的宏求闰年
//#include<stdio.h>
//#define LEAP_YEAR(y){if((y%4==0 && y%100!=0) || (y%400==0)){printf("L");} else{printf("N");}} 
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	LEAP_YEAR(y);
//}
//三角形面积
//#include<math.h>
//#include<stdio.h>
//
//int main()
//{
//	float a, b, c;
//	float S, Area;
//	scanf("%f%f%f", &a, &b, &c);
//	S = (a + b + c) / 2.000;
//	Area = sqrt(S*(S - a)*(S - b)*(S - c));
//	printf("%.3f\n", Area);
//	return 0;
//}
//请设计输出实数的格式，包括：⑴一行输出一个实数；⑵一行内输出两个实数；⑶一行内输出三个实数。实数用"6.2f"格式输出。
//#include<stdio.h>
//int main()
//{
//	float num;
//	scanf("%f", &num);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < (i+1); j++)
//		{
//			printf("%6.2f ", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//void Max(float arr[3])
//{
//	float max;
//	max = arr[0];
//	for (int i = 0; i < 3; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%.3f\n", max);
//	printf("%.3f\n", max);
//}
//int main()
//{
//	float arr[3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%f", &arr[i]);
//	}
//	Max(arr);
//}
#include<stdio.h>
int main(void)
{
	
}