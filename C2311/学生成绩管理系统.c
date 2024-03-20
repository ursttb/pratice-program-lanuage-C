#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#if(1)


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

const char A[10] = "111111";            /*教师密码*/


struct Student                              /*定义结构体*/
{
	char name[50];         /*学生姓名*/
	char num[20];        /*学生学号*/
	float Chinese;      /*语文成绩*/
	float math;         /*数学成绩*/
	float English;      /*英语成绩*/
	float sum;          /*总成绩*/
	struct Student* next;
};
struct Student* list = NULL;    /*建立表头*/
int login()      /*登录   学生无需密码*/
{
	while (1)
	{
		int i = 3;
		char ch = '0';
		do
		{
			printf("************************\n");
			printf("*** 学生成绩管理系统 ***\n");
			printf("************************\n");
			printf("*****  1.教师登录  *****\n");
			printf("*****  2.学生登录  *****\n");
			printf("************************\n");
			ch = _getch();
		} while ((ch != '1') && (ch != '2'));
		if (ch == '1')
		{
			while (1)
			{
				char a[10];
				printf("请输入密码\n");
				scanf_s("%s", a, 10);
				if (strcmp(A, a) == 0)break;
				printf("密码错误\n");
				system("pause");
				system("cls");
				i--;
				if (i == 0)
				{
					printf("密码多次错误，已退出系统\n");
					system("pause");
					exit(0);
				}
			}
			system("cls");
			return 1;
		}
		else
		{
			system("cls");
			return 0;
		}
	}
}
void getInput(struct Student* student)         /*输入函数*/
{
	printf("【录入成绩】\n");
	printf("请输入姓名:\n");
	scanf_s("%s", student->name, 50);
	printf("请输入学号:\n");
	scanf_s("%s", student->num, 20);
	printf("请输入语文成绩:\n");
	scanf_s("%f", &student->Chinese);
	printf("请输入数学成绩:\n");
	scanf_s("%f", &student->math);
	printf("请输入英语成绩:\n");
	scanf_s("%f", &student->English);
	student->sum = student->Chinese + student->math + student->English;
}
void addStudent(struct Student** list)      /*初始化+建立链表*/
{
	struct Student* student, * temp;
	student = (struct Student*)malloc(sizeof(struct Student));/*申请内存*/
	getInput(student);                   /*输入成绩信息*/
	if (*list != NULL)      /*链表不为空，头插法*/
	{
		temp = *list;
		*list = student;
		student->next = temp;
	}
	else       /*链表为空，建立链表*/
	{
		*list = student;
		student->next = NULL;
	}
}
void printStudent(struct Student* student)     /*打印单个学生成绩*/
{
	printf("%s\t", student->name);
	printf("%s\t\t", student->num);
	printf("%.2f\t", student->Chinese);
	printf("%.2f\t", student->math);
	printf("%.2f\t", student->English);
	printf("%.2f\t\n", student->sum);

}
void Delete(struct Student* list, char* name)  /*删除学生成绩*/
{
	struct Student* student;
	struct Student* temp = NULL;
	student = list;
	if (student == NULL)
	{
		printf("该学生成绩未录入\n");
		return;
	}
	if (student->next == NULL)
	{
		temp = student;
		free(temp);
		list = NULL;
		printf("删除成功...\n");
		return;
	}
	else
	{
		while (student != NULL && strcmp(student->name, name))
		{
			temp = student;
			student = student->next;
		}
		if (student == NULL)
		{
			printf("该学生成绩未录入\n");
			return;
		}
		else
		{
			temp->next = student->next;
			free(student);
			printf("删除成功...\n");
		}
	}
}
void Alter(struct Student* list, char* name)   /*修改成绩*/
{
	struct Student* student;
	struct Student* temp = NULL;
	student = list;
	if (student == NULL)
	{
		printf("该学生成绩未录入\n");
		return;
	}

	while (student != NULL && strcmp(student->name, name))
	{
		temp = student;
		student = student->next;
	}
	if (student == NULL)
	{
		printf("该学生成绩未录入\n");
		return;
	}
	else
	{
		system("cls");
		while (1)
		{
			char ch = '0';
			do
			{
				system("cls");
				printf("0.退出修改\n");
				printf("1.修改姓名\n");
				printf("2.修改学号\n");
				printf("3.修改语文成绩\n");
				printf("4.修改数学成绩\n");
				printf("5.修改英语成绩\n");
				ch = _getch();
			} while ((ch < '0') || (ch > '5'));
			switch (ch)
			{
			case '0':
			{
				printf("退出成功...\n");
				Sleep(2000);
				return;
			}
			case '1':
			{
				printf("请输入新的名字：\n");
				scanf_s("%s", student->name, 50);
				printf("修改成功...\n");
				Sleep(2000);
				system("cls");
				break;
			}
			case '2':
			{
				printf("请输入新的学号：\n");
				scanf_s("%s", student->num, 20);
				printf("修改成功...\n");
				Sleep(2000);
				system("cls");
				break;
			}
			case '3':
			{
				printf("请输入新的语文成绩：\n");
				scanf_s("%f", &student->Chinese);
				printf("修改成功...\n");
				Sleep(2000);
				system("cls");
				student->sum = student->Chinese + student->math + student->English;
				break;
			}
			case '4':
			{
				printf("请输入新的数学成绩：\n");
				scanf_s("%f", &student->math);
				printf("修改成功...\n");
				Sleep(2000);
				system("cls");
				student->sum = student->Chinese + student->math + student->English;
				break;
			}
			case '5':
			{
				printf("请输入新的英语成绩：\n");
				scanf_s("%f", &student->English);
				printf("修改成功...\n");
				Sleep(2000);
				system("cls");
				student->sum = student->Chinese + student->math + student->English;
				break;
			}
			default:
				break;
			}
		}
	}

}
void Search(struct Student* list, char* name)  /*查询成绩*/
{
	struct Student* student;
	struct Student* temp = NULL;
	student = list;
	if (student == NULL)
	{
		printf("该学生成绩未录入\n");
		return;
	}

	while (student != NULL && strcmp(student->name, name) && strcmp(student->num, name))
	{
		temp = student;
		student = student->next;
	}
	if (student == NULL)
	{
		printf("该学生成绩未录入\n");
		return;
	}
	else
	{
		printf("姓名\t学号\t\t语文\t数学\t英语\t总分\n");
		printStudent(student);
	}

}
void printList(struct Student* list)      /*打印成绩单*/
{
	struct Student* p;	       /*输出链表*/
	p = list;
	if (p == NULL)
	{
		printf("学生成绩未录入\n");
	}
	if (list != NULL)
	{
		printf("姓名\t学号\t\t语文\t数学\t英语\t总分\n");
		for (; p != NULL;)
		{
			printStudent(p);
			p = p->next;
		}
	}
}
void Save(const char* filebook, struct Student* list)    /*保存成绩信息*/
{
	FILE* fp;
	errno_t i = fopen_s(&fp, filebook, "w"); /*以写的方式打开文件*/
	if (list == NULL)
	{
		fclose(fp);
		return;
	}
	struct Student* student = list;
	if (fp != 0)
	{
		while (student != NULL)  /*将图书信息写入文件*/
		{
			fprintf(fp, "%s\t", student->name);
			fprintf(fp, "%s\t\t", student->num);
			fprintf(fp, "%f\t", student->Chinese);
			fprintf(fp, "%f\t", student->math);
			fprintf(fp, "%f\t", student->English);
			fprintf(fp, "%f\t", student->sum);
			student = student->next;
		}
		fclose(fp);
	}
}
void Insert(struct Student** list, struct Student tempstudent)/*将成绩信息插入链表*/
{
	struct Student* temp;
	struct Student* student;
	temp = &tempstudent;
	student = (struct Student*)malloc(sizeof(struct Student));   /*申请内存*/
	memcpy((char*)student, (char*)temp, sizeof(struct Student));/*复制成绩信息*/
	temp = NULL;
	if (*list != NULL)  /*头插法*/
	{
		temp = *list;
		*list = student;
		student->next = temp;
	}
	else      /*当前链表为空，建立新链表*/
	{
		*list = student;
		student->next = NULL;
	}
}
void Read(const char* filebook, struct Student** list)   /*读取成绩信息*/
{
	FILE* fp;
	errno_t j = fopen_s(&fp, filebook, "r");  /*以读的方式打开文件*/
	if (fp == NULL)
	{
		errno_t k = fopen_s(&fp, filebook, "w+");/*如果没有该文件就创建*/
	}
	if (fp != 0)
	{
		struct Student tempstudent;      /*将文件成绩信息读入链表*/
		while (fscanf_s(fp, "%s\t", tempstudent.name, 50) != EOF)
		{
			fscanf_s(fp, "%s\t\t", tempstudent.num, 20);
			fscanf_s(fp, "%f\t", &tempstudent.Chinese);
			fscanf_s(fp, "%f\t", &tempstudent.math);
			fscanf_s(fp, "%f\t", &tempstudent.English);
			fscanf_s(fp, "%f\t", &tempstudent.sum);
			tempstudent.next = NULL;
			Insert(list, tempstudent);
		}
		fclose(fp);
	}
}
void Sort(struct Student* list)   /*成绩排序*/
{
	struct Student* student;
	student = list;
	if (student == NULL)
	{
		printf("学生成绩未录入\n");
		return;
	}
	for (; student->next != NULL; student = student->next)
	{
		if (student->sum < student->next->sum)
		{
			struct Student* temp;
			temp = (struct Student*)malloc(sizeof(struct Student));
			memcpy((char*)temp->name, (char*)student->name, 50);
			memcpy((char*)temp->num, (char*)student->num, 20);
			temp->Chinese = student->Chinese;
			temp->math = student->math;
			temp->English = student->English;
			temp->sum = student->sum;
			memcpy((char*)student->name, (char*)student->next->name, 50);
			memcpy((char*)student->num, (char*)student->next->num, 20);
			student->Chinese = student->next->Chinese;
			student->math = student->next->math;
			student->English = student->next->English;
			student->sum = student->next->sum;
			memcpy((char*)student->next->name, (char*)temp->name, 50);
			memcpy((char*)student->next->num, (char*)temp->num, 20);
			student->next->Chinese = temp->Chinese;
			student->next->math = temp->math;
			student->next->English = temp->English;
			student->next->sum = temp->sum;
			free(temp);
		}
	}
}
void Menu()/*打印菜单*/
{
	printf("************************\n");
	printf("*** 学生成绩管理系统 ***\n");
	printf("************************\n");
	printf("*****  1.录入成绩  *****\n");
	printf("*****  2.查询成绩  *****\n");
	printf("*****  3.修改成绩  *****\n");
	printf("*****  4.删除成绩  *****\n");
	printf("*****  5.成绩排序  *****\n");
	printf("*****  6.输出成绩单 ****\n");
	printf("*****  0.退出      *****\n");
	printf("************************\n");
}
void Work1()  /*教师系统*/
{
	while (1)
	{
		char ch = '0';

		Menu();
		do
		{
			ch = _getch();      /*功能选择*/
		} while ((ch < '0') || (ch > '6'));
		switch (ch)
		{
		case '0':
		{
			printf("退出成功...\n");
			Sleep(2000);
			exit(0);
		}
		case '1':
		{
			addStudent(&list);
			printf("录入成功...\n");
			Sleep(2000);
			Save("book.txt", list);
			system("cls");
			break;
		}
		case '2':
		{
			printf("【查找成绩】\n");
			printf("请输入要查找成绩的学生姓名或姓名\n");
			struct Student* temp;
			temp = (struct Student*)malloc(sizeof(struct Student));
			scanf_s("%s", temp->name, 50);
			Search(list, temp->name);
			free(temp);
			system("pause");
			system("cls");
			break;
		}
		case '3':
		{
			printf("【修改成绩】\n");
			printf("请输入要修改成绩的学生姓名\n");
			struct Student* temp;
			temp = (struct Student*)malloc(sizeof(struct Student));
			scanf_s("%s", temp->name, 50);
			Alter(list, temp->name);
			Save("book.txt", list);
			free(temp);
			Sleep(2000);
			system("cls");
			break;
		}
		case '4':
		{
			printf("【删除成绩】\n");
			printf("请输入要删除成绩的学生姓名\n");
			struct Student* temp;
			temp = (struct Student*)malloc(sizeof(struct Student));
			scanf_s("%s", temp->name, 50);
			Delete(list, temp->name);
			Save("book.txt", list);
			free(temp);
			Sleep(2000);
			system("cls");
			break;
		}
		case '5':
		{
			printf("【排序成功】\n");
			Sort(list);
			Save("book.txt", list);
			system("pause");
			system("cls");
			break;
		}
		case '6':
		{
			printf("【成绩单】\n");
			printList(list);
			system("pause");
			system("cls");
			break;
		}
		default:
			break;
		}

	}
}
void Work2()   /*学生系统*/
{
	while (1)
	{
		char ch = '0';
		printf("************************\n");
		printf("*****  1.查询成绩  *****\n");
		printf("*****  0.退出      *****\n");
		printf("************************\n");
		do
		{
			ch = _getch();
		} while ((ch < '0') || (ch > '1'));
		switch (ch)
		{
		case '0':
		{
			printf("退出成功...\n");
			Sleep(2000);
			exit(0);
		}
		case '1':
		{
			printf("【查找成绩】\n");
			printf("请输入要查找成绩的学生姓名或学号\n");
			struct Student* temp;
			temp = (struct Student*)malloc(sizeof(struct Student));
			scanf_s("%s", temp->name, 50);
			Search(list, temp->name);
			free(temp);
			system("pause");
			system("cls");
			break;
		}
		default:
			break;
		}

	}
}
int main(void)
{
	int i;
	Read("book.txt", &list);  /*读取已录入成绩信息*/
	i = login();       /*登录*/
	if (i) Work1();     /*教师系统*/
	else   Work2();   /*学生系统*/
	return 0;
}


#endif