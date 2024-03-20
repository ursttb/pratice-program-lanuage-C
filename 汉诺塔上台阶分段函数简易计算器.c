#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// 递归问题：汉诺塔问题
// 方案一
//#include<stdio.h>
//
//void HAN(int x, char z1, char z2, char z3)
//{	
//	if (x > 1)
//	{
//		char tep;
//		tep = z3; z3 = z2; z2 = tep;
//		HAN(x - 1,z1,z2,z3);
//		tep = z3; z3 = z2; z2 = tep;
//		printf("%c-%c\n", z1, z3);
//		tep = z1; z1 = z2; z2 = tep;
//		HAN(x - 1,z1,z2,z3);
//		tep = z1; z1 = z2; z2 = tep;
//	}
//	if(x == 1)
//	printf("%c-%c\n", z1, z3);
//}
//
//int main()
//
//{	
//	printf("汉诺塔问题，请输入一个数字，将排序问题答案\n");
//	int n = 0;
//	scanf("%d", &n);
//	HAN(n,'A', 'B', 'C');
//	return 0;
//}
// 方案二
 //#include "stdafx.h"

//void H(int, char, char, char);
//#include<stdio.h>
//
//int main() {
//	int n;
//	char a = 'A', b = 'B', c = 'C';
//	printf("Hannuota\nEnter the N.\n");
//	scanf("%d", &n);
//	printf("Result:\n");
//	H(n, a, b, c);
//
//	return 0;
//}
//
//void H(int N, char A, char B, char C) {
//	if (N > 1) {
//		H(N - 1, A, C, B);
//		printf("%c->%c\n", A, C);
//		H(N - 1, B, A, C);
//	}
//	else
//		printf("%c->%c\n", A, C);
//}
// 




//#include<stdio.h>
//
//int main()
//
//{
//	double x, y;
//	scanf("%lf", &x);
//	switch ((int)x / 5)
//	{
//	case 0:
//		y = -x + 2.5;
//		break;
//	case 1:
//		y = 2 - 1.5 * (x - 3) * (x - 3);
//		break;
//	case 2:
//	case 3:
//		y = x / 2.0 - 1.5;
//		break;
//	}
//	printf("%lf", y);
//	return 0;
//}




//简易计算器
//#include<stdio.h>
//
//int main()
//
//{
//	int num1 = 0;
//	int num2 = 0;
//	char f = '0';
//	scanf("%d %d %c", &num1, &num2, &f);
//	switch (f)
//	{
//	case '+':
//		printf("%d\n", num1 + num2);
//		break;
//	case '-':
//		printf("%d\n", num1 - num2);
//		break;
//	case '*':
//		printf("%d\n", num1 * num2);
//		break;
//	case '/':
//	{
//		if (num2 == 0)
//			printf("Divided by zero!");
//		else
//			printf("%d\n", num1 / num2);
//		break;
//	}
//	default:
//		printf("Invalid operator!");
//		break;
//	}
//	return 0;
//}



//上台阶问题
//#include<stdio.h>
//int T(int n)
//{
//	if (n == 3)
//	{
//		return 4;
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n > 3)
//	{
//		return T(n - 1) + T(n - 2) + T(n - 3);
//	}
//}
//
//int main()
//
//{
//	int n = 0;
//	while (scanf("%d", &n)!=0)
//	{
//		printf("%d\n", T(n));
//	}
//	return 0;
//}

//#include<stdio.h>
//long long T(int n)
//{
//	long long a[100] = { 0 };
//	a[1] = 1;
//	a[2] = 2;
//	a[3] = 4;
//	for (int i = 4; i <= 71; i++)
//		a[i] = a[i - 1] + a[i - 2] + a[i - 3];//规避内存太大问题
//	return a[n];
//}
//
//int main()
//
//{
//	int n = 0;
//	while (scanf("%d", &n) != 0)
//	{
//		if (n == 0)
//		{
//			break;
//		}
//		printf("%lld\n", T(n));
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//
//{
//	int a = 0;
//	int n = 100;
//	int sum = 0;
//	while (n>=1)
//	{
//		int b = a + 1;
//		sum += b;
//		n--;
//		a = a++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//	int arr[100];
//	int i = 0;
//	int n = 0;
//	int num = 0;
//	while (i!=EOF)
//	{
//		scanf("%d", &arr[i]);
//		n++;
//	}
//	scanf("%d", &num);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == num)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}