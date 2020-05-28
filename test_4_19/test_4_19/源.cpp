#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int my_strlen(const char * str)
//{
//	int count = 0;
//	while (1)
//	{
//		if (str != '\0')
//		{
//			count++;
//			str++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return count;
//}
int my_strlen(char* str)
{
	char* p = str;
	while (*p != '\0')
	{
		p++;
	}
	return p - str;
}
char *my_strcpy(char *dest, const char*src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}
char *my_strcat(char *dest, const char*src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	return ret;
}
int my_strcmp(const char* dest, const char* src)
{
	int ret = 0;
	assert(dest != NULL);
	assert(src != NULL);
	while (!(ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst)
		++src, ++dst;
	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1;
	return ret;
}
int main()
{
	char str[] = "hello world!";
	int ret = 0;
	ret = my_strlen(str);
	printf("%d", ret);
	return 0;
}