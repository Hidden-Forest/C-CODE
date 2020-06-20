#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>


#define name_size 20         //��������
#define hometown_size 20     //���᳤��

struct node   //����ṹ��
{
	int ID;
	char name[name_size];       //����
	char hometown[hometown_size];   //����
	char sex[10];        //�Ա�
	char phone[15];      //�ֻ���
	char QQ[15];         //QQ��
	char e_mail[20];     //����
	struct node *next;   //�ṹ��ָ��
};

int i = 0;  //����ȫ�ֱ���

//�������
char reg_name[30] = "", reg_pwd[10] = "";   //����ע���û�����������Ϣ
char on_name[30], on_pwd[10];               //�����û�����������Ϣ

//�û�ע��ϵͳ
void regist()
{
	//����
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


//�˵���Ϣ
void menu()
{

	printf("\n\n\n");
	printf("      *****************************************************\n");
	printf("      *****************************************************\n");
	printf("      \t\t\t  ͨѶ¼����ϵͳ\n");
	printf("\n");
	printf("\t\t1.��Ӻ���");
	printf("\t\t2.�鿴�б�\n");
	printf("\t\t3.ɾ������");
	printf("\t\t4.���Һ���\n");
	printf("\t\t5.�޸���Ϣ");
	printf("\t\t6.ͳ�ƺ�������\n");
	printf("\t\t7.�����˳�");
	printf("\t\t8.�������ݱ���\n");
	printf("      *****************************************************\n");
	printf("      ******�ˡ������������������롫����������������9******\n");
	printf("      *****************************************************\n");

}


void printfcon(struct node *header, int j)                      //�����ӡ������ϵ����Ϣ����
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	while (p->next != NULL)
	{
		p = p->next;
		if (p->ID == j)
		{
			printf("��ţ�%d\n", p->ID);                            //�����������IDΪj����ϵ����Ϣ
			printf("������%s\n", p->name);
			printf("�Ա�%s\n", p->sex);
			printf("�绰��%s\n", p->phone);
			printf("QQ�ţ�%s\n", p->QQ);
			printf("���᣺%s\n", p->hometown);
			printf("���䣺%s\n", p->e_mail);
			printf("\n");
		}
	}
}



int coverdata(struct node *header, int j)                     //���帲����Ϣ����
{
	printf("�Ƿ�ɾ������ϵ�ˣ�(y/n)\n");
	fflush(stdin);

	if (getchar() == 'y')                                      //��������ַ�Ϊyʱִ�в���
	{
		struct node *prev = NULL;
		struct node *p = (struct node *)malloc(sizeof(struct node));

		while (p->next != NULL)
		{
			prev = p;
			p = p->next;
			if (p->ID == j)
			{
				prev->next = p->next;
				printf("ɾ���ɹ���\n");
				printf("\n");
				free(p);
				p = NULL;
				i--;
				return 0;                                       //��ID����jʱ����pǰһ�����ָ��p��һ����㣬�ͷ�p����i��1
			}
		}
		printf("delete error!\n");
	}
}

void setid(struct node *header)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	int j = 0;

	while (p->next != NULL)
	{
		p = p->next;                                    //����ͷ����ָ����һ�����
		p->ID = j++;                                    //����ÿ������ID
	}
}

int findnum(struct node *header, char *s, int *accumlate)     //�����ҵ���ϵ�˱�ź������ҵ���Ŵ�������accumlate
{
	int m = 0;
	int j = 0;
	struct node *p = (struct node *)malloc(sizeof(struct node));

	for (m = 0; m <= i; m++)
	{
		if (strcmp(s, p->name) == 0)
		{
			accumlate[j++] = p->ID;                             //�Ƚ��ַ���s��p->name���������ֵΪ0��������ȣ���p->ID��������
		}
		p = p->next;
	}

	return j;                                                   //�����������м���ֵ�������ҵ�������ϵ��
}


