#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

//3*3矩阵乘法
//#include<stdio.h>
//int main()
//{
//	int arr1[3][3], arr2[3][3], ans[3][3]={0}, tmp[3];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			for (int jj = 0; jj < 3; jj++)
//			{
//				ans[i][j] += arr1[i][jj] * arr2[jj][j];
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", ans[i][j]);
//		}
//	}
//	return 0;
//}





//矩阵顺时针90°旋转
//#include<stdio.h>
//int main()
//{
//    int i, j;
//    int arr1[100][100], arr2[100][100], ans[100][100] = {0};
//    int n, m, k;
//    scanf("%d%d%d", &n, &m, &k);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < k; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < k; j++)
//        {
//            for (int jj = 0; jj < m; jj++)
//            {
//                ans[i][j] += arr1[i][jj] * arr2[jj][j];
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < k; j++)
//        {
//            printf("%d ", ans[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//
//{
//	int n, m;
//	int i, j;
//	scanf("%d%d", &n, &m);
//	int arr[100][100];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int left, right;
//	for (i = 0; i < n; i++)
//	{
//		for (left = 0, right = m-1; left < right; left++, right--)
//		{
//			int tep;
//			tep = arr[i][left];
//			arr[i][left] = arr[i][right];
//			arr[i][right] = tep;
//		}
//	}
//	int ii, jj;
//	for (i = 0, j = m-1; i < n; i++, j--)
//	{
//		for (jj = n - 1, ii = i + 1; jj >= 0; jj--, ii++)
//		{
//			int tep;
//			tep = arr[i][jj];
//			arr[i][jj] = arr[ii][j + 1];
//			arr[ii][j + 1] = arr[i][jj];
//		}
//	}
//	return 0;
//}
// 
// 版本答案
//#include<stdio.h>
//int main()
//{
//	int a[100][100], b[100][100] = { 0 }, c[100][100] = { 0 };
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int i, j;
//
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++) {
//			scanf("%d", &a[i][j]);
//		}
//
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++) 
//		{
//			b[i][j] = a[m - 1 - j][n - 1 - i];
//		}
//
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++) {
//			c[i][j] = b[n - 1 - i][j];
//		}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			printf("%d", c[i][j]);
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//矩阵模糊处理
//#include<stdio.h>
//
//int main()
//{
//	int a[100][100] = { 0 };
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 1; i < n - 1; i++)
//	{
//		for (j = 1; j < m - 1; j++)
//		{
//			a[i][j] = (a[i - 1][j] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j] + a[i][j]) / 5.0 + 0.5;//四舍五入
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//行列式计算器

//方案一
//#include<stdio.h>
//#include<math.h>
//
//int M(int a[10][10], int n, int j, int i)
//{
//	int c = 0, d = 0, e = 0, f = 1;
//	int b[10][10] = { 0 };
//	for (c = 0, e = 0; e < n;c++, e++)
//	{
//		for (d = 0, f = 1; f < n;)
//		{
//			if (e != j && f != i)
//			{
//				b[c][d] = a[e][f];
//				d++; f++;
//			}
//			else
//			{
//                c--;
//                break;
//			}
//		}
//	}
//	return calculation(n - 1, b);
//}
//
//int calculation(int n, int a[10][10])
//{
//	int i = 0;
//	int sum = 0;
//	if (n == 1)
//	{
//		return a[i][i];
//	}
//	if (n == 2)
//	{
//		return a[i][i] * a[i + 1][i + 1] - a[i][i + 1] * a[i + 1][i];
//	}
//	if (n >= 3)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			sum += a[j][0] * pow(-1, j) * M(a, n, j, 0);//按列展开j行1列
//		}
//		return sum;
//	}
//}
//
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	int a[10][10] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("%d", calculation(n, a));
//	return 0;
//}



