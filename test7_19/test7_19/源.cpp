#define _CRT_SECURE_NO_WARNINGS 1
//class Remove {
//public:
//	bool removeNode(ListNode* pNode){
//		if (pNode->next == nullptr)
//		{
//			return false;
//		}
//		ListNode *temp = pNode->next;
//		pNode->val = temp->val;
//		pNode->next = temp->next;
//		free(temp);
//		return true;
//	}
//};
#include<stdio.h>
#include<string.h>
int main()
{
	char str[21];
	int n;
	int temp;
	int i, j;
	while (scanf("%s", str) != EOF)
	{
		n = strlen(str);
		temp = str[0];
		for (i = 1; i < n; i++)
		{
			j = i - 1;
			temp = str[i];
			while (j >= 0 && str[j]> temp)
			{
				str[j + 1] = str[j];
				j--;

			}
			str[j + 1] = temp;
		}
		for (i = 0; i < n; i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}