void modify(struct node *header, int j)                        //�����޸ĺ���
{
	int temp = 0;
	int rev = 1;
	struct node *p = (struct node *)malloc(sizeof(struct node));
	while (p->next != NULL)
	{
		p = p->next;
		if (p->ID == j)
		{
			printf("1��������\n");
			printf("2�����Ա�\n");
			printf("3�����绰\n");
			printf("4����qq��\n");
			printf("5����סַ\n");
			printf("6������ע\n");
			printf("��������Ҫ�޸ĵ��\n");

			do
			{
				rev = 1;
				fflush(stdin);
				if (scanf("%d", &temp) != 1)
				{
					printf("����������������룡\n");
					rev = -1;
				}
				else if (temp >= 7 || temp <= 0)
				{
					printf("����������������룡\n");
					rev = -1;                                   //��ѡ���ֵû�д�����߲�Ϊ1��6ʱ������������������
				}
			} while (rev == -1);

			switch (temp)                                        //��switch���ѡ��Ҫ�޸ĵ���Ϣ
			{
			case 1:{
					   printf("��������Ҫ�ĳɵ�������");
					   scanf("%s", p->name);
					   printf("�޸ĳɹ���\n");
					   printf("\n");
					   break;
			}

			case 2:{
					   printf("��������Ҫ�ĳɵ��Ա�");
					   scanf("%s", p->sex);
					   printf("�޸ĳɹ���\n");
					   printf("\n");
					   break;
			}

			case 3:{
					   printf("��������Ҫ�ĳɵĵ绰��");
					   scanf("%s", p->phone);
					   printf("�޸ĳɹ���\n");
					   printf("\n");
					   break;
			}

			case 4:{
					   printf("��������Ҫ�ĳɵ�qq�ţ�");
					   scanf("%s", p->QQ);
					   printf("�޸ĳɹ���\n");
					   printf("\n");
					   break;
			}

			case 5:{
					   printf("��������Ҫ�ĳɵļ��᣺");
					   scanf("%s", p->hometown);
					   printf("�޸ĳɹ���\n");
					   printf("\n");
					   break;
			}

			case 6:{
					   printf("��������Ҫ�ĳɵ����䣺");
					   scanf("%s", p->e_mail);
					   printf("�޸ĳɹ���\n");
					   printf("\n");
					   break;
			}

			default:printf("�������\n");
				break;
			}
		}
	}
}





void read_data(struct node *header)    //�й��ļ��Ĳ���
{
	FILE *fp = fopen("Maillist", "ab+");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	struct node *temp = header;

	// ����¼�ĸ���
	fread(&i, sizeof(int), 1, fp);

	int j;
	for (j = 0; j < i; j++)
	{
		int len;
		fread(&len, sizeof(int), 1, fp);

		struct node *p = (struct node *)malloc(sizeof(struct node));
		if (p == NULL)
		{
			printf("malloc error!\n");
			return;
		}

		// ��ȡ����
		int ret = fread(p, len, 1, fp);
		printf("%d\n", ret);

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = p;                                                 //�ҵ����һ����㣬�����pβ�������
		p->next = NULL;
	}

	fclose(fp);
}
void write_data(struct node *header)
{
	FILE *fp = fopen("Maillist", "wb+");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}
	// Ҫд�����
	fwrite(&i, sizeof(int), 1, fp);

	struct node *p = (struct node *)malloc(sizeof(struct node));
	while (p->next != NULL)
	{
		p = p->next;

		// д�����ݳ���
		int len = sizeof(struct node);
		fwrite(&len, sizeof(int), 1, fp);

		// д������
		fwrite(p, len, 1, fp);
	}
	fclose(fp);
}




//�������ݱ���
void list(struct node *header)                                //������ϵ���б��������������ϵ����Ϣ
{
	system("cls");

	int j = 0;

	for (j = 0; j <= i; j++)
	{
		printfcon(header, j);                                 // ����printfcon���������ÿ����ϵ�˵���Ϣ
	}
}

