#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>

//int main()
//
//{
//	unsigned short a = 0;
//	scanf("%hu", &a);
//
//	printf("%c", );
//	return 0; 
// }



//铺地毯
//方案一
//#include<stdio.h>
//
//int main()
//
//{
//	int n = 0;
//	int a, b, g, k, x, y;
//	int N, i, j;
//	int arr[101][101] = { 0 };
//	scanf("%d", &n);
//	for (N = 1; N <= n; N++)
//	{
//		scanf("%d %d %d %d", &a, &b, &g, &k);
//		for (i = 0; i <= g; i++)
//		{
//			for (j = 0; j <= k; j++)
//			{
//				arr[a + i][b + j] = N;
//			}
//		}
//	}
//	scanf("%d %d", &x, &y);
//	if (arr[x][y] == 0)
//	{
//		printf("-1");
//	}
//	else
//	{
//		printf("%d", arr[x][y]);
//	}
//	return 0;
//}

//方案二
//#include<stdio.h>
//#include <bits/stdc++.h>
//using namespace std;
//const int maxn = 1e6 + 10;
//struct node
//{
//    int x, y, a, b;
//} w[maxn];
//int main()
//{
//    int n, xx, yy;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; ++i)
//            scanf("%d%d%d%d", &w[i].x, &w[i].y, &w[i].a, &w[i].b);
//        scanf("%d%d", &xx, &yy);
//        for (int i = n; i >= 1; --i)
//        {
//            if (xx < w[i].x || yy < w[i].y)
//                continue;
//            if (xx - w[i].x <= w[i].a && yy - w[i].y <= w[i].b)
//            {
//                printf("%d\n", i);
//                return 0;
//            }
//        }
//    }
//}



// #include<stdio.h>
//int main()
//{
//	int N;
//	while (scanf("%d", &N) != EOF)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			int n, num, sum = 0;
//			scanf("%d", &n);
//			for (int i = 1; i <= n; i++)
//			{
//				scanf("%d", &num);
//				sum += num;
//			}
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}






//杨辉三角
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	int arr[20][20];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//		arr[i][i] = 1;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}







//计算素数数量
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}









//日期规范检查
//#include<stdio.h>
//
//int len(int n)
//{
//	int count = 1;
//	while (n > 10)
//	{
//		if (n / 10)
//		{
//			count++;
//			n /= 10;
//		}
//	}
//	return count;
//}
//int Run(int n)
//{
//
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int n[5] = {0};
//	int flag = 1;
//	scanf("%d-%d-%d-%d-%d", &n[0], &n[1], &n[2], &n[3], &n[4]);
//	if (len(n[0]) != 4)
//	{
//		printf("False");
//		flag = 0;
//	}
//	for (int i = 1; i <= 4; i++)
//	{
//		if (len(n[i]) > 2)
//		{
//			printf("False");
//			flag = 0;
//		}
//	}
//	switch (n[1])
//	{
//	case 1:
//	case 3:
//	case 5:	
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//	{	
//		if (n[2]<=0 || n[2] > 31)
//		{
//			printf("False");
//			flag = 0;
//		}
//		break;
//	}
//	case 2:
//	{
//		switch (Run(n[0]))
//		{
//		case 1:
//		{
//			if (n[2] <= 0 || n[2] > 29)
//			{
//				printf("False");
//				flag = 0;
//			}
//			break;
//		}
//		default:
//		{
//			if (n[2] <= 0 || n[2] > 28)
//			{
//				printf("False");
//				flag = 0;
//			}
//			break;
//		}
//		}
//	}
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//	{
//		if (n[2] <= 0 || n[2] > 30)
//		{
//			printf("False");
//			flag = 0;
//		}
//		break;
//	}
//	default:
//	{
//		printf("False");
//		flag = 0;
//		break;
//	}
//	}
//	if (n[3] > 24 || n[3] < 0)
//	{
//		printf("False");
//		flag = 0;
//	}
//	else
//	{
//		if (n[4] < 0 || n[4]>60)
//		{
//			printf("False");
//			flag = 0;
//		}
//		else 
//		{
//			if(flag == 1)
//			printf("True");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int y, m, d, h, n;
//    scanf_s("%d-%d-%d-%d-%d", &y, &m, &d, &h, &n);
//    if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
//    {
//        if (y > 9999 || y < 1) { printf("False"); return 0; };
//        if (m > 12 || m < 1) { printf("False"); return 0; };
//        if (m == 2)
//        {
//            if (d < 1 || d>29) { printf("False"); return 0; }
//
//        }
//        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//        {
//            if (d < 1 || d > 31)
//            {
//                printf("False"); return 0;
//            }
//        }
//        if (m == 4 || m == 6 || m == 9 || m == 11)
//        {
//            if (d < 1 || d > 30)
//            {
//                printf("False"); return 0;
//            }
//        }
//    }
//    if (y % 4 != 0 || y % 100 == 0 && y % 400 != 0)
//    {
//        if (y > 9999 || y < 1) { printf("False"); return 0; };
//        if (m > 12 || m < 1) { printf("False"); return 0; };
//        if (m == 2)
//        {
//            if (d < 1 || d>28) { printf("False"); return 0; }
//
//        }
//        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//        {
//            if (d < 1 || d > 31)
//            {
//                printf("False"); return 0;
//            }
//        }
//        if (m == 4 || m == 6 || m == 9 || m == 11)
//        {
//            if (d < 1 || d > 30)
//            {
//                printf("False"); return 0;
//            }
//        }
//    }
//    if (h < 0 || h > 24)
//    {
//        printf("False"); return 0;
//    }
//    if (n < 0 || n>59) { printf("False"); return 0; }
//    printf("Ture");
//
//    return 0;
//}
