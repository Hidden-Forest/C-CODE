#define _CRT_SECURE_NO_WARNINGS 1

ð������Ӣ�Bubble Sort����һ�ּ򵥵������㷨�����ظ����߷ù�Ҫ��������У�һ�αȽ�����Ԫ�أ�������ǵ�˳����Ӵ�С������ĸ��A��Z������Ͱ����ǽ���������
#include<stdio.h>
void bubble_sort(int arr[], int len)
{
	int ret = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len-1-i; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
}
int main()
{
	int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
	int len = (int) sizeof(arr) / sizeof(*arr);
	bubble_sort(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
ѡ������Selection sort����һ�ּ�ֱ�۵������㷨�����Ĺ���ԭ�����¡�������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�ã�Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ���Դ����ƣ�ֱ������Ԫ�ؾ�������ϡ�
#include<stdio.h>
void swap(int *a, int *b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selection_sort(int arr[], int len)
{
	int i, j;

	for (i = 0; i < len - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < len; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(&arr[min], &arr[i]);    
	}
}
int main()
{
	int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
	int len = (int) sizeof(arr) / sizeof(*arr);
	selection_sort(arr,len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}