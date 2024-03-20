#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)



//计算e麦克劳林式
//#include<stdio.h>
//
//int main()
//
//{
//	int n = 0;
//	double e = 1;
//	double ret = 1;
//	scanf("%d", &n);
//	for (int j = 1; j <= n; j++)
//	{
//		ret = ret * j;
//		e = e + 1 / ret;
// 	}
//	printf("%.10lf", e);
//	return 0;
//}


//（循环嵌套）水仙花数
//#include<stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	int m, n;
//	int flag = 0;
//	scanf("%d\n%d", &n, &m);
//	for (; n <= m; n++)
//	{
//		if (n == pow(n / 100, 3) + pow(n % 100 / 10, 3) + pow(n % 10, 3))
//		{
//			printf("%d\n", n);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("None");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//
//{
//	int n, m;
//	int a, b, c;
//	int flag = 0;
//	scanf("%d%d", &n, &m);
//		for (a = 1; a <= 9; a++)
//		{
//			for (b = 0; b <= 9; b++)
//			{
//				for (c = 0; c <= 9; c++)
//				{
//					if (a * 100 + b * 10 + c == a * a * a + b * b * b + c * c * c)
//					{
//						n = a * 100 + b * 10 + c;
//						printf("%d\n", n);
//						n++;
//						flag = 1;
//					}
//					else
//					{
//						continue;
//					}
//				}
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("None");
//	}
//	return 0;
//}



//（循环嵌套）分解质因子
//#include<stdio.h>
//
//void chu(int x, int y)
//{
//	if (y % x == 0)
//	{
//		printf("%d", x);
//		y = y / x;
//		if (y >= x)
//		{
//			printf("*");
//		}
//		chu(x, y);
//	}
//}
//int main()
//
//{	
//	int n = 0;
//	int j = 0;
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (int i = 2; i< n; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)//j是质数
//		{
//			chu(j, n);
//		}
//
//	}
//	return 0; 
//}


//#include<stdio.h>
//
//void chu(int* x, int* y,char a)
//{
//	if (*y % *x == 0)
//	{
//		printf("%d%c", *x, a);
//		*y = *y / *x;
//		chu(&x, &y, '*');
//	}
//}
//int main()
//
//{
//	int n = 0;
//	int j = 0;
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (int i = 2; i < n; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)//j是质数
//		{
//			chu(&j, &n, '*');
//			if (n / j == 1)
//				chu(&j, &n, '\0');
//		}
//
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//	int n = 0;
//	int j = 0;
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (int i = 2; i <= n; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)//j是质数
//		{
//			while (n%j == 0 && n/j != 1)
//			{	
//				printf("%d*", j);
//				n = n / j;
//			}
//			if (n % j == 0 && n / j == 1)
//			{
//				printf("%d", j);
//			}
//		}
//
//	}
//	return 0;
//}







//（循环嵌套）不定方程求解
//#include<stdio.h>
//
//int main()
//
//{
//	int a, b, c;
//	int x = 0;
//	int y = 0;
//	int count = 0;;
//	scanf("%d%d%d", &a, &b, &c);
//	for (x = 0; x<=(c/a); x++)
//	{
//		for (y = 0; y<=(c-a*x)/b; y++)
//		{
//			if (a * x + b * y == c)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}