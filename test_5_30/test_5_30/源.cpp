#define _CRT_SECURE_NO_WARNINGS 1
//µ¥´Ê½ÓÁú
#include<stdio.h>
int main()
{
	char arr[10] = { '0' };
	int ret=0;
	char flag;
	char begin, end;
	int count = 0;
	int n, i, j;
	scanf("%d", &n);
	scanf("%s", arr);
	for (j = 0; j < 10; j++)
	{
		if (arr[j] == '0')
		{
			end = arr[j - 1];
			break;
		}
		count++;
	}
	flag = arr[0];
	for (i = 0; i < n; i++)
	{
		scanf("%s", arr);
		ret++;
		begin = arr[0];
		if (begin == end)
		{
			for (j = 0; j < 10; j++)
			{
				if (arr[j] == '0')
				{
					end = arr[j - 1];
					break;
				}
				count++;
			}
		}
		else
		{
			break;
		}
	}
	for (i = 0; i < (n - ret); i++)
	{
		scanf("%s", arr);
	}
	printf("%d", count);
}