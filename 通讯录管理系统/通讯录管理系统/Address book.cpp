#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>


#define name_size 20         //姓名长度
#define hometown_size 20     //籍贯长度

struct node   //定义结构体
{
	int ID;
	char name[name_size];       //姓名
	char hometown[hometown_size];   //籍贯
	char sex[10];        //性别
	char phone[15];      //手机号
	char QQ[15];         //QQ号
	char e_mail[20];     //邮箱
	struct node *next;   //结构体指针
};

int i = 0;  //定义全局变量

//定义变量
char reg_name[30] = "", reg_pwd[10] = "";   //定义注册用户名和密码信息
char on_name[30], on_pwd[10];               //定义用户名和密码信息

//用户注册系统
void regist()
{
	//清屏
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


//菜单信息
void menu()
{

	printf("\n\n\n");
	printf("      *****************************************************\n");
	printf("      *****************************************************\n");
	printf("      \t\t\t  通讯录管理系统\n");
	printf("\n");
	printf("\t\t1.添加好友");
	printf("\t\t2.查看列表\n");
	printf("\t\t3.删除好友");
	printf("\t\t4.查找好友\n");
	printf("\t\t5.修改信息");
	printf("\t\t6.统计好友人数\n");
	printf("\t\t7.保存退出");
	printf("\t\t8.生成数据报表\n");
	printf("      *****************************************************\n");
	printf("      ******退～～～～出～～～～请～～～～按～～～～9******\n");
	printf("      *****************************************************\n");

}


void printfcon(struct node *header, int j)                      //定义打印单个联系人信息函数
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	while (p->next != NULL)
	{
		p = p->next;
		if (p->ID == j)
		{
			printf("编号：%d\n", p->ID);                            //遍历链表，输出ID为j的联系人信息
			printf("姓名：%s\n", p->name);
			printf("性别：%s\n", p->sex);
			printf("电话：%s\n", p->phone);
			printf("QQ号：%s\n", p->QQ);
			printf("籍贯：%s\n", p->hometown);
			printf("邮箱：%s\n", p->e_mail);
			printf("\n");
		}
	}
}



int coverdata(struct node *header, int j)                     //定义覆盖信息函数
{
	printf("是否删除该联系人？(y/n)\n");
	fflush(stdin);

	if (getchar() == 'y')                                      //当输入的字符为y时执行操作
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
				printf("删除成功！\n");
				printf("\n");
				free(p);
				p = NULL;
				i--;
				return 0;                                       //当ID等于j时，让p前一个结点指向p后一个结点，释放p，让i－1
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
		p = p->next;                                    //跳过头结点或指向下一个结点
		p->ID = j++;                                    //重置每个结点的ID
	}
}

int findnum(struct node *header, char *s, int *accumlate)     //定义找到联系人编号函数，找到编号存入数组accumlate
{
	int m = 0;
	int j = 0;
	struct node *p = (struct node *)malloc(sizeof(struct node));

	for (m = 0; m <= i; m++)
	{
		if (strcmp(s, p->name) == 0)
		{
			accumlate[j++] = p->ID;                             //比较字符串s和p->name，如果返回值为0，代表相等，把p->ID存入数组
		}
		p = p->next;
	}

	return j;                                                   //返回数组中有几个值，即能找到几个联系人
}


