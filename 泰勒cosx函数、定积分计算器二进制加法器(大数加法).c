#define _CRT_SECURE_NO_WARNINGS


//̩�ձƽ�cosx����
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double x = 0;
//	int n = 1;
//	double k = 1;
//	double J = 1;
//	int i = 1;
//	scanf("%lf", &x);
//	do
//	{
//		if (x == 0)
//		{
//			break;
//		}
//		for (i = 1, J = 1; i <= 2 * n; i++)
//		{
//			J = J * i;
//		}
//		k += pow(-1, n) * pow(x, 2 * n) * 1.0/J;
//		n++;
//	} while (fabs((k - cos(x))) > 0.0001);
//	printf("%d", n-1);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//double k(double j)
//{
//
//	if (j == 0) { j = 1; }
//	else
//		for (int i = j - 1; i >= 1; i--)
//		{
//			j *= i;
//		}
//	return (j);
//}
//int main()
//{
//	double y, z; double j; float x;
//	double n = 1, m = 1;
//	scanf("%f", &x);
//	y = pow(10, -4);
//	while (m - cos(x) > y || cos(x) - m > y)
//	{
//		j = 2 * n;
//		z = pow(-1, n) * ((pow(x, j)) / k(j));
//		m += z;
//		n++;
//	}
//	printf("%.lf", n - 1);
//	return 0;
//}




//��װ��������������
//
//#include<stdio.h>
//
//void Swap(int* a, int* b)
//{
//	int tep = *a;
//	*a = *b;
//	*b = tep;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}



//�����ּ�����

//#include<stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	double a = 0, b = 0;
//	scanf("%lf %lf", &a, &b);
//	double sum = 0;
//	int n = 10000;//n�����
//	double d = (b - a) / n;//����
//	for (int i = 1; i <=n; i++)
//	{
//		sum += sin(a + d*i) * d;
//	}
//	printf("%.4lf", sum);
//	return 0;
//}



//�����Ƽӷ���


//����һ
//#include<stdio.h>
//#include<string.h>
//
//void Add(int num1[], int num2[], int len1, int len2,char s1[], char s2[])
//{
//	int i = 0, j = 0;
//	for (i = len1 - 1, j = 0; i >= 0; i--)
//	{
//		num1[j] = s1[i] - '0';
//		j++;
//	}
//	for (i = len2 - 1, j = 0; i >= 0; i--)
//	{
//		num2[j] = s2[i] - '0';
//		j++;
//	}
//	for (i = 0; i < (len2 > len1 ? len2 : len1); i++)
//	{
//		num1[i] += num2[i];
//		if (num1[i] > 1)
//		{
//			num1[i + 1] += 1;
//			num1[i] -= 2;
//		}
//	}
//
//	if (num1[i])
//	{
//		for (j = i; j >= 0; j--)
//		{
//			printf("%d", num1[j]);
//		}
//	}
//	else
//	{
//		for (j = i - 1; j >= 0; j--)
//		{
//			printf("%d", num1[j]);
//		}
//	}
//}
//int main()
//
//{
//	char s1[10] = { 0 };
//	char s2[10] = { 0 };
//	int num1[10] = { 0 };
//	int num2[10] = { 0 };
//	scanf("%s", s1);
//	scanf("%s", s2);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	Add(num1[10], num2[10], len1, len2, s1[10], s2[10]);
//	return 0;
//}




