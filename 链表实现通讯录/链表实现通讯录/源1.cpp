#define _CRT_SECURE_NO_WARNINGS 1
#include <conio.h>
#include <stdio.h>
#include <malloc.h>  //�õ�ָ���СΪSize���ڴ���������ֽڵ�ָ��//
#include <string.h>
#include <stdlib.h>   
#define NULL 0
#define LEN sizeof(struct node)  //�����ֽ�//
int ID=0;
struct node
{
	int ID;
	char name[30];     //����
	char work[30];     //ְҵ
	char phone[30];    //�ֻ�
	char QQ[20];       //QQ
	char email[30];    //�����ʼ�
	char address[30];  //ͨѶ��ַ
	struct node *next;
};

//�������
char reg_name[30] = "", reg_pwd[10] = "";   //����ע���û�����������Ϣ
char on_name[30], on_pwd[10];               //�����û�����������Ϣ


//�û�ע��ϵͳ
void regist()
{
	//����

	printf("\n\n\t\t\t��ӭʹ��ͨѶ¼ע��ϵͳ\n\n");
	while (1)
	{
		system("cls");
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
void log_in()
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

struct node *shifang(struct node *head); // �ͷ��ڴ溯������
//��������������ͷ��������
struct node *creat(void)       
{
	struct node *head,*p1,*p2;
	char name[20];
	ID=0;
	p1 = (struct node *)malloc(LEN);
	p2 = (struct node *)malloc(LEN);   
	printf("������ͨѶ¼������!\n��������Ϊ0ʱ��ʾ�������!\n");
	printf("����������: ");
	fflush(stdin);
	gets(name);
	if(strcmp(name,"0")!=0)
	{
		strcpy(p1->name,name);
		printf("������ְҵ:");     gets(p1->work);
		printf("�������ֻ�:");     gets(p1->phone);
		printf("������QQ:");       gets(p1->QQ);
		printf("����������ʼ�:"); gets(p1->email);
		printf("������ͨѶ��ַ:");  gets(p1->address);
		head=NULL;
		while(1)
		{
			ID++;   //��¼ͨѶ¼��������
			if(ID==1)
				head=p1;
			else
				p2->next=p1;
			p2=p1;
			printf("����������:");
			gets(name);
			if(strcmp(name,"0")==0)
			{
				break;
			}
			else
			{
				p1=(struct node *)malloc(LEN);
				strcpy(p1->name,name);
				printf("������ְҵ:"); gets(p1->work);
				printf("�������ֻ�:"); gets(p1->phone);
				printf("������QQ:");gets(p1->QQ);
				printf("����������ʼ�:"); gets(p1->email);
				printf("������ͨѶ��ַ:");  gets(p1->address);
			}
		}
		p2->next=NULL;
		return head;
	}
	else
		return 0;
}
//�������
void print(struct node *head)
{
	struct node *p;
	if (head != NULL)
	{
		p = head;
		printf("��ͨѶ¼���ڹ���%d��:\n", ID);
		printf("---����-------ְҵ--------�ֻ�-------QQ-------Email-------ͨѶ��ַ\n");
		printf("==================================================================\n");
		do
		{
			printf("== %s", p->name); printf("       ");
			printf("%s", p->work); printf("       ");
			printf("%s", p->phone); printf("       ");
			printf("%s", p->QQ); printf("       ");
			printf("%s", p->email); printf("       ");
			printf("%s", p->address); printf("       \n");
			p = p->next;
		} while (p != NULL);
		printf("==================================================================\n");
	}
	else
		printf("ͨѶ¼Ϊ��,�޷����!\n");
}

//���Ӻ���
struct node *insert(struct node *head) 
{
	struct node *p0,*p1,*p2;
	char name[20];
	p1=head;
	printf("���������ӵ�����:\n");
	printf("����������:"); gets(name);
	if(strcmp(name,"0")==0)
	{
		printf("��������Ϊ0,����ʧ��!\n");
		return(head);
	}
	else
	{
		p0=(struct node *)malloc(LEN);
		strcpy(p0->name,name);
		printf("������ְҵ:"); gets(p0->work);
		printf("�������ֻ�:"); gets(p0->phone);
		printf("������QQ:"); gets(p0->QQ);
		printf("����������ʼ�:"); gets(p0->email);
		printf("������ͨѶ��ַ:");  gets(p0->address);
		ID++;
		if(head==NULL)
		{
			head=p0;
			p0->next=NULL;
			return head;
		}
		else
		{
			while(strcmp(p0->name,p1->name)>0&&(p1->next!=NULL))
			{
				p2=p1;
				p1=p1->next;
			}
			if(strcmp(p0->name,p1->name)<0 || strcmp(p0->name,p1->name)==0)
			{
				if(head==p1)
				{
					head=p0;
				}
				else
				{
					p2->next=p0;
				}
				p0->next=p1;
			}
			else
			{
				p1->next=p0;
				p0->next=NULL;
			}
			return head;
		}
	}
}
struct node* delete_txl(struct node *head)
{
	struct node *p,*q;
	char name[30];
	if(head==NULL)
	{
		printf("ͨѶ¼Ϊ��,�޷���ʾ!\n");
		return head;
	}
	p=head;
	printf("��������Ҫɾ�����˵�����:");
	gets(name);
	if(strcmp(head->name,name)==0)
	{
		head=head->next;
		free(p);
		printf("ɾ�������ɹ���\n");
		return head;
	}
	else
	{
		q=head,p=head->next;
		while(p!=NULL)
		{
			if(strcmp(p->name,name)==0)
			{
				q->next=p->next;
				free(p);
				printf("ɾ�������ɹ���\n");
				return head;
			}
			p=p->next;
			q=q->next;
		}
	}
}
//��ʾ����
struct node *display(struct node *head)
{
	struct node *p1,*p2;
	char name[30];
	int m;
	if(head==NULL)
	{
		printf("ͨѶ¼Ϊ��,�޷���ʾ!\n");
		return head;
	}
	p1=head;
	m=0;
	printf("��������Ҫ��ʾ�˵�����:");
	gets(name);
	while(p1!=NULL)
	{
		while((strcmp(p1->name,name))!=0 && p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(strcmp(p1->name,name)==0)
		{
			m++;
			printf("%s��ͨѶ��������:\n",name);
			printf("---����--------ְҵ--------�ֻ�-------QQ-------Email------ͨѶ��ַ\n");
			printf("==================================================================\n");
			printf("== %s",p1->name);printf("       ");
			printf("%s",p1->work);printf("       ");
			printf("%s",p1->phone);printf("       ");
			printf("%s", p1->QQ); printf("       ");
			printf("%s",p1->email);printf("       ");
			printf("%s",p1->address); printf("       \n");
			printf("==================================================================\n");
		}
		p1=p1->next;
	}
	if(m==0)
	{
		printf("����δ�ڱ�ͨѶ¼��!\n");
	}
	return(head);
}
 
//������
struct node *paixu(struct node *head)
{
	struct node *p1,*p2;
	int i,j;
	struct node1
	{
		char name[30];
		char work[30];
		char phone[30];
		char QQ[20];
		char email[30];
		char address[30];
	};
	struct node1 px[200];
	struct node1 temp;
	if(head==NULL)
	{
		printf("ͨѶ¼Ϊ��,�޷�����!\n");
		return(head);
	}
	p1=head;
	for(i=0;i<ID,p1!=NULL;i++)
	{
		strcpy(px[i].name,p1->name);
		strcpy(px[i].work,p1->work);
		strcpy(px[i].phone,p1->phone);
		strcpy(px[i].QQ, p1->QQ);
		strcpy(px[i].email,p1->email);
		strcpy(px[i].address,p1->address);
		p2=p1;
		p1=p1->next;
	}
	head=shifang(head);
	for(j=0;j<ID-1;j++)
	{
		for(i=j+1;i<ID;i++)
		{
			if(strcmp(px[i].name,px[j].name)<0)
			{
				temp=px[i];
				px[i]=px[j];
				px[j]=temp;
			}
		}
	}
	p1=(struct node *)malloc(LEN);
	p2=p1;
	strcpy(p1->name,px[0].name);
	strcpy(p1->work,px[0].work);
	strcpy(p1->phone,px[0].phone);
	strcpy(p1->QQ, px[0].QQ);
	strcpy(p1->email,px[0].email);
	strcpy(p1->address,px[0].address);
 
	head=p1;
	for(i=1;i<ID;i++)
	{
		p1=(struct node *)malloc(LEN);
		strcpy(p1->name,px[i].name);
		strcpy(p1->work,px[i].work);
		strcpy(p1->phone,px[i].phone);
		strcpy(p1->QQ, px[i].QQ);
		strcpy(p1->email,px[i].email);
		strcpy(p1->address,px[i].address);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	printf("�����������Ϊ:\n");
	print(head);
	return(head);
}
//�������Һ���
struct node *search(struct node *head)
{
	struct node *p1,*p2;
	int m;
	char name[30];
	if(head==NULL)
	{
		printf("ͨѶ¼Ϊ��,�޷��������!\n");
		return(head);
	}
	p1=head;
	printf("********************\n");
	printf("**  ��������Ҫ���ҵ�����  **\n");
	printf("********************\n");
	m=0;
	gets(name);
	while(p1!=NULL)
	{
		while(strcmp(p1->name,name)!=0&&p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(strcmp(p1->name,name)==0)
		{
			m++;
			printf("����ҵ�������:\n");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("++ %s        %s       %s       %s       %s        %s\n",p1->name,p1->work,p1->phone,p1->QQ,p1->email,p1->address);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
		p1=p1->next;
 
		if(m==0)
		{
			printf("����δ�ڱ�ͨѶ¼��!\n");
		}
		break;
	}
 
	return(head);
}
 
//�ͷ��ڴ溯��
struct node *shifang(struct node *head)
{
	struct node *p1;
	while(head!=NULL)
	{
		p1=head;
		head=head->next;
		free(p1);
	}
	return(head);
}
 
//�ļ�д�뺯��
void save(struct node *head)
{
	FILE *fp;
	struct node *p1;
	if(head==NULL)
	{
		printf("ͨѶ¼Ϊ��,�޷��洢!\n");
		return;
	}
	fp=fopen("stuInfo.txt","w");
	if(fp==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	p1=head;
	fprintf(fp,"����    ְҵ      �ֻ�     QQ        Email     ͨѶ��ַ\n");
	for(;p1!=NULL;) 
	{
		fprintf(fp,"%s       %s       %s        %s        %s       %s\n",p1->name,p1->work,p1->phone,p1->QQ,p1->email,p1->address);
		p1=p1->next;
	}
	printf("�������!\n");
	fclose(fp);
}
 
//�ļ���������
struct node *load(struct node *head)
{
	FILE *fp;
	char tong[30];
	struct node *p1,*p2;
	fp=fopen("stuInfo.txt","r");
	if(fp==NULL)
	{
		printf("��ͨѶ¼��������,�޷����!\n");
		return(head);
	}
	else
	{
		head=shifang(head);
	}
	p1=(struct node *)malloc(LEN);
	fscanf(fp,"%s%s%s%s%s%s",&p1->name,&p1->work,&p1->phone,&p1->QQ,&p1->email,&p1->address);
	if(feof(fp)!=0)
	{
		printf("�ļ�Ϊ��,�޷���!\n");
		return(head);
	}
	else
	{
		rewind(fp);
		p2=p1;
		head=p1;
		ID=0;
		while(feof(fp)==0)
		{
			fscanf(fp,"%s%s%s%s%s%s",&p1->name,&p1->work,&p1->phone,p1->QQ,&p1->email,&p1->address);
			if(feof(fp)!=0)
				break;
			p2->next=p1;
			p2=p1;
			p1=(struct node *)malloc(LEN);
			ID++;
		}
		p2->next=NULL;
		p1=head;
		head=head->next;
		ID=ID-1;
		free(p1);
		print(head);
		printf("�����!\n");
		return(head);
	}
	fclose(fp);
}
 
//�ۺϲ�������
struct node *select(struct node *head)
{
	char num[10];
	while(1)
	{
		printf("*********************\n");
		printf("*** 1 ��������      ****\n");
		printf("*** 2 ������ʾ      ****\n");
		printf("*** 3 ����          ****\n");
		printf("*** 4 �˳�          ****\n");
		printf("*********************\n");
		printf("��������ѡ��Ĳ���:");
		gets(num);
		switch(*num)
		{
		case '1':
			{
				head=search(head);                          //��������
				print(head);
			}
			break;
		case '2':
			{
				head=display(head);                          //��ʾ
			}
			break;
		case '3':
			{
				head=insert(head);                           //����
				print(head);
			}
			break;
		case '4':
			return head;
		default:
			printf("�������󣬴������!\n");
			break;
		}
		if(strcmp(num,"6")==0)
			break;
	}
	return head;
}
void menu()
{
	printf("********************************************\n");
	printf("***		1 ����ͨѶ¼            ****\n");
	printf("***		2 ����������            ****\n");
	printf("***		3 �ۺϲ���(����,����)   ****\n");
	printf("***		4 ����                  ****\n");
	printf("***		5 ��		        ****\n");
	printf("***		6 ɾ��			****\n");
	printf("***		7 �������ݱ���		****\n");
	printf("***		8 ͳ������		****\n");
	printf("***		9 �˳�			****\n");
	printf("********************************************\n");
	printf("��������ѡ��Ĳ���:");
}

void choose()
{
	struct node *head = NULL;
	int num = 0;
	while (1)
	{
		menu();
		scanf("%d", &num);
		switch (num)
		{
		case  1:
		{
				   if (head == NULL)
				   {
					   head = creat();                                //����
					   //print(head);
				   }
				   else
				   {
					   head = shifang(head);
					   head = creat();                                //���´���
					   //print(head);
				   }
		}
			break;
		case  2:
		{
				   head = paixu(head);                               //����
		}
			break;
		case  3:
		{
				   head = select(head);                              //�ۺϲ���
		}
			break;
		case  4:
		{
				   save(head);                                   //�ļ�����
				   //print(head);
		}
			break;
		case  5:
		{
				   head = load(head);                              //�ļ����
		}
			break;
		case  6:
		{
				   head = delete_txl(head);                           //ɾ��
				   //print(head);
		}
			break;
		case  7:
		{
				   print(head);                              //�������ݱ���
		}
			break;
		case  8:
		{
				   printf("ͨѶ¼����Ϊ:%d\n", ID);                              //ͳ��ͨѶ¼����
		}
			break;
		case  9:
			head = shifang(head);
			exit(1);
		default:
			printf("�������󣬴������!\n");
			break;
		}
		system("cls");
	}
}
//������
void main()
{
	int flag = 0;
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
	printf("*=*               ����˵��                *=*\n");
	printf("*=*    �뼰ʱ���洴����ϵ�ͨѶ¼����!    *=*\n");
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
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
		scanf("%d", &flag);

		//�ж�
		switch (flag)
		{
			case 1:
				{
					  regist();
					  break;
				}
			case 2:
				{
					  if (judge() == 1)
					  {
						  log_in();
						  choose();
					  }
					  break;
				}
			case 0:
				{
					  exit(1);
					  break;
				}
			default:
				printf("\n\t\t������Ĺ��ܱ���������������룡\n");
		}

	}

}