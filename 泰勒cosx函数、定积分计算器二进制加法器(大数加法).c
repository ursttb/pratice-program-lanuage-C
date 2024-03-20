#define _CRT_SECURE_NO_WARNINGS


//泰勒逼近cosx函数
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




//封装函数交换两个数
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



//定积分计算器

//#include<stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	double a = 0, b = 0;
//	scanf("%lf %lf", &a, &b);
//	double sum = 0;
//	int n = 10000;//n个块间
//	double d = (b - a) / n;//精度
//	for (int i = 1; i <=n; i++)
//	{
//		sum += sin(a + d*i) * d;
//	}
//	printf("%.4lf", sum);
//	return 0;
//}



//二进制加法器


//方案一
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




//方案二
//八位二进制加法器
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define SIZE  8			//宏定义，便于更改求不同为二进制数的和 
//
//void Array_creat(char* array, int n, int m);		//将从键盘上输入的二进制数赋给数组 
//int Half_Adder(char* x, char* y, int* s);			//半加器 
//void Full_Adder(char* x, char* y, int* s, int* c);	//全加器 
//void show(int* s);									//输出两个二进制数的和 
//
//int main()
//{
//	char x[SIZE + 1], y[SIZE + 1];			//采用字符数组来接收二进制数 
//	int s[SIZE + 1] = { 0 };				//用于存放两个二进制数各个位上的和 
//	int c[SIZE] = { 0 };				//用于存放两个二进制数各个位上的进制数 
//	char ch = 'y';						//用于判断是否继续循环 
//	while (ch == 'y')
//	{
//		Array_creat(x, 1, SIZE);
//		Array_creat(y, 2, SIZE);
//		Full_Adder(x, y, s, c);
//
//		printf("两个二进制数相加的和为：");
//		show(s);
//
//		printf("\n");
//		printf("********************************************************\n");
//		printf("\n");
//
//		printf("按y继续，按任意键结束：");
//		scanf("%c", &ch);
//		getchar();
//	}
//	return 0;
//}
//
//void Array_creat(char* array, int n, int m)
//{
//	int judge = 1;			//用来判断输入的二进制数是否正确 
//	int i;
//	char ch;				//储存接受的字符 
//
//	printf("输入第%d个%d位的二进制数： ", n, m);
//	for (i = 0, ch = '\0'; ch != '\n'; i++)
//	{
//		ch = getchar();
//
//		if (i < SIZE)
//		{
//			if (ch == '0' || ch == '1');	//判断输入的二进制数是否是0或1，同时也判断输入的二进制位数是否达到要求，是则执行空格语句 
//			else
//			{
//				judge = 0;
//				continue;
//			}
//		}
//
//		if ((i > SIZE))					//判断输入的二进制位数是否错误 
//		{
//			judge = 0;
//			continue;
//		}
//
//		if (ch == '\n' || i == SIZE)		//遇到回车或到达数组最后一个元素，存入'\0' 
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
//		printf("输入有错误，请重新输入： ");
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
//int Half_Adder(char* x, char* y, int* s)	//半加器 
//{
//	int carry;
//	carry = (*x - '0') && (*y - '0');
//	*s = ((*x - '0') || (*y - '0')) && !carry;
//	return carry;
//}
//
//void Full_Adder(char* x, char* y, int* s, int* c)	//全加器 
//{
//	int length = strlen(x);
//	int i = length - 1;
//	c[i] = Half_Adder(&x[i], &y[i], &s[i + 1]);
//	for (i--; i >= 0; i--)
//	{
//		s[i + 1] = ((x[i] - '0') && (y[i] - '0') && c[i + 1]) || ((x[i] - '0') && !(y[i] - '0') && !c[i + 1]) || (!(x[i] - '0') && (y[i] - '0') && !c[i + 1]) || (!(x[i] - '0') && !(y[i] - '0') && c[i + 1]);
//		c[i] = ((x[i] - '0') && (y[i] - '0') && c[i + 1]) || ((x[i] - '0') && (y[i] - '0') && !c[i + 1]) || ((x[i] - '0') && !(y[i] - '0') && c[i + 1]) || (!(x[i] - '0') && (y[i] - '0') && c[i + 1]);
//	}
//	s[i + 1] = c[i + 1];	//将最后一个进制数赋给s的最高位数，即s0 = c0 
//}
//
//void show(int* s)		//输出 
//{
//	if (s[0])
//	{
//		printf("%d", s[0]);
//	}
//	else
//	{
//		printf(" ");	//目的使输出的二进制数和跟输入的二进制数对齐 
//	}
//	for (int i = 1; i < SIZE + 1; i++)
//	{
//		printf("%d", s[i]);
//	}
//	printf("\n");
//}


//方案三
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//int main()
//{
//    int k[100];//存放计算后的二进制数
//    char s1[100], s2[100];//输入的两个二进制数
//    int sum, sum1 = 0, sum2 = 0;
//    int len1, len2;//两个字符数组的长度
//    int i = 0;
//    gets(s1);
//    gets(s2);
//    len1 = strlen(s1);
//    len2 = strlen(s2);
//    while (s1[i] != '\0')//第一个二进制数转化为十进制数
//    {
//        sum1 += pow(2, len1 - 1) * (s1[i] - '0');
//        len1--;
//        i++;
//    }
//    i = 0;
//    while (s2[i] != '\0')//第二个二进制数转化为十进制数
//    {
//        sum2 += pow(2, len2 - 1) * (s2[i] - '0');
//        len2--;
//        i++;
//    }
//    i = 0;
//    sum = sum1 + sum2;//两数和
//    while (sum)//和转化为二进制
//    {
//        k[i] = sum % 2;
//        sum /= 2;
//        i++;
//    }
//    i = i - 1;
//    while (i >= 0)//输出
//    {
//        printf("%d", k[i]);
//        i--;
//    }
//    return 0;
//}



//方案四
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
	for (i = len1 - 1, j = 0; i >= 0; --i)//字符组倒序转成数字组
	{
		num1[j] = s1[i] - '0';
		j++;
	}
	for (i = len2 - 1, j = 0; i >= 0; --i)
	{
		num2[j] = s2[i] - '0';
		j++;
	}
	for (i = 0; i < (len2 > len1 ? len2 : len1); i++)//末位相加减进位，最后i = 最长的字符串长度
	{
		num1[i] += num2[i];
		if (num1[i] > 1)
		{
			num1[i + 1] += 1;
			num1[i] -= 2;
		}
	}
	if (num1[i])//检查最高位是否进位
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