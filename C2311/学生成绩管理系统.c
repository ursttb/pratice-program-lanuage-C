#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#if(1)


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

const char A[10] = "111111";            /*��ʦ����*/


struct Student                              /*����ṹ��*/
{
	char name[50];         /*ѧ������*/
	char num[20];        /*ѧ��ѧ��*/
	float Chinese;      /*���ĳɼ�*/
	float math;         /*��ѧ�ɼ�*/
	float English;      /*Ӣ��ɼ�*/
	float sum;          /*�ܳɼ�*/
	struct Student* next;
};
struct Student* list = NULL;    /*������ͷ*/
int login()      /*��¼   ѧ����������*/
{
	while (1)
	{
		int i = 3;
		char ch = '0';
		do
		{
			printf("************************\n");
			printf("*** ѧ���ɼ�����ϵͳ ***\n");
			printf("************************\n");
			printf("*****  1.��ʦ��¼  *****\n");
			printf("*****  2.ѧ����¼  *****\n");
			printf("************************\n");
			ch = _getch();
		} while ((ch != '1') && (ch != '2'));
		if (ch == '1')
		{
			while (1)
			{
				char a[10];
				printf("����������\n");
				scanf_s("%s", a, 10);
				if (strcmp(A, a) == 0)break;
				printf("�������\n");
				system("pause");
				system("cls");
				i--;
				if (i == 0)
				{
					printf("�����δ������˳�ϵͳ\n");
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
void getInput(struct Student* student)         /*���뺯��*/
{
	printf("��¼��ɼ���\n");
	printf("����������:\n");
	scanf_s("%s", student->name, 50);
	printf("������ѧ��:\n");
	scanf_s("%s", student->num, 20);
	printf("���������ĳɼ�:\n");
	scanf_s("%f", &student->Chinese);
	printf("��������ѧ�ɼ�:\n");
	scanf_s("%f", &student->math);
	printf("������Ӣ��ɼ�:\n");
	scanf_s("%f", &student->English);
	student->sum = student->Chinese + student->math + student->English;
}
void addStudent(struct Student** list)      /*��ʼ��+��������*/
{
	struct Student* student, * temp;
	student = (struct Student*)malloc(sizeof(struct Student));/*�����ڴ�*/
	getInput(student);                   /*����ɼ���Ϣ*/
	if (*list != NULL)      /*����Ϊ�գ�ͷ�巨*/
	{
		temp = *list;
		*list = student;
		student->next = temp;
	}
	else       /*����Ϊ�գ���������*/
	{
		*list = student;
		student->next = NULL;
	}
}
void printStudent(struct Student* student)     /*��ӡ����ѧ���ɼ�*/
{
	printf("%s\t", student->name);
	printf("%s\t\t", student->num);
	printf("%.2f\t", student->Chinese);
	printf("%.2f\t", student->math);
	printf("%.2f\t", student->English);
	printf("%.2f\t\n", student->sum);

}
void Delete(struct Student* list, char* name)  /*ɾ��ѧ���ɼ�*/
{
	struct Student* student;
	struct Student* temp = NULL;
	student = list;
	if (student == NULL)
	{
		printf("��ѧ���ɼ�δ¼��\n");
		return;
	}
	if (student->next == NULL)
	{
		temp = student;
		free(temp);
		list = NULL;
		printf("ɾ���ɹ�...\n");
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
			printf("��ѧ���ɼ�δ¼��\n");
			return;
		}
		else
		{
			temp->next = student->next;
			free(student);
			printf("ɾ���ɹ�...\n");
		}
	}
}
void Alter(struct Student* list, char* name)   /*�޸ĳɼ�*/
{
	struct Student* student;
	struct Student* temp = NULL;
	student = list;
	if (student == NULL)
	{
		printf("��ѧ���ɼ�δ¼��\n");
		return;
	}

	while (student != NULL && strcmp(student->name, name))
	{
		temp = student;
		student = student->next;
	}
	if (student == NULL)
	{
		printf("��ѧ���ɼ�δ¼��\n");
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
				printf("0.�˳��޸�\n");
				printf("1.�޸�����\n");
				printf("2.�޸�ѧ��\n");
				printf("3.�޸����ĳɼ�\n");
				printf("4.�޸���ѧ�ɼ�\n");
				printf("5.�޸�Ӣ��ɼ�\n");
				ch = _getch();
			} while ((ch < '0') || (ch > '5'));
			switch (ch)
			{
			case '0':
			{
				printf("�˳��ɹ�...\n");
				Sleep(2000);
				return;
			}
			case '1':
			{
				printf("�������µ����֣�\n");
				scanf_s("%s", student->name, 50);
				printf("�޸ĳɹ�...\n");
				Sleep(2000);
				system("cls");
				break;
			}
			case '2':
			{
				printf("�������µ�ѧ�ţ�\n");
				scanf_s("%s", student->num, 20);
				printf("�޸ĳɹ�...\n");
				Sleep(2000);
				system("cls");
				break;
			}
			case '3':
			{
				printf("�������µ����ĳɼ���\n");
				scanf_s("%f", &student->Chinese);
				printf("�޸ĳɹ�...\n");
				Sleep(2000);
				system("cls");
				student->sum = student->Chinese + student->math + student->English;
				break;
			}
			case '4':
			{
				printf("�������µ���ѧ�ɼ���\n");
				scanf_s("%f", &student->math);
				printf("�޸ĳɹ�...\n");
				Sleep(2000);
				system("cls");
				student->sum = student->Chinese + student->math + student->English;
				break;
			}
			case '5':
			{
				printf("�������µ�Ӣ��ɼ���\n");
				scanf_s("%f", &student->English);
				printf("�޸ĳɹ�...\n");
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
void Search(struct Student* list, char* name)  /*��ѯ�ɼ�*/
{
	struct Student* student;
	struct Student* temp = NULL;
	student = list;
	if (student == NULL)
	{
		printf("��ѧ���ɼ�δ¼��\n");
		return;
	}

	while (student != NULL && strcmp(student->name, name) && strcmp(student->num, name))
	{
		temp = student;
		student = student->next;
	}
	if (student == NULL)
	{
		printf("��ѧ���ɼ�δ¼��\n");
		return;
	}
	else
	{
		printf("����\tѧ��\t\t����\t��ѧ\tӢ��\t�ܷ�\n");
		printStudent(student);
	}

}
void printList(struct Student* list)      /*��ӡ�ɼ���*/
{
	struct Student* p;	       /*�������*/
	p = list;
	if (p == NULL)
	{
		printf("ѧ���ɼ�δ¼��\n");
	}
	if (list != NULL)
	{
		printf("����\tѧ��\t\t����\t��ѧ\tӢ��\t�ܷ�\n");
		for (; p != NULL;)
		{
			printStudent(p);
			p = p->next;
		}
	}
}
void Save(const char* filebook, struct Student* list)    /*����ɼ���Ϣ*/
{
	FILE* fp;
	errno_t i = fopen_s(&fp, filebook, "w"); /*��д�ķ�ʽ���ļ�*/
	if (list == NULL)
	{
		fclose(fp);
		return;
	}
	struct Student* student = list;
	if (fp != 0)
	{
		while (student != NULL)  /*��ͼ����Ϣд���ļ�*/
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
void Insert(struct Student** list, struct Student tempstudent)/*���ɼ���Ϣ��������*/
{
	struct Student* temp;
	struct Student* student;
	temp = &tempstudent;
	student = (struct Student*)malloc(sizeof(struct Student));   /*�����ڴ�*/
	memcpy((char*)student, (char*)temp, sizeof(struct Student));/*���Ƴɼ���Ϣ*/
	temp = NULL;
	if (*list != NULL)  /*ͷ�巨*/
	{
		temp = *list;
		*list = student;
		student->next = temp;
	}
	else      /*��ǰ����Ϊ�գ�����������*/
	{
		*list = student;
		student->next = NULL;
	}
}
void Read(const char* filebook, struct Student** list)   /*��ȡ�ɼ���Ϣ*/
{
	FILE* fp;
	errno_t j = fopen_s(&fp, filebook, "r");  /*�Զ��ķ�ʽ���ļ�*/
	if (fp == NULL)
	{
		errno_t k = fopen_s(&fp, filebook, "w+");/*���û�и��ļ��ʹ���*/
	}
	if (fp != 0)
	{
		struct Student tempstudent;      /*���ļ��ɼ���Ϣ��������*/
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
void Sort(struct Student* list)   /*�ɼ�����*/
{
	struct Student* student;
	student = list;
	if (student == NULL)
	{
		printf("ѧ���ɼ�δ¼��\n");
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
void Menu()/*��ӡ�˵�*/
{
	printf("************************\n");
	printf("*** ѧ���ɼ�����ϵͳ ***\n");
	printf("************************\n");
	printf("*****  1.¼��ɼ�  *****\n");
	printf("*****  2.��ѯ�ɼ�  *****\n");
	printf("*****  3.�޸ĳɼ�  *****\n");
	printf("*****  4.ɾ���ɼ�  *****\n");
	printf("*****  5.�ɼ�����  *****\n");
	printf("*****  6.����ɼ��� ****\n");
	printf("*****  0.�˳�      *****\n");
	printf("************************\n");
}
void Work1()  /*��ʦϵͳ*/
{
	while (1)
	{
		char ch = '0';

		Menu();
		do
		{
			ch = _getch();      /*����ѡ��*/
		} while ((ch < '0') || (ch > '6'));
		switch (ch)
		{
		case '0':
		{
			printf("�˳��ɹ�...\n");
			Sleep(2000);
			exit(0);
		}
		case '1':
		{
			addStudent(&list);
			printf("¼��ɹ�...\n");
			Sleep(2000);
			Save("book.txt", list);
			system("cls");
			break;
		}
		case '2':
		{
			printf("�����ҳɼ���\n");
			printf("������Ҫ���ҳɼ���ѧ������������\n");
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
			printf("���޸ĳɼ���\n");
			printf("������Ҫ�޸ĳɼ���ѧ������\n");
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
			printf("��ɾ���ɼ���\n");
			printf("������Ҫɾ���ɼ���ѧ������\n");
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
			printf("������ɹ���\n");
			Sort(list);
			Save("book.txt", list);
			system("pause");
			system("cls");
			break;
		}
		case '6':
		{
			printf("���ɼ�����\n");
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
void Work2()   /*ѧ��ϵͳ*/
{
	while (1)
	{
		char ch = '0';
		printf("************************\n");
		printf("*****  1.��ѯ�ɼ�  *****\n");
		printf("*****  0.�˳�      *****\n");
		printf("************************\n");
		do
		{
			ch = _getch();
		} while ((ch < '0') || (ch > '1'));
		switch (ch)
		{
		case '0':
		{
			printf("�˳��ɹ�...\n");
			Sleep(2000);
			exit(0);
		}
		case '1':
		{
			printf("�����ҳɼ���\n");
			printf("������Ҫ���ҳɼ���ѧ��������ѧ��\n");
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
	Read("book.txt", &list);  /*��ȡ��¼��ɼ���Ϣ*/
	i = login();       /*��¼*/
	if (i) Work1();     /*��ʦϵͳ*/
	else   Work2();   /*ѧ��ϵͳ*/
	return 0;
}


#endif