//������ϵ����Ϣ

//ͳ����ϵ�˸���
void statistics()                      //ͳ����ϵ�˸���
{
	printf("%d", i);
}




int insert_tail(struct node *header)                                  //���������ϵ�˺���
{
	char c = 0;
	struct node *temp = header;

	do
	{
		system("cls");
		struct node *p = (struct node *)malloc(sizeof(struct node));
		if (p == NULL)
		{
			printf("malloc error!\n");
			return -1;
		}

		printf("��������ϵ��������");                                    //¼����ϵ����Ϣ
		scanf("%s", p->name);

		printf("��������ϵ���Ա�");
		scanf("%s", p->sex);

		printf("��������ϵ�˵绰���룺");
		scanf("%s", p->phone);

		printf("��������ϵ��QQ�ţ�");
		scanf("%s", p->QQ);

		printf("��������ϵ�˼��᣺");
		scanf("%s", p->hometown);

		printf("��������ϵ������: ");
		scanf("%s", p->e_mail);

		p->ID = i;
		i++;                                                            //¼�����i++

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = p;                                                 //�ҵ����һ����㣬�����pβ�������
		p->next = NULL;

		printf("�Ƿ�������? (y/n) :");
		fflush(stdin);                                                //���������
		c = getchar();

	} while (c == 'y');                                                 //do while��䣬��c������yʱ�˳�ѭ��,�����ټ������
}


void mydelete(struct node *header)                            //����ɾ����ϵ�˺���
{
	char c = 0;
	struct node *p = (struct node *)malloc(sizeof(struct node));
	do
	{
		system("cls");

		int j = 0;
		int temp = 0;
		int accum = 0;
		int a[20] = { 0 };
		char name[20] = { 0 };

		printf("����������ɾ������ϵ�˵�������");
		scanf("%s", name);

		accum = findnum(p, name, a);                          //����findnum�����������ҵ�������ϵ�˸���accum

		if (accum == 0)
		{
			printf("����ϵ�˲����ڣ�\n");
		}

		else if (accum == 1)
		{
			temp = a[0];
			printfcon(p, temp);
			coverdata(p, temp);
		}

		else if (accum > 1)
		{
			printf("��%d����ϵ�ˣ�\n", accum);                 //����ҵ���ֹһ����ϵ�ˣ�һ���������Щ��ϵ����Ϣ���ò�����ѡ���Ƿ�Ҫɾ��
			for (j = 0; j < accum; j++)
			{
				temp = a[j];
				printfcon(p, temp);
				coverdata(p, temp);
			}
		}
		setid(p);

		printf("�Ƿ����ɾ���� (y/n): \n");
		fflush(stdin);
		c = getchar();

	} while (c == 'y');                                         //do while��䣬���������Ƿ����ɾ����ֻ������yʱ�ż���ɾ��
}


//ɾ����ϵ�˺���

void seek(struct node *header)                                //������Һ�����ͨ����������
{
	char c = 0;
	struct node *p = (struct node *)malloc(sizeof(struct node));
	do
	{
		system("cls");

		int j = 0;
		int temp = 0;
		int accum = 0;
		int a[20] = { 0 };
		char name[20] = { 0 };

		printf("������������ҵ���ϵ�˵�������");
		scanf("%s", name);

		accum = findnum(p, name, a);                          //����findnum�����������ҵ�������ϵ�˸���accum

		if (accum == 0)
		{
			printf("����ϵ�˲����ڣ�\n");
		}

		else if (accum == 1)                                   //����ҵ�һ����ϵ�ˣ���������ϵ�˵���Ϣ
		{
			temp = a[0];
			printfcon(p, temp);
		}

		else if (accum > 1)                                    //�ҵ���ֹһ����ϵ�ˣ����ȫ����ϵ����Ϣ
		{
			printf("��%d����ϵ�ˣ�\n", accum);
			for (j = 0; j < accum; j++)
			{
				temp = a[j];
				printfcon(p, temp);
			}
		}
		printf("�Ƿ��������? (y/n) :");
		fflush(stdin);
		c = getchar();

	} while (c == 'y');                                         //do while������������Ƿ�������ң�������Ϊyʱ��������
}