//������
//��λ�����Ƽӷ���
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define SIZE  8			//�궨�壬���ڸ�����ͬΪ���������ĺ� 
//
//void Array_creat(char* array, int n, int m);		//���Ӽ���������Ķ��������������� 
//int Half_Adder(char* x, char* y, int* s);			//����� 
//void Full_Adder(char* x, char* y, int* s, int* c);	//ȫ���� 
//void show(int* s);									//����������������ĺ� 
//
//int main()
//{
//	char x[SIZE + 1], y[SIZE + 1];			//�����ַ����������ն������� 
//	int s[SIZE + 1] = { 0 };				//���ڴ������������������λ�ϵĺ� 
//	int c[SIZE] = { 0 };				//���ڴ������������������λ�ϵĽ����� 
//	char ch = 'y';						//�����ж��Ƿ����ѭ�� 
//	while (ch == 'y')
//	{
//		Array_creat(x, 1, SIZE);
//		Array_creat(y, 2, SIZE);
//		Full_Adder(x, y, s, c);
//
//		printf("��������������ӵĺ�Ϊ��");
//		show(s);
//
//		printf("\n");
//		printf("********************************************************\n");
//		printf("\n");
//
//		printf("��y�������������������");
//		scanf("%c", &ch);
//		getchar();
//	}
//	return 0;
//}
//
//void Array_creat(char* array, int n, int m)
//{
//	int judge = 1;			//�����ж�����Ķ��������Ƿ���ȷ 
//	int i;
//	char ch;				//������ܵ��ַ� 
//
//	printf("�����%d��%dλ�Ķ��������� ", n, m);
//	for (i = 0, ch = '\0'; ch != '\n'; i++)
//	{
//		ch = getchar();
//
//		if (i < SIZE)
//		{
//			if (ch == '0' || ch == '1');	//�ж�����Ķ��������Ƿ���0��1��ͬʱҲ�ж�����Ķ�����λ���Ƿ�ﵽҪ������ִ�пո���� 
//			else
//			{
//				judge = 0;
//				continue;
//			}
//		}
//
//		if ((i > SIZE))					//�ж�����Ķ�����λ���Ƿ���� 
//		{
//			judge = 0;
//			continue;
//		}
//
//		if (ch == '\n' || i == SIZE)		//�����س��򵽴��������һ��Ԫ�أ�����'\0' 
//		{
//			array[i] = '\0';
//			continue;
//		}
//
//		array[i] = ch;
//	}
//
//	while (judge == 0)
//	{
//		judge = 1;
//
//		printf("�����д������������룺 ");
//		for (i = 0, ch = '\0'; ch != '\n'; i++)
//		{
//			ch = getchar();
//
//			if (i < SIZE)
//			{
//				if (ch == '0' || ch == '1');
//				else
//				{
//					judge = 0;
//					continue;
//				}
//			}
//
//			if (i > SIZE)
//			{
//				judge = 0;
//				continue;
//			}
//
//			if (ch == '\n' || i == SIZE)
//			{
//				array[i] = '\0';
//				continue;
//			}
//
//			array[i] = ch;
//		}
//	}
//}
//
//int Half_Adder(char* x, char* y, int* s)	//����� 
//{
//	int carry;
//	carry = (*x - '0') && (*y - '0');
//	*s = ((*x - '0') || (*y - '0')) && !carry;
//	return carry;
//}
//
//void Full_Adder(char* x, char* y, int* s, int* c)	//ȫ���� 
//{
//	int length = strlen(x);
//	int i = length - 1;
//	c[i] = Half_Adder(&x[i], &y[i], &s[i + 1]);
//	for (i--; i >= 0; i--)
//	{
//		s[i + 1] = ((x[i] - '0') && (y[i] - '0') && c[i + 1]) || ((x[i] - '0') && !(y[i] - '0') && !c[i + 1]) || (!(x[i] - '0') && (y[i] - '0') && !c[i + 1]) || (!(x[i] - '0') && !(y[i] - '0') && c[i + 1]);
//		c[i] = ((x[i] - '0') && (y[i] - '0') && c[i + 1]) || ((x[i] - '0') && (y[i] - '0') && !c[i + 1]) || ((x[i] - '0') && !(y[i] - '0') && c[i + 1]) || (!(x[i] - '0') && (y[i] - '0') && c[i + 1]);
//	}
//	s[i + 1] = c[i + 1];	//�����һ������������s�����λ������s0 = c0 
//}
//
//void show(int* s)		//��� 
//{
//	if (s[0])
//	{
//		printf("%d", s[0]);
//	}
//	else
//	{
//		printf(" ");	//Ŀ��ʹ����Ķ��������͸�����Ķ����������� 
//	}
//	for (int i = 1; i < SIZE + 1; i++)
//	{
//		printf("%d", s[i]);
//	}
//	printf("\n");
//}


//������
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//int main()
//{
//    int k[100];//��ż����Ķ�������
//    char s1[100], s2[100];//�����������������
//    int sum, sum1 = 0, sum2 = 0;
//    int len1, len2;//�����ַ�����ĳ���
//    int i = 0;
//    gets(s1);
//    gets(s2);
//    len1 = strlen(s1);
//    len2 = strlen(s2);
//    while (s1[i] != '\0')//��һ����������ת��Ϊʮ������
//    {
//        sum1 += pow(2, len1 - 1) * (s1[i] - '0');
//        len1--;
//        i++;
//    }
//    i = 0;
//    while (s2[i] != '\0')//�ڶ�����������ת��Ϊʮ������
//    {
//        sum2 += pow(2, len2 - 1) * (s2[i] - '0');
//        len2--;
//        i++;
//    }
//    i = 0;
//    sum = sum1 + sum2;//������
//    while (sum)//��ת��Ϊ������
//    {
//        k[i] = sum % 2;
//        sum /= 2;
//        i++;
//    }
//    i = i - 1;
//    while (i >= 0)//���
//    {
//        printf("%d", k[i]);
//        i--;
//    }
//    return 0;
//}



//������
#include<stdio.h>
#include<string.h>

int main()

{
	char s1[10] = { 0 };
	char s2[10] = { 0 };
	char ans[10] = { 0 };
	int num1[10] = { 0 };
	int num2[10] = { 0 };
	int i = 0, j = 0; 
	int k = 0;
	scanf("%s", s1);
	scanf("%s", s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (i = len1 - 1, j = 0; i >= 0; --i)//�ַ��鵹��ת��������
	{
		num1[j] = s1[i] - '0';
		j++;
	}
	for (i = len2 - 1, j = 0; i >= 0; --i)
	{
		num2[j] = s2[i] - '0';
		j++;
	}
	for (i = 0; i < (len2 > len1 ? len2 : len1); i++)//ĩλ��Ӽ���λ�����i = ����ַ�������
	{
		num1[i] += num2[i];
		if (num1[i] > 1)
		{
			num1[i + 1] += 1;
			num1[i] -= 2;
		}
	}
	if (num1[i])//������λ�Ƿ��λ
	{
		for (j = i,k = 0; j >= 0; j--,k++)
		{
			ans[k] = num1[j] + '0';
		}
		//ans[k] = '\0';
	}
	else
	{
		for (j = i - 1, k = 0; j >= 0; j--, k++)
		{
			ans[k] = num1[j] + '0';
		}
		//ans[k] = '\0';
	}
	printf("%s", ans);
	return 0;
}