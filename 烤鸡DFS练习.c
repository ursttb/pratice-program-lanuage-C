#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


#if 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int n;//Ŀ��������
int res = 0;//������
int term[10010];
int ans[10010][10010];//����
int dfs_fin;
void dfs(int x, int mg)
{
	int i = 0;
	if (mg > n) return;//������Ŀ����
	if (x > 10)//���һ������
	{
		if (mg == n)//�ﵽĩβ�ڵ㲢������������ʾ
		{
			for (i = 0; i < 10; i++)
			{
				ans[res][i] = term[i + 1];
			}
			res++;
		}
		return;
	}
	for (i = 1;i<=3;i++)
	{
		term[x] = i;		
		mg += i;//��ֵ����
		dfs(x + 1, mg);
		mg -= i;//�ָ��ֳ�
	}
}

int main()
{
	int x = 1, mg = 0;//��ʼ�㡢��ʼ������
	scanf("%d", &n);
	dfs(x, mg);
	printf("%d\n", res);
	for (int i = 0; i < res; i++)
	{
		for (int ii = 0; ii < 10; ii++)
		{
			printf("%d ", ans[i][ii]);
		}
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int n;//Ŀ��������
int res = 0;//������
int term[10010][59055];//����
int dfs_fin;
void dfs(int x, int mg)
{
	int i = 0;
	if (mg > n || x > 10) return;//������Ŀ����
	for (i = 1; i <= 3; i++)
	{
		term[res][x] = i;
		mg += i;//��ֵ����
		if (x + 1 > 10)//���һ������
		{
			if (x == 10 && mg == n)//�ﵽĩβ�ڵ㲢������������ʾ
			{
				res++;
			}
		}
		dfs(x + 1, mg);
		mg -= i;//�ָ��ֳ�
	}
}

int main()
{
	int x = 1, mg = 0;//��ʼ�㡢��ʼ������
	scanf("%d", &n);
	dfs(x, mg);
	printf("%d\n", res);
	for (int i = 0; i < res; i++)
	{
		for (int ii = 1; ii <= 10; ii++)
		{
			printf("%d ", term[i][ii]);
		}
		printf("\n");
	}
	return 0;
}
#endif // 0

//#include<stdio.h>
//
//int a;
//int b;
//int c;
//int d;
//
////a->A = 0, B = 1;
////b->B = 0, C = 0;
////c->(B = 1->A = 1)
////d->(A + C != 1)
//int A, B, C, D;//
//
//int main()
//{
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if (a + b + c + d == 1)
//					{
//						if (a == 1)
//						{
//							A = 0, B = 1;
//							B = 1, C = 1;
//							A = 0, C = 0;
//						}
//						if (b == 1)
//						{
//							B = 0, C = 0;
//						}
//						if (c == 1)
//						{
//							if (B = 1) A = 1;
//						}
//						if (d == 1)
//						{
//							
//						}
//					}
//				}
//			}
//		}
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//	int a, b, c, d;
//	for (a = 0; a <= 1; a++) 
//	{ //��˵�������
//		for (b = 0; b <= 1; b++) 
//		{ //��˵�������
//			for (c = 0; c <= 1; c++)
//			{ //��˵�������
//				for (d = 0; d <= 1; d++) 
//				{ //��˵�������
//					if ((a + b + c + d) == 1)
//					{ //ֻ��һ����˵�滰
//						if ((a == !b) && (a == !c) && (a != d)) 
//						{ //��˵��������
//							printf("����������˵�滰\n");
//							return 0;
//						}
//						if ((b == 0) && (c == 0))
//						{ //�Һͱ���˵�ѻ�
//							printf("����������˵�滰\n");
//							return 0;
//						}
//						if ((a == !b) && (a != !c) && (a != d))
//						{ //��˵��������
//							printf("����������˵�滰\n");
//							return 0;
//						}
//						if ((a != !c) && (d == 1)) 
//						{ //��˵��������
//							printf("����������˵�滰\n");
//							return 0;
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int a, b, c, d; // �ĸ����Ƿ������ı�����1��ʾ������0��ʾδ����
//	int cnt = 0; // ��¼˵�滰������
//	int ans; // ��¼��������
//	for (a = 0; a <= 1; a++) { // ö�ټ��Ƿ�����
//		for (b = 0; b <= 1; b++) { // ö�����Ƿ�����
//			for (c = 0; c <= 1; c++) { // ö�ٱ��Ƿ�����
//				for (d = 0; d <= 1; d++) { // ö�ٶ��Ƿ�����
//					if (a + b + c + d != 1) continue; // ֻ��һ����˵�滰
//					cnt = 0; // ÿ��ѭ��ǰ����
//					if (a == 1 && b == 0) cnt++; // ��˵�滰��������
//					if (b == 0 && c == 0) cnt++; // �Һͱ���˵�滰����û����
//					if (a == 0 && b == 1 && c == 0) cnt++; // ��˵�滰��������
//					if (a + c >= 1) cnt++; // �׺ͱ���������һ��˵�滰����˵�滰
//					if (cnt == 1) { // ֻ��һ����˵�滰
//						ans = a * 8 + b * 4 + c * 2 + d; // ��¼��������
//						printf("����������%d\n", ans + 1); // �����������
//						printf("˵�滰������:");
//						if (a == 1) printf("�� ");
//						if (b == 1) printf("�� ");
//						if (c == 1) printf("�� ");
//						if (d == 1) printf("�� ");
//						printf("\n");
//						return 0;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int a, b, c, d; // �ĸ����Ƿ�������״̬��0��ʾû������1��ʾ����
//	for (a = 0; a <= 1; a++) { // ö�ټ��Ƿ�����
//		for (b = 0; b <= 1; b++) { // ö�����Ƿ�����
//			for (c = 0; c <= 1; c++) { // ö�ٱ��Ƿ�����
//				for (d = 0; d <= 1; d++) { // ö�ٶ��Ƿ�����
//					if ((a + b + c + d) != 1) continue; // ֻ��һ����˵�滰
//					if ((a == 1 && b == 0) || (a == 0 && b == 1) || (b == 0 && c == 0) || (a == 0 && c == 1 && b == 1) || (a + c <= 1 && d == 0)) {
//						// �����ĸ��˵Ļ��ж��Ƿ��������
//						printf("��������%d����������%d����������%d����������%d\n", a, b, c, d);
//						printf("˵�滰�����ǣ�");
//						if (a == 1) printf("��\n");
//						if (b == 1) printf("��\n");
//						if (c == 1) printf("��\n");
//						if (d == 1) printf("��\n");
//						return 0;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
 
//#include <stdio.h>
//
//int main() {
//	int a, b, c, d; // �ĸ����Ƿ������ı�־��1��ʾ������0��ʾδ����
//	int cnt; // ��¼˵�滰������
//	for (a = 0; a <= 1; a++) { // ö�ټ��Ƿ�����
//		for (b = 0; b <= 1; b++) { // ö�����Ƿ�����
//			for (c = 0; c <= 1; c++) { // ö�ٱ��Ƿ�����
//				for (d = 0; d <= 1; d++) { // ö�ٶ��Ƿ�����
//					cnt = 0; // ��ʼ��˵�滰������Ϊ0
//					if (a == 1 && b == 0) cnt++; // ��˵�滰��������
//					if (b == 0 && c == 0) cnt++; // �Һͱ���˵�滰����û����
//					if (a == 0 && b == 1 && c == 0) cnt++; // ��˵�滰��������
//					if (a + c >= 1) cnt++; // ��˵�滰���׻��������һ������
//					if (cnt == 1) { // ֻ��һ����˵�滰
//						printf("��������");
//						if (a == 1) printf("��\n");
//						else if (b == 1) printf("��\n");
//						else if (c == 1) printf("��\n");
//						else printf("��\n");
//						printf("˵�滰����");
//						if (a == 1) printf("��\n");
//						if (b == 1) printf("��\n");
//						if (c == 1) printf("��\n");
//						if (d == 1) printf("��\n");
//						return 0; // �ҵ��𰸣���������
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}