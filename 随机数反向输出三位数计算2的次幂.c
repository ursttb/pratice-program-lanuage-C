#define _CRT_SECURE_NO_WARNINGS



//#include<stdio.h>
//
//int main()
//
//{	
//	printf("hello world");
//	return 0;
//}

//#include<stdio.h>

//int main()
//
//{	
//	char l = 0;
//	scanf("%c", &l);
//	printf("%c%c%c\n"
//		   "%c%c%c%c\n"
//		   "%c%c%c%c%c\n"
//		   "%c%c%c%c%c%c\n"
//		   "%c%c%c%c%c%c%c\n", l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l, l);
//	return 0;
//}

//生成随机数
//#include<stdlib.h>
//#include<time.h>
//#include<stdio.h>
//
//int main()
//
//{	
//	srand(time(NULL));
//	int a = rand() % 21 - 10;
//	printf("%d\n", a);
//	return 0;
//}
//
// 交换两数
//#include<stdio.h>
//
//int main()
//
//{
//    int a, b, tep;
//    scanf("%d%d", &a, &b);
//    tep = a;
//    a = b;
//    b = tep;
//    printf("%d %d", a, b);
//    return 0;
//}
//求圆的直径，周长，面积。
//#include<stdio.h>
//
//int main()
//
//{
//    double r, d, C, S;
//    double Pi = 3.14159;
//    scanf("%lf", &r);
//    d = r * 2;
//    C = Pi * d;
//    S = Pi * r * r;
//    printf("%.4lf %.4lf %.4lf ", d, C, S);
//    return 0;
//}
//多项式计算
//#include<stdio.h>
//
//int main()
//
//{
//    double a, b, c, d, x, ans;
//    scanf("%lf%lf%lf%lf%lf", &x, &a, &b, &c, &d);
//    ans = a * x * x * x + b * x * x + c * x + d;
//    printf("%.7lf", ans);
//    return 0;
//}
////求并联阻值
////#include<stdio.h>
////
////int main()
////
////{
////    double r1, r2, ans;
////    scanf("%lf%lf", &r1, &r2);
////    double k = 1.0 / r1;
////    ans = 1.0 / (1.0 / r1 + 1.0 / r2);
////    printf("%.2lf\n", ans);
////    printf("%lf", k);
////    return 0;
////}
//计算变量类型所占字节空间大小
//#include<stdio.h>
//#include<StdAfx.h>
//#include<StdAfxVa.h>
//#define bool BOOL 
//#define bool BOOL
//#define BOOL bool
//
//int main()
//
//{
//    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", sizeof(int), sizeof(short int), sizeof(unsigned int), sizeof(char), sizeof(float), sizeof(double), sizeof(long long), sizeof(bool));
//    return 0;
//}
// 
//#include<stdio.h>
//#include<stdbool.h>
//
//int main()
//
//{	
//	printf("%d\n%d\n\n", sizeof(long), sizeof(long long));
//	printf("%zd\n%zd\n%zd\n%zd\n%zd\n%zd\n%zd\n%zd\n", sizeof(int), sizeof(short int), sizeof(unsigned int), sizeof(char), sizeof(float), sizeof(double), sizeof(long long), sizeof(bool));
//	return 0;
//}
////
//#include<stdio.h>
//
//int mian()
//
//{	
//	printf("%zd\n", sizeof(int));
//	return 0;
//}
// 
// 
// 
// 
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, signal, n;
//	scanf("%d %d", &a, &b);
//	c = a;
//	n = 0;
//	while (c <= b) {
//		d = 2;
//		while (d < c) {
//			signal = 1;
//			if (c % d == 0) {
//				signal = 0;
//				break;
//			}
//			d++;
//		}
//		if (signal == 1) {
//			printf("%d\n", c);
//			n++;
//		}
//		c++;
//	}
//	if (n == 0) {
//		printf("None");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, signal = 1, n;
//	scanf("%d %d", &a, &b);
//	c = a;
//	n = 0;
//	while (c <= b) {
//		d = 2;
//		while (d < c) {
//			signal = 1;
//			if (c % d == 0) {
//				signal = 0;
//				break;
//			}
//			d++;
//		}
//		if (signal == 1) {
//			if (n > 0) {
//				printf("\n");
//			}
//			printf("%d", c);
//			n++;
//		}
//		c++;
//	}
//	if (n == 0) {
//		printf("None");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//	int a, b, i;
//	scanf("%d%d", &a, &b);
//	for (; a < b; a++)
//	{
//		for (i = 2; i < a; i++)
//		{
//			if (a % i == 0)
//			{
//				printf("None\n");
//				break;
//			}
//		}
//		if (i == a)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}

//打印ASCII码值
//#include<stdio.h>
//
//int main()
//
//{	
//	char a = 0;
//	scanf("%c", &a);
//	printf("%d\n", a);
//	return 0;
//}
//长类型a+b
//#include<stdio.h>
//
//int main()
//
//{	
//	long a, b;
//	scanf("%ld%ld", &a, &b);
//	printf("%ld", a + b);
//	return 0;
//}
//反向输出三位数
//#include<stdio.h>
//
//int main()
//
//{	
//	int a, b;
//	scanf("%d", &a);
//	b = a / 100 + a / 10 % 10 * 10 + a % 10 * 100;
//	printf("%d", b);
//	return 0;
//}

//海伦公式计算三角形面积
//#include<stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	double x1, x2, x3, y1, y2, y3, a, b, c, p, s;
//	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
//	a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
//	b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
//	c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
//	p = (a + b + c) / 2.0;
//	s = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("%lf", s);
//	return 0;
//}
//计算2的次幂
//#include<stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	long long a, n;
//	scanf("%lld", &n);
//	a = pow(2, n);
//	printf("%lld\n", a);
//	return 0;
//}
//#include <stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	int n;
//	long long a;
//	scanf("%d", &n);
//	a = pow(2, n);
//	printf("%lld", a);
//
//	return 0;
//
//}
//#include <stdio.h>
//#include <math.h>

//int main()
//{
//	unsigned long long int result;
//
//	result = pow(2, 63) - 1;
//	printf("result =%llu\n", result);   //unsigned long long 对应格式串为%llu
//
//	return 0;
////}
//#include<stdio.h>
//
//int main()
//
//{
//    char a = 0;
//    scanf("%c", &a);
//    if ('a'%2 == 1)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//
//{	
//	char a = 0;
//	scanf("%c", &a);
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{	
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 4 == 0 && a % 100 != 0)
//	{
//		printf("Yes");
//	}
//	else if (a % 400 == 0)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//	int n = 0;
//	int flag = 1;
//	scanf("%d", &n);
//	if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
//	{
//		printf("3 5 7");
//		flag = 0;
//	}
////	else if(n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
//	else
//	{	
//		int i = 3;
//		while(i<=7)
//		{
//			if (n % i == 0)
//			{
//				printf("%d ",i);
//				flag = 0;
//			}
//			i += 2;
//		}
//	}
//	//else
//	//{	
//	//	int i = 3;
//	//	while (i<=7)
//	//	{
//	//		if (n % i == 0)
//	//		{
//	//			printf("i");
//	//				i += 2;
//	//		}
//	//	}
//	//	flag++;
//	//}
//	if (flag == 1)
//	printf("n");
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//
//{	
//	int a = 0;
//	printf("%%d\n"
//		   "\\\n"
//	       "\"\"",a);
//	return 0;
//}
//#include<stdio.h>
//#include<limits.h>
//int main()
//
//{
//	printf("%d", sizeof(int));
//	return 0;
//}