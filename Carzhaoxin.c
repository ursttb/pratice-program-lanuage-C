//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#define M 3
//int n = 0;
//int i = 0, j = 0;
//int a[M][M] = { 0 }, b[M][M] = { 0 }, c[M][M] = { 0 };
//
//void f()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			b[i][j] = a[M - 1 - j][M - 1 - i];
//		}
//	}
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			c[i][j] = b[M - 1 - i][j];
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d", &n);//输入角度
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	switch (n)
//	{
//			case 3:
//			{
//				f();
//				break;
//			}
//			case 2:
//			{
//				f();
//				f();
//				break;
//			}
//			case 1:
//			{
//				f();
//				f();
//				f();
//				break;
//			}
//	default:
//		break;
//	}
//
//	for (i = 0; i < M; i++)//输出
//	{
//		for (j = 0; j < M; j++) 
//		{
//			printf("%d", c[i][j]);
//			printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int a[1001] = { 0 };////int main()//{//    int n = 0;//    int i = 0, j = 0;//    scanf("%d", &n);//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }//    for (int i = 0; i < n - 1; i++)//第几趟//    {//        for (int j = 0; j < n - 1 - i; j++)//两两比较//        {//            if (a[j] > a[j + 1])//            {//                //进行交换操作//                int temp = a[j];//                a[j] = a[j + 1];//                a[j + 1] = temp;//            }//        }//    }////    return 0;//}//#include<stdio.h>
//
//int main()
//{
//    printf("P02\n");
//    printf("Delay25us();\n");
//    printf("CCD_SI=0;\n");
//    return 0;
//}