//方案二
//#include <stdio.h>
//#include <windows.h>
//
//int determinant(int matrix[20][20], int order);
//int laplace_expansion(int matrix[20][20], int r, int c, int order);
//
//int main()
//{
//    int order, matrix[20][20], result = 0, i, j;
//
//    printf("行列式计算器可以计算20阶以下的行列式。你可以先输入阶数，然后形如\n");
//    Sleep(800);
//    printf("1 2 3\n4 5 6\n7 8 9\n");
//    Sleep(800);
//    printf("这样来输入你需要计算的行列式。\n\n");
//    Sleep(600);
//    printf("请输入阶数:");
//    scanf("%d", &order);
//    if (order <= 0)
//        printf("请输入大于0的整数！");
//    else
//    {
//        printf("请输入一个%d阶行列式:\n", order);
//        for (i = 0; i < order; i++)
//            for (j = 0; j < order; j++)
//                scanf("%d", &matrix[i][j]);
//        result = determinant(matrix, order);
//        printf("行列式的值为: %d", result);
//    }
//
//    return 0;
//}
//
//int determinant(int matrix[20][20], int order)
//{
//    int result = 0, sign = 1, cofactor, i;
//
//    if (order == 1)
//        result = matrix[0][0];
//    else
//        for (i = 0; i < order; i++)
//        {
//            cofactor = laplace_expansion(matrix, i, 0, order);
//            result += sign * matrix[i][0] * cofactor;
//            sign *= -1;
//        }
//
//    return result;
//}
//
//int laplace_expansion(int matrix[20][20], int r, int c, int order)
//{
//    int result = 0, cofactor[20][20], original_i, original_j, i, j;
//
//    for (i = 0; i < order; i++)
//        for (j = 0; j < order; j++)
//        {
//            original_i = i;
//            original_j = j;
//            if (i == r || j == c);
//            else
//            {
//                if (i > r)
//                    i--;
//                if (j > c)
//                    j--;
//                cofactor[i][j] = matrix[original_i][original_j];
//                i = original_i;
//                j = original_j;
//            }
//        }
//    if (order >= 2)
//        result = determinant(cofactor, order - 1);
//
//    return result;
//}


//#include<stdio.h>
//void Matrix_Add(int arr1[3][3], int arr2[3][3], int arr3[3][3])
//{
//    int i, j, a, b = 0, c = 0, d = 0;
//    for (i = 0; i < 3; i++)
//    {
//        d = 0;
//        b = 0;
//        for (j = 0; j < 3; j++)
//        {
//            a = (arr1[i][j]) * (arr2[j][d]);
//            b = a + b;
//            arr3[i][d] = b;
//            if (j == 2 && d != 2)
//            {
//                j = 0;
//                b = 0;
//                d++;
//            }
//        }
//
//    }
//
//}
//int main()
//{
//    int arr1[3][3] = { 0 };
//    int arr2[3][3] = { 0 };
//    int arr3[3][3] = { 0 };
//    int i, j;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    Matrix_Add(arr1, arr2, arr3);
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            printf("%d ", arr3[i][j]);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[3][3], arr2[3][3], ans[3][3]={0}, tmp[3];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			for (int jj = 0; jj < 3; jj++)
//			{
//				ans[i][j] += arr1[i][jj] * arr2[jj][j];
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", ans[i][j]);
//		}
//	}
//	return 0;
//}

//行列式计算器

//方案一
#include<stdio.h>
#include<math.h>

int M(int a[10][10], int n, int j, int i)
{
    int calculation(int n, int a[10][10]);
	int c = 0, d = 0, e = 0, f = 1;
	int b[10][10] = { 0 };
	for (c = 0, e = 0; e < n;c++, e++)
	{
		for (d = 0, f = 1; f < n;)
		{
			if (e != j && f != i)
			{
				b[c][d] = a[e][f];
				d++; f++;
			}
			else
			{
               c--;
               break;
			}
		}
	}
	return calculation(n - 1, b);
}

int calculation(int n, int a[10][10])
{
	int i = 0;
	int sum = 0;
	if (n == 1)
	{
		return a[i][i];
	}
	if (n == 2)
	{
		return a[i][i] * a[i + 1][i + 1] - a[i][i + 1] * a[i + 1][i];
	}
	if (n >= 3)
	{
		for (int j = 0; j < n; j++)
		{
			sum += a[j][0] * pow(-1, j) * M(a, n, j, 0);//按列展开j行1列
		}
		return sum;
	}
}

int main()
{
	int n = 0, i = 0, j = 0;
	int a[10][10] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("%d", calculation(n, a));
	return 0;
}

//// 求矩阵N次幂
//#include<stdio.h>
//int main()
//{
//	int arr1[30][30], arr2[30][30], ans[30][30]={0}, tmp[30][30] ={0};
//	int i, j, n, time, temp;
//	scanf("%d", &n);
//	scanf("%d", &time);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
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
//				tmp[i][j] = 0;
//			}
//		}
//	}
//
//	//A的N次幂结果输出
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", ans[i][j]);
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