void modify(struct node *header, int j)                        //定义修改函数
{
	int temp = 0;
	int rev = 1;
	struct node *p = (struct node *)malloc(sizeof(struct node));
	while (p->next != NULL)
	{
		p = p->next;
		if (p->ID == j)
		{
			printf("1－－姓名\n");
			printf("2－－性别\n");
			printf("3－－电话\n");
			printf("4－－qq号\n");
			printf("5－－住址\n");
			printf("6－－备注\n");
			printf("请输入你要修改的项：\n");

			do
			{
				rev = 1;
				fflush(stdin);
				if (scanf("%d", &temp) != 1)
				{
					printf("输入错误！请重新输入！\n");
					rev = -1;
				}
				else if (temp >= 7 || temp <= 0)
				{
					printf("输入错误！请重新输入！\n");
					rev = -1;                                   //当选择的值没有传入或者不为1－6时。输出输入错误请重输
				}
			} while (rev == -1);

			switch (temp)                                        //用switch语句选择要修改的信息
			{
			case 1:{
					   printf("请输入你要改成的姓名：");
					   scanf("%s", p->name);
					   printf("修改成功！\n");
					   printf("\n");
					   break;
			}

			case 2:{
					   printf("请输入你要改成的性别：");
					   scanf("%s", p->sex);
					   printf("修改成功！\n");
					   printf("\n");
					   break;
			}

			case 3:{
					   printf("请输入你要改成的电话：");
					   scanf("%s", p->phone);
					   printf("修改成功！\n");
					   printf("\n");
					   break;
			}

			case 4:{
					   printf("请输入你要改成的qq号：");
					   scanf("%s", p->QQ);
					   printf("修改成功！\n");
					   printf("\n");
					   break;
			}

			case 5:{
					   printf("请输入你要改成的籍贯：");
					   scanf("%s", p->hometown);
					   printf("修改成功！\n");
					   printf("\n");
					   break;
			}

			case 6:{
					   printf("请输入你要改成的邮箱：");
					   scanf("%s", p->e_mail);
					   printf("修改成功！\n");
					   printf("\n");
					   break;
			}

			default:printf("输入错误！\n");
				break;
			}
		}
	}
}





void read_data(struct node *header)    //有关文件的操作
{
	FILE *fp = fopen("Maillist", "ab+");
	if (fp == NULL)
	{
		perror("fopen");
		return;
	}

	struct node *temp = header;

	// 读记录的个数
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

		// 读取数据
		int ret = fread(p, len, 1, fp);
		printf("%d\n", ret);

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = p;                                                 //找到最后一个结点，将结点p尾插进链表
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
	// 要写入个数
	fwrite(&i, sizeof(int), 1, fp);

	struct node *p = (struct node *)malloc(sizeof(struct node));
	while (p->next != NULL)
	{
		p = p->next;

		// 写入数据长度
		int len = sizeof(struct node);
		fwrite(&len, sizeof(int), 1, fp);

		// 写入数据
		fwrite(p, len, 1, fp);
	}
	fclose(fp);
}




//生成数据报表
void list(struct node *header)                                //定义联系人列表函数，输出所有联系人信息
{
	system("cls");

	int j = 0;

	for (j = 0; j <= i; j++)
	{
		printfcon(header, j);                                 // 调用printfcon函数，输出每个联系人的信息
	}
}

//查找联系人信息

//统计联系人个数
void statistics()                      //统计联系人个数
{
	printf("%d", i);
}




int insert_tail(struct node *header)                                  //定义添加联系人函数
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

		printf("请输入联系人姓名：");                                    //录入联系人信息
		scanf("%s", p->name);

		printf("请输入联系人性别：");
		scanf("%s", p->sex);

		printf("请输入联系人电话号码：");
		scanf("%s", p->phone);

		printf("请输入联系人QQ号：");
		scanf("%s", p->QQ);

		printf("请输入联系人籍贯：");
		scanf("%s", p->hometown);

		printf("请输入联系人邮箱: ");
		scanf("%s", p->e_mail);

		p->ID = i;
		i++;                                                            //录完后让i++

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = p;                                                 //找到最后一个结点，将结点p尾插进链表
		p->next = NULL;

		printf("是否继续添加? (y/n) :");
		fflush(stdin);                                                //清除缓冲区
		c = getchar();

	} while (c == 'y');                                                 //do while语句，当c不等于y时退出循环,即不再继续添加
}


void mydelete(struct node *header)                            //定义删除联系人函数
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

		printf("请输入你想删除的联系人的姓名：");
		scanf("%s", name);

		accum = findnum(p, name, a);                          //调用findnum函数，并把找到几个联系人赋给accum

		if (accum == 0)
		{
			printf("此联系人不存在！\n");
		}

		else if (accum == 1)
		{
			temp = a[0];
			printfcon(p, temp);
			coverdata(p, temp);
		}

		else if (accum > 1)
		{
			printf("有%d个联系人！\n", accum);                 //如果找到不止一个联系人，一个个输出这些联系人信息，让操作者选择是否要删除
			for (j = 0; j < accum; j++)
			{
				temp = a[j];
				printfcon(p, temp);
				coverdata(p, temp);
			}
		}
		setid(p);

		printf("是否继续删除？ (y/n): \n");
		fflush(stdin);
		c = getchar();

	} while (c == 'y');                                         //do while语句，用来控制是否继续删除，只有输入y时才继续删除
}