void revise(struct node *header)                              //�����޸���Ϣ����
{
	char c = 0;
	struct node *p = (struct node *)malloc(sizeof(struct node));
	do
	{
		system("cls");

		int j = 0;
		int temp = 0;
		int accum = 0;
		int a[20] = { 0 };
		char name[20] = { 0 };

		printf("�����������޸ĵ���ϵ�˵�������");
		scanf("%s", name);

		accum = findnum(p, name, a);

		if (accum == 0)
		{
			printf("����ϵ�˲����ڣ�\n");
		}

		else if (accum == 1)
		{
			temp = a[0];
			printfcon(p, temp);
			modify(p, temp);
		}

		else if (accum > 1)
		{
			printf("��%d����ϵ�ˣ�\n", accum);
			for (j = 0; j < accum; j++)
			{
				temp = a[j];
				printfcon(p, temp);                           //�в�ֹһ����ϵ��ʱһ���������ϵ����Ϣ�������޸�
				modify(p, temp);
			}
		}
		printf("�Ƿ�����޸�? (y/n) :\n");
		fflush(stdin);
		c = getchar();

	} while (c == 'y');                                         //do while������������Ƿ�����޸ģ�������yʱ����ѭ���޸�
}


int main()
{
	int temp;
	//�������
	int id;
	struct node *header = (struct node *)malloc(sizeof(struct node));   //����ͷָ��
	if (header == NULL)
	{
		printf("malloc error!\n");
		return -1;
	}
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
		case 1:
			regist();
			break;
		case 2:
			if (judge() == 1)
			{
				dl();
				system("cls");
				menu();
				while (1)
				{
					printf("���������ѡ��(1-9): ");
				loop:scanf("%d", &temp);
					if (temp<1 || temp>9)
					{
						printf("��������,��������1-9������ѡ��: ");
						goto loop;
					}
					switch (temp)                                                    //switch���ѡ����
					{
					case 1:{
							   insert_tail(header);
							   printf("��enter���������棡\n");
							   fflush(stdin);
							   getchar();
							   break;
					}

					case 2:{
							   list(header);
							   printf("��enter���������棡\n");
							   fflush(stdin);
							   getchar();                                       //��ͣ���棬��������˳�����ѡ�����
							   break;
					}

					case 3:{
							   mydelete(header);
							   printf("��enter���������棡\n");
							   fflush(stdin);
							   getchar();
							   break;

					}

					case 4:{
							   seek(header);
							   printf("��enter���������棡\n");
							   fflush(stdin);
							   getchar();
							   break;
					}

					case 5:{
							   revise(header);
							   printf("��enter���������棡\n");
							   fflush(stdin);
							   getchar();
							   break;
					}
					case 6:{
							   statistics();
							   printf("��enter���������棡\n");
							   fflush(stdin);
							   getchar();
							   break;

					}
					case 7:{
							   write_data(header);
							   exit(0);
					}
					case 8:{
							   list(header);
							   printf("��enter���������棡\n");
							   fflush(stdin);
							   getchar();                                       //��ͣ���棬��������˳�����ѡ�����
							   break;

					}
					case 9:{
							   exit(0);
					}

					default:{
								printf("�������!");
								printf("��enter���������棡\n");
								fflush(stdin);
								getchar();
								break;
					}
					}
				}

		case 0:
			exit(1);
			break;
		default:
			printf("\n\t\t������Ĺ��ܱ���������������룡\n");
			}

		}
		

	}
	return 0;
}