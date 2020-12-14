#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
	int date;
	struct node *next;

} LNode, *LinkList;
//头插法建立单链表
LinkList Head_insert()
{
	LinkList head = (LinkList)malloc(sizeof(LNode));
	LNode *q;
	head->next = NULL;
	int x;
	printf("");
	scanf("%d", &x);
	while (x != 1)
	{
		q = (LinkList)malloc(sizeof(LNode));
		q->date = x;
		q->next = head->next;
		head->next = q;
		scanf("%d", &x);
	}
	return head;
}
int main()
{
	return 0;
}