//删除联系人函数

void seek(struct node *header)                                //定义查找函数，通过姓名查找
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

		printf("请输入你想查找的联系人的姓名：");
		scanf("%s", name);

		accum = findnum(p, name, a);                          //调用findnum函数，并把找到几个联系人赋给accum

		if (accum == 0)
		{
			printf("此联系人不存在！\n");
		}

		else if (accum == 1)                                   //如果找到一个联系人，输出这个联系人的信息
		{
			temp = a[0];
			printfcon(p, temp);
		}

		else if (accum > 1)                                    //找到不止一个联系人，输出全部联系人信息
		{
			printf("有%d个联系人！\n", accum);
			for (j = 0; j < accum; j++)
			{
				temp = a[j];
				printfcon(p, temp);
			}
		}
		printf("是否继续查找? (y/n) :");
		fflush(stdin);
		c = getchar();

	} while (c == 'y');                                         //do while语句用来控制是否继续查找，当输入为y时继续查找
}




void revise(struct node *header)                              //定义修改信息函数
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

		printf("请输入你想修改的联系人的姓名：");
		scanf("%s", name);

		accum = findnum(p, name, a);

		if (accum == 0)
		{
			printf("此联系人不存在！\n");
		}

		else if (accum == 1)
		{
			temp = a[0];
			printfcon(p, temp);
			modify(p, temp);
		}

		else if (accum > 1)
		{
			printf("有%d个联系人！\n", accum);
			for (j = 0; j < accum; j++)
			{
				temp = a[j];
				printfcon(p, temp);                           //有不止一个联系人时一个个输出联系人信息，让其修改
				modify(p, temp);
			}
		}
		printf("是否继续修改? (y/n) :\n");
		fflush(stdin);
		c = getchar();

	} while (c == 'y');                                         //do while语句用来控制是否继续修改，当输入y时继续循环修改
}


int main()
{
	int temp;
	//定义变量
	int id;
	struct node *header = (struct node *)malloc(sizeof(struct node));   //定义头指针
	if (header == NULL)
	{
		printf("malloc error!\n");
		return -1;
	}
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
					printf("请输入你的选择(1-9): ");
				loop:scanf("%d", &temp);
					if (temp<1 || temp>9)
					{
						printf("输入有误,请重新在1-9中做出选择: ");
						goto loop;
					}
					switch (temp)                                                    //switch语句选择功能
					{
					case 1:{
							   insert_tail(header);
							   printf("按enter返回主界面！\n");
							   fflush(stdin);
							   getchar();
							   break;
					}

					case 2:{
							   list(header);
							   printf("按enter返回主界面！\n");
							   fflush(stdin);
							   getchar();                                       //暂停界面，有输入才退出本次选择语句
							   break;
					}

					case 3:{
							   mydelete(header);
							   printf("按enter返回主界面！\n");
							   fflush(stdin);
							   getchar();
							   break;

					}

					case 4:{
							   seek(header);
							   printf("按enter返回主界面！\n");
							   fflush(stdin);
							   getchar();
							   break;
					}

					case 5:{
							   revise(header);
							   printf("按enter返回主界面！\n");
							   fflush(stdin);
							   getchar();
							   break;
					}
					case 6:{
							   statistics();
							   printf("按enter返回主界面！\n");
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
							   printf("按enter返回主界面！\n");
							   fflush(stdin);
							   getchar();                                       //暂停界面，有输入才退出本次选择语句
							   break;

					}
					case 9:{
							   exit(0);
					}

					default:{
								printf("输入错误!");
								printf("按enter返回主界面！\n");
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
			printf("\n\t\t您输入的功能编号有误，请重新输入！\n");
			}

		}
		

	}
	return 0;
}