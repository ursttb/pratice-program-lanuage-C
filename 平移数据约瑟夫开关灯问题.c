#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


//ƽ������

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




//Լɪ������
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
//	for (i = 0; i < N; i++)//��ֵ����
//	{
//		arr[i] = i+1;
//	}
//	for (i = 0; k < N-1; i++)//kΪɱ����
//	{	
//		if (i > N - 1)//���һ��ѭ����ع�
//		{
//			i = i - N;
//		}
//		if (arr[i] != 0)
//		{
//			j++;//��¼��ʣ���������˼���
//		}
//		if (arr[i] == 0)
//		{
//			continue;
//		}
//		if (j % M == 0)//ÿ��M��ɱһ��
//		{
//			printf("%d ", arr[i]);//���������
//			arr[i] = 0;//��ɱ��������
//			k++;//ɱ������һ
//		}
//	}
//	for (i = 0; i <= N - 1; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf(" %d", arr[i]);//�����������
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
//���ص�����
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