#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>

#define name_size 20
#define hometown_size 20

typedef struct student   //定义结构体
{
	char name[name_size];       //姓名
	char hometown[hometown_size];   //籍贯
	char sex[10];        //性别
	char phone[15];      //手机号
	char QQ[15];         //QQ号
	char e_mail[20];     //邮箱
	struct student *next;   //结构体指针
}stu;

stu *head = NULL;  //先定义链表头结点指针
FILE *fp = NULL;    //再定义文件指针
char filename[20];  //最后定义文件名

//定义变量
char reg_name[30] = "", reg_pwd[10] = "";
char on_name[30], on_pwd[10];

//用户注册系统
void regist()
{
	//清屏
	system("pause");
	system("cls");

	printf("\n\n\t\t\t欢迎使用通讯录注册系统\n\n");
	while (1)
	{
		//输入用户名
		printf("\t\t请输入用户名[不能大于10个字符]：");
		scanf("%s", reg_name);

		//判断用户名
		if (strlen(reg_name) <= 10)
		{
			while (1)
			{
				//输入密码
				printf("\n\t\t请输入密码[密码长度为八位]：");
				scanf("%s", reg_pwd);

				//判断密码
				if (strlen(reg_pwd) == 8)
				{
					printf("\n\n\t\t注册成功，您的用户名是%s,密码是%s\n\n", reg_name, reg_pwd);
					break;
				}
				else
				{
					printf("\n\t\t密码的长度为%d，请重新输入\n", strlen(reg_pwd));
				}
			}
			break;
		}
		else
		{
			printf("\n\t\t用户名的长度为%d，请重新输入\n\n", strlen(reg_name));
		}
	}
}

//判断是否注册
int judge()
{
	if (strcmp(reg_name, "") == 0 && strcmp(reg_pwd, "") == 0)
	{
		printf("\n\n\t\t您尚未注册，请先注册！\n\n");
		return 0;
	}
	else
	{
		return 1;
	}
}

//用户登录
void dl()
{
	int i;
	system("pause");
	system("cls");

	printf("\n\n\t\t\t欢迎使用通讯录登录系统\n\n");
	//三次登录验证
	for (i = 1; i <= 3; i++)
	{
		printf("\t\t请输入用户名:");
		scanf("%s", on_name);
		printf("\n\t\t请输入密  码:");
		scanf("%s", on_pwd);
		if (strcmp(reg_name, on_name) == 0 && strcmp(reg_pwd, on_pwd) == 0)
		{
			printf("\n\n\t\t登录成功，欢迎使用通讯录系统\n\n");
			break;
		}
		else
		{
			printf("\n\n\t\t登录失败，请重新登录，您还有%d次机会\n\n", 3 - i);
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
	printf("      \t\t\t  通讯录管理系统\n");
	printf("\n");
	printf("\t\t1.输入数据");
	printf("\t\t2.显示数据\n");
	printf("\t\t3.插入数据");
	printf("\t\t4.删除数据\n");
	printf("\t\t5.查看数据");
	printf("\t\t6.修改数据\n");
	printf("\t\t7.保存数据");
	printf("\t\t8.生成数据报表\n");
	printf("      *****************************************************\n");
	printf("      ******退～～～～出～～～～请～～～～按～～～～10******\n");
	printf("      *****************************************************\n");

}
void input(stu *p1)  //输入相关数据
{
	printf("输入联系人姓名:");
	scanf("%s", &p1->name);
	printf("输入联系人籍贯:");
	scanf("%s", &p1->hometown);
	printf("输入联系人性别:");
	scanf("%s", &p1->sex);
	printf("输入联系人手机号:");
	scanf("%s", &p1->phone);
	printf("输入联系人QQ号");
	scanf("%s", &p1->QQ);
	printf("输入联系人邮箱:");
	scanf("%s", &p1->e_mail);
}
void main()
{
	int i;
	//定义变量
	int id;
	while (1)
	{
		system("pause");
		system("cls");
		//输出界面
		printf("\n\n\t\t\t通讯录管理系统\n\n");

		printf("\t\t\t1:注册\n");
		printf("\t\t\t2:登录\n");
		printf("\t\t\t0:退出\n\n");

		//输入功能编号
		printf("\t\t请选择功能编号：");
		scanf("%d", &id);

		//判断
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
					printf("请输入你的选择(1-9): ");
					loop:scanf("%d", &i);
					if (i<1 || i>9)
					{
						printf("输入有误,请重新在1-9中做出选择: ");
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
			printf("\n\t\t您输入的功能编号有误，请重新输入！\n");
		}

	}
	
}