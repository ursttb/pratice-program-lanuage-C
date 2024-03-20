#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


//平移数据

//#include<stdio.h>
//
//int main()
//
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int arr[1000];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int tep = arr[0];
//	for (i = 0; i < n-1; i++)
//	{	
//		arr[i] = arr[i + 1];
//		printf("%d ", arr[i]);
//	}
//	arr[n] = tep;
//	printf("%d", arr[n]);
//	return 0;
//}




//约瑟夫问题
//#include<stdio.h>
//
//int main()
//
//{
//	int N, M, i;
//	int j = 0;
//	int k = 0;
//	scanf("%d %d", &N, &M);
//	int arr[1000] = {0};
//	for (i = 0; i < N; i++)//赋值数组
//	{
//		arr[i] = i+1;
//	}
//	for (i = 0; k < N-1; i++)//k为杀人数
//	{	
//		if (i > N - 1)//完成一组循环后回归
//		{
//			i = i - N;
//		}
//		if (arr[i] != 0)
//		{
//			j++;//记录走剩余生者走了几次
//		}
//		if (arr[i] == 0)
//		{
//			continue;
//		}
//		if (j % M == 0)//每走M次杀一人
//		{
//			printf("%d ", arr[i]);//打出被害者
//			arr[i] = 0;//被杀者清零标记
//			k++;//杀人数加一
//		}
//	}
//	for (i = 0; i <= N - 1; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf(" %d", arr[i]);//输出最后的生者
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for(j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tep = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tep;
//			}
//		}
//	}
//}
//
//int main()
//
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int arr[20];
//	for (i = 0; i < n; i++)
//	{	
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{	
//	int N, M, i, j;
//	scanf("%d%d", &N, &M);
//	int arr1[5000];
//	for (i = 0; i < N; i+=2)
//	{
//		arr1[i] = 0;
//	}
//	for (i = 1; i < N; i += 2)
//	{
//		arr1[i] = 1;
//	}
//	for (i = 2; i < N; i += 3)
//	{
//		if (arr1[i] == 1)
//		{
//			arr1[i] = 0;
//		}
//		else
//		{
//			arr1[i] = 1;
//		}
//	}
//	j = 3;
//	for (;j <= M;)
//	{
//		for (i = 0; i < N; i++)
//		{
//			if (arr1[i] == 1)
//			{
//				arr1[i] = 0;
//			}
//			else
//			{
//				arr1[i] = 1;
//			}
//		}
//		j++;
//		if (j == M)
//		{
//			break;
//		}
//		for (i = 1; i < N; i += 2)
//		{
//			if (arr1[i] == 1)
//			{
//				arr1[i] = 0;
//			}
//			else
//			{
//				arr1[i] = 1;
//			}
//		}
//		j++;
//		if (j == M)
//		{
//			break;
//		}
//		for (i = 2; i < N; i += 3)
//		{
//			if (arr1[i] == 1)
//			{
//				arr1[i] = 0;
//			}
//			else
//			{
//				arr1[i] = 1;
//			}
//		}
//		j++;
//		if (j == M)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			printf("%d\n", i+1);
//		}
//	}
//	return 0;
//}
//开关灯问题
//#include<stdio.h>
//
//int main()
//
//{
//	int N, M, i, j;
//	scanf("%d%d", &N, &M);
//	int arr1[5000];
//	for (i = 0; i < N; i += 2)
//	{
//		arr1[i] = 0;
//	}
//	for (i = 1; i < N; i += 2)
//	{
//		arr1[i] = 1;
//	}
//	for (i = 2; i < N; i += 3)
//	{
//		if (arr1[i] == 1)
//		{
//			arr1[i] = 0;
//		}
//		else
//		{
//			arr1[i] = 1;
//		}
//	}
//	for (j = 4; j <= M; j++)
//	{
//		for (i = j-1; i < N; i = i + j)
//		{
//			if (arr1[i] == 1)
//			{
//				arr1[i] = 0;
//			}
//			else
//			{
//				arr1[i] = 1;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			printf("%d\n", i + 1);
//		}
//	}
//	return 0;
//}