#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	srand((int)time(0));
	printf("3: ʯͷ  2:����  1:��\n");
	int pc, player;
	int count_pc = 0;
	int count_player = 0;
	while (1)
	{
		printf("������: ");
		scanf("%d", &pc);
		player = rand() % 3 + 1;
		if (player == pc)
		{
			printf("ƽ��!\n");
		}
		else if (player == 1)
		{
			if (pc == 3)
			{
				printf("���ʤһ��!\n");
				count_player++;
			}
			else if (pc == 2)
			{
				printf("����ʤһ��!\n");
				count_pc++;
			}
		}
		else if (player > pc)
		{
			printf("���ʤһ��!\n");
			count_player++;
		}
		else if (player < pc)
		{
			printf("����ʤһ��!\n");
			count_pc++;
		}
		if (count_player - count_pc == 2)
		{
			printf("���ʤ��!\n");
			break;
		}
		if (count_pc - count_player == 2)
		{
			printf("����ʤ��!\n");
			break;
		}
		
	}

}
int main()
{
	int flag = 0;
	do
	{
		int flag = 0;
		printf("*************************\n");
		printf("** 1.Play      0. Exit **\n");
		printf("*************************\n");
		scanf("%d", &flag);
		switch (flag)
		{
		case 1:
			printf("��ʼ��Ϸ!\n");
			game();
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("�������,�˳���Ϸ!\n");
		}
	} while (flag);
}