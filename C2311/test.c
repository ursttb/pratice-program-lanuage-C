#define _CRT_SECURE_NO_WARNINGS
//
#include <stdio.h>  //ʹ��chatgptд��
#include <stdlib.h>

//// ��������sum�����ڼ�¼1��n��������λ֮��
//int n, m, sum[1000001];
//
//// �������ֵ���λ֮��
//int get_sum(int x) {
//    int s = 0;
//    // ѭ�������ֵ�ÿһλ������
//    while (x) {
//        s += x % 10;
//        x /= 10;
//    }
//    return s;
//}
//
//// �ȽϺ�������������
//int cmp(const void* a, const void* b) {
//    int x = *(int*)a, y = *(int*)b;
//    // �������������λ֮�Ͳ�ͬ������λ֮�ͽ�С������ǰ��
//    if (sum[x] != sum[y])
//        return sum[x] - sum[y];
//    // �������������λ֮����ͬ������ֵС������ǰ��
//    else
//        return x - y;
//}
//
//int main() {
//    // ����n��m��ֵ
//    scanf("%d%d", &n, &m);
//    int i, a[1000001];
//    // ����1��n�����������ÿһ��������λ֮�ͣ�����ÿһ������������a��
//    for (i = 1; i <= n; i++) {
//        a[i] = i;
//        sum[i] = get_sum(i);
//    }
//    // ������a�����������������ǰ��ıȽϺ���cmp
//    qsort(a + 1, n, sizeof(int), cmp);
//    // ������ڵ�m������
//    printf("%d\n", a[m]);
//    return 0;
//}

///*
//������������2-N���ݹ�N-1��������
//������N������ĺ�(�ɴ����)����ȱ�ݣ��޷��жϹ����������
//*/
//void print_M(int* time_tmp, int n, int ans[][30])
//{
//	printf("\n�����%d���ݽ�����£�\n", ( * time_tmp)++);
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
//	printf("����Ľ�����");
//	scanf("%d", &n);
//	printf("�����������");
//	scanf("%d", &time);
//	printf("��������ľ���\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//			sum[i][j] = arr1[i][j];
//		}
//	}
//	//��A2�Ľ��
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
//		//��A2*A����tmp
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
//		//tmp��ֵ��ans������tmp
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
//	//�ɴ���������
//	printf("\n�ɴ����������\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%2d ", sum[i][j]? 1 : 0);//ȱ�ݣ�û�п��ǹ�����
//		}
//		printf("\n");
//	}
//	return 0;
//}


////��ɴ����
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
//	//��A2�Ľ��
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
//		//��A2*A����tmp
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
//		//tmp��ֵ��ans������tmp
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
//	//�ɴ���������
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

