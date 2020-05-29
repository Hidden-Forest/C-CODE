#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[100][2];
	char arr2[100][100];
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &arr1[i][0]);
		if (arr1[i][0] == 0)
		{
			break;
		}
		scanf("%s", arr2[i]);
		scanf("%d", &arr1[i][1]);
		count++;
	}
	int ret = 0;
	scanf("%d", &ret);
	for (int i = 0; i < count; i++)
	{
		if (arr1[i][1] >= ret)
		{
			printf("%d ", arr1[i][0]);
			printf("%s ", arr2[i]);
			printf("%d\n", arr1[i][1]);
		}
		
	}
	return 0;
}