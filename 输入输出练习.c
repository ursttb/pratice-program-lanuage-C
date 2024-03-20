#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


//（ICPC入门）输入输出练习(Ⅰ)
// 输入一系列a,b求a+b
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    while (scanf("%d%d", &a, &b) != EOF)//不断输入的写法
//    {
//        printf("%d\n", a + b);
//    }
//    return 0;
//}
//（ICPC入门）输入输出练习(Ⅱ)
// 先输入一个n，接下来n行每一行要输入一系列a,b求a+b
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a, b;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d%d", &a, &b);
//		printf("%d\n", a + b);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a, b;
//	while (scanf("%d", &n)!=EOF)//不断输入
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d%d", &a, &b);
//			printf("%d\n", a + b);
//		}
//	}
//	return 0;
//}
//（ICPC入门）输入输出练习(Ⅲ)
// 输入多组数据每一行有a, b，a, b均输入0时终止，输出a+b
//#include<stdio.h> 
//int main()
//{
//    int a, b;
//    while (scanf("%d%d", &a, &b) != EOF)//不断输入
//	 {
//        if (a == 0 && b == 0) break;//条件跳出
//        printf("%d\n", a + b);
//    }
//    return 0;
//}
//输入输出练习(Ⅳ)
// 输入多组数据，第一个数为n 紧跟着n个整数，输出这n个数的,遇到0终止
//#include <stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)//不断输入
//    {
//        if (n == 0)//可省略
//        {//可省略
//            return 0;//可省略
//        }//可省略
//        int arr;
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr);
//            res += arr;
//        }
//        printf("%d\n", res);
//    }
//}
//输入输出练习(Ⅴ)
//#include<stdio.h>
// 先输入N，接下来N行每一行要输出第一个数为n 紧跟着n个整数，输出这n个数的和
//int main()
//{
//	int n;
//    scanf("%d", &n);
//    for(int j = 0; j<n; j++)//有限行就先输入再用for
//	{
//        int N = 0;
//		scanf("%d", &N);
//        int arr;
//        int res = 0;
//        for (int i = 0; i < N; i++)
//        {
//            scanf("%d", &arr);
//            res += arr;
//        }
//        printf("%d\n", res);
//	}
//	return 0;
//}


//输入输出练习(Ⅵ)
//输入多组数据，每一行第一个数n，后面n个数求和。该行第一个数为0就终止
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d",&n)!=EOF)
//	{
//		if (n == 0)
//		{
//			break;
//		}
//		int N;
//		scanf("%d", &N);
//		int sum=0, num;
//		for (int i = 0; i < N; i++)
//		{
//			scanf("%d", &num);
//			sum += num;
//		}
//		printf("%d", sum);
//	}
//	return 0;
//}




//输入输出练习(Ⅶ)
//先输入N代表数据组数，然后第一个n跟着n个数输出求和
//#include<stdio.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		int j, n, num, sum = 0;
//		scanf("%d", &n);
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &num);
//			sum += num;
//		}
//		if(i!=N-1)
//		printf("%d\n\n", sum);
//		else
//		printf("%d",sum);
//	}
//	return 0;
//}