#define _CRT_SECURE_NO_WARNINGS
//
#include <stdio.h>  //使用chatgpt写的
#include <stdlib.h>

//// 定义数组sum，用于记录1到n的数的数位之和
//int n, m, sum[1000001];
//
//// 计算数字的数位之和
//int get_sum(int x) {
//    int s = 0;
//    // 循环把数字的每一位加起来
//    while (x) {
//        s += x % 10;
//        x /= 10;
//    }
//    return s;
//}
//
//// 比较函数，用于排序
//int cmp(const void* a, const void* b) {
//    int x = *(int*)a, y = *(int*)b;
//    // 如果两个数的数位之和不同，把数位之和较小的排在前面
//    if (sum[x] != sum[y])
//        return sum[x] - sum[y];
//    // 如果两个数的数位之和相同，把数值小的排在前面
//    else
//        return x - y;
//}
//
//int main() {
//    // 读入n和m的值
//    scanf("%d%d", &n, &m);
//    int i, a[1000001];
//    // 遍历1到n的数，计算出每一个数的数位之和，并把每一个数存入数组a中
//    for (i = 1; i <= n; i++) {
//        a[i] = i;
//        sum[i] = get_sum(i);
//    }
//    // 对数组a进行排序，排序规则是前面的比较函数cmp
//    qsort(a + 1, n, sizeof(int), cmp);
//    // 输出排在第m个的数
//    printf("%d\n", a[m]);
//    return 0;
//}

///*
//输入矩阵，输出其2-N次幂共N-1个矩阵结果
//并求这N个矩阵的和(可达矩阵)，有缺陷：无法判断孤立点的问题
//*/
//void print_M(int* time_tmp, int n, int ans[][30])
//{
//	printf("\n矩阵的%d次幂结果如下：\n", ( * time_tmp)++);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%2d ", ans[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr1[30][30], arr2[30][30], ans[30][30]={0}, tmp[30][30] ={0}, sum[30][30] = { 0 };
//	int i, j, n, time, temp, time_tmp=2;
//	printf("矩阵的阶数：");
//	scanf("%d", &n);
//	printf("矩阵的幂数：");
//	scanf("%d", &time);
//	printf("请输入你的矩阵：\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//			sum[i][j] = arr1[i][j];
//		}
//	}
//	//求A2的结果
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			for (int jj = 0; jj < n; jj++)
//			{
//				ans[i][j] += arr1[i][jj] * arr1[jj][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			sum[i][j] += ans[i][j];
//		}
//	}
//	time -= 1;
//	print_M(&time_tmp, n, ans);
//	while (--time)
//	{
//		//求A2*A放入tmp
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				for (int jj = 0; jj < n; jj++)
//				{
//					tmp[i][j] += ans[i][jj] * arr1[jj][j];
//				}
//			}
//		}
//		//tmp赋值到ans并清零tmp
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				ans[i][j] = tmp[i][j];
//				sum[i][j] += ans[i][j];
//				tmp[i][j] = 0;
//			}
//		}
//		print_M(&time_tmp, n, ans);
//	}
//	//可达矩阵结果输出
//	printf("\n可达矩阵结果如下\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%2d ", sum[i][j]? 1 : 0);//缺陷：没有考虑孤立点
//		}
//		printf("\n");
//	}
//	return 0;
//}


////求可达矩阵
//#include<stdio.h>
//int main()
//{
//	int arr1[30][30], arr2[30][30], ans[30][30] = { 0 }, tmp[30][30] = { 0 }, sum[30][30] = {0};
//	int i, j, n, time, temp;
//	scanf("%d", &n);
//	scanf("%d", &time);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//			sum[i][j] = arr1[i][j];
//		}
//	}
//	//求A2的结果
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			for (int jj = 0; jj < n; jj++)
//			{
//				ans[i][j] += arr1[i][jj] * arr1[jj][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			sum[i][j] += ans[i][j];
//		}
//	}
//	time -= 1;
//	while (--time)
//	{
//		//求A2*A放入tmp
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				for (int jj = 0; jj < n; jj++)
//				{
//					tmp[i][j] += ans[i][jj] * arr1[jj][j];
//				}
//			}
//		}
//		//tmp赋值到ans并清零tmp
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				ans[i][j] = tmp[i][j];
//				sum[i][j] += ans[i][j];
//				tmp[i][j] = 0;
//			}
//		}
//	}
//
//	//可达矩阵结果输出
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", sum[i][j]? 1 : 0);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	char data[100] = "PID=2023,5,14";
//	char buf[100] = { 0 };
//	int P, I, D;
//	int converted = sscanf(data, "%3s=%d,%d,%d", buf, &P,&I,&D);
//	printf("%d\n", converted);
//	printf("%s\n", buf);
//	printf("%d %d %d", P, I, D);
//	return 0;
//}

