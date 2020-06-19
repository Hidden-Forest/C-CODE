#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>

#define name_size 20
#define hometown_size 20

typedef struct student   //����ṹ��
{
	char name[name_size];       //����
	char hometown[hometown_size];   //����
	char sex[10];        //�Ա�
	char phone[15];      //�ֻ���
	char QQ[15];         //QQ��
	char e_mail[20];     //����
	struct student *next;   //�ṹ��ָ��
}stu;

stu *head = NULL;  //�ȶ�������ͷ���ָ��
FILE *fp = NULL;    //�ٶ����ļ�ָ��
char filename[20];  //������ļ���

//�������
char reg_name[30] = "", reg_pwd[10] = "";
char on_name[30], on_pwd[10];

//�û�ע��ϵͳ
void regist()
{
	//����
	system("pause");
	system("cls");

	printf("\n\n\t\t\t��ӭʹ��ͨѶ¼ע��ϵͳ\n\n");
	while (1)
	{
		//�����û���
		printf("\t\t�������û���[���ܴ���10���ַ�]��");
		scanf("%s", reg_name);

		//�ж��û���
		if (strlen(reg_name) <= 10)
		{
			while (1)
			{
				//��������
				printf("\n\t\t����������[���볤��Ϊ��λ]��");
				scanf("%s", reg_pwd);

				//�ж�����
				if (strlen(reg_pwd) == 8)
				{
					printf("\n\n\t\tע��ɹ��������û�����%s,������%s\n\n", reg_name, reg_pwd);
					break;
				}
				else
				{
					printf("\n\t\t����ĳ���Ϊ%d������������\n", strlen(reg_pwd));
				}
			}
			break;
		}
		else
		{
			printf("\n\t\t�û����ĳ���Ϊ%d������������\n\n", strlen(reg_name));
		}
	}
}

//�ж��Ƿ�ע��
int judge()
{
	if (strcmp(reg_name, "") == 0 && strcmp(reg_pwd, "") == 0)
	{
		printf("\n\n\t\t����δע�ᣬ����ע�ᣡ\n\n");
		return 0;
	}
	else
	{
		return 1;
	}
}

//�û���¼
void dl()
{
	int i;
	system("pause");
	system("cls");

	printf("\n\n\t\t\t��ӭʹ��ͨѶ¼��¼ϵͳ\n\n");
	//���ε�¼��֤
	for (i = 1; i <= 3; i++)
	{
		printf("\t\t�������û���:");
		scanf("%s", on_name);
		printf("\n\t\t��������  ��:");
		scanf("%s", on_pwd);
		if (strcmp(reg_name, on_name) == 0 && strcmp(reg_pwd, on_pwd) == 0)
		{
			printf("\n\n\t\t��¼�ɹ�����ӭʹ��ͨѶ¼ϵͳ\n\n");
			break;
		}
		else
		{
			printf("\n\n\t\t��¼ʧ�ܣ������µ�¼��������%d�λ���\n\n", 3 - i);
			if (i == 3)
			{
				exit(1);
				break;
			}
		}

	}

}

void menu()
{
	
	printf("\n\n\n");
	printf("      *****************************************************\n");
	printf("      *****************************************************\n");
	printf("      \t\t\t  ͨѶ¼����ϵͳ\n");
	printf("\n");
	printf("\t\t1.��������");
	printf("\t\t2.��ʾ����\n");
	printf("\t\t3.��������");
	printf("\t\t4.ɾ������\n");
	printf("\t\t5.�鿴����");
	printf("\t\t6.�޸�����\n");
	printf("\t\t7.��������");
	printf("\t\t8.�������ݱ���\n");
	printf("      *****************************************************\n");
	printf("      ******�ˡ������������������롫����������������10******\n");
	printf("      *****************************************************\n");

}
void input(stu *p1)  //�����������
{
	printf("������ϵ������:");
	scanf("%s", &p1->name);
	printf("������ϵ�˼���:");
	scanf("%s", &p1->hometown);
	printf("������ϵ���Ա�:");
	scanf("%s", &p1->sex);
	printf("������ϵ���ֻ���:");
	scanf("%s", &p1->phone);
	printf("������ϵ��QQ��");
	scanf("%s", &p1->QQ);
	printf("������ϵ������:");
	scanf("%s", &p1->e_mail);
}
void main()
{
	int i;
	//�������
	int id;
	while (1)
	{
		system("pause");
		system("cls");
		//�������
		printf("\n\n\t\t\tͨѶ¼����ϵͳ\n\n");

		printf("\t\t\t1:ע��\n");
		printf("\t\t\t2:��¼\n");
		printf("\t\t\t0:�˳�\n\n");

		//���빦�ܱ��
		printf("\t\t��ѡ���ܱ�ţ�");
		scanf("%d", &id);

		//�ж�
		switch (id)
		{
		case 1:regist(); break;
		case 2:
			if (judge() == 1)
			{
				dl();
				system("cls");
				menu();
				while (1)
				{
					printf("���������ѡ��(1-9): ");
					loop:scanf("%d", &i);
					if (i<1 || i>9)
					{
						printf("��������,��������1-9������ѡ��: ");
						goto loop;
					}
					switch (i)
					{
					case 9:
						exit(1);
						break;

					}
				}
			}
			break;
		case 0:exit(1); break;
		default:
			printf("\n\t\t������Ĺ��ܱ���������������룡\n");
		}

	}
	
}