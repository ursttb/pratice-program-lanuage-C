#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


#if 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int n;//目标质量数
int res = 0;//方案数
int term[10010];
int ans[10010][10010];//方案
int dfs_fin;
void dfs(int x, int mg)
{
	int i = 0;
	if (mg > n) return;//超过题目限制
	if (x > 10)//完成一次深搜
	{
		if (mg == n)//达到末尾节点并符合条件就显示
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
		mg += i;//现值更新
		dfs(x + 1, mg);
		mg -= i;//恢复现场
	}
}

int main()
{
	int x = 1, mg = 0;//初始点、初始质量数
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

int n;//目标质量数
int res = 0;//方案数
int term[10010][59055];//方案
int dfs_fin;
void dfs(int x, int mg)
{
	int i = 0;
	if (mg > n || x > 10) return;//超过题目限制
	for (i = 1; i <= 3; i++)
	{
		term[res][x] = i;
		mg += i;//现值更新
		if (x + 1 > 10)//完成一次深搜
		{
			if (x == 10 && mg == n)//达到末尾节点并符合条件就显示
			{
				res++;
			}
		}
		dfs(x + 1, mg);
		mg -= i;//恢复现场
	}
}

int main()
{
	int x = 1, mg = 0;//初始点、初始质量数
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
//	{ //甲说话的真假
//		for (b = 0; b <= 1; b++) 
//		{ //乙说话的真假
//			for (c = 0; c <= 1; c++)
//			{ //丙说话的真假
//				for (d = 0; d <= 1; d++) 
//				{ //丁说话的真假
//					if ((a + b + c + d) == 1)
//					{ //只有一个人说真话
//						if ((a == !b) && (a == !c) && (a != d)) 
//						{ //甲说话的内容
//							printf("甲作案，甲说真话\n");
//							return 0;
//						}
//						if ((b == 0) && (c == 0))
//						{ //乙和丙都说谎话
//							printf("丁作案，丁说真话\n");
//							return 0;
//						}
//						if ((a == !b) && (a != !c) && (a != d))
//						{ //丙说话的内容
//							printf("乙作案，乙说真话\n");
//							return 0;
//						}
//						if ((a != !c) && (d == 1)) 
//						{ //丁说话的内容
//							printf("丙作案，丙说真话\n");
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
//	int a, b, c, d; // 四个人是否作案的变量，1表示作案，0表示未作案
//	int cnt = 0; // 记录说真话的人数
//	int ans; // 记录作案的人
//	for (a = 0; a <= 1; a++) { // 枚举甲是否作案
//		for (b = 0; b <= 1; b++) { // 枚举乙是否作案
//			for (c = 0; c <= 1; c++) { // 枚举丙是否作案
//				for (d = 0; d <= 1; d++) { // 枚举丁是否作案
//					if (a + b + c + d != 1) continue; // 只有一个人说真话
//					cnt = 0; // 每次循环前清零
//					if (a == 1 && b == 0) cnt++; // 甲说真话，乙作案
//					if (b == 0 && c == 0) cnt++; // 乙和丙都说真话，都没作案
//					if (a == 0 && b == 1 && c == 0) cnt++; // 丙说真话，甲作案
//					if (a + c >= 1) cnt++; // 甲和丙中至少有一个说真话，丁说真话
//					if (cnt == 1) { // 只有一个人说真话
//						ans = a * 8 + b * 4 + c * 2 + d; // 记录作案的人
//						printf("作案的人是%d\n", ans + 1); // 输出作案的人
//						printf("说真话的人是:");
//						if (a == 1) printf("甲 ");
//						if (b == 1) printf("乙 ");
//						if (c == 1) printf("丙 ");
//						if (d == 1) printf("丁 ");
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
//	int a, b, c, d; // 四个人是否作案的状态，0表示没作案，1表示作案
//	for (a = 0; a <= 1; a++) { // 枚举甲是否作案
//		for (b = 0; b <= 1; b++) { // 枚举乙是否作案
//			for (c = 0; c <= 1; c++) { // 枚举丙是否作案
//				for (d = 0; d <= 1; d++) { // 枚举丁是否作案
//					if ((a + b + c + d) != 1) continue; // 只有一个人说真话
//					if ((a == 1 && b == 0) || (a == 0 && b == 1) || (b == 0 && c == 0) || (a == 0 && c == 1 && b == 1) || (a + c <= 1 && d == 0)) {
//						// 根据四个人的话判断是否符合条件
//						printf("甲作案：%d，乙作案：%d，丙作案：%d，丁作案：%d\n", a, b, c, d);
//						printf("说真话的人是：");
//						if (a == 1) printf("甲\n");
//						if (b == 1) printf("乙\n");
//						if (c == 1) printf("丙\n");
//						if (d == 1) printf("丁\n");
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
//	int a, b, c, d; // 四个人是否作案的标志，1表示作案，0表示未作案
//	int cnt; // 记录说真话的人数
//	for (a = 0; a <= 1; a++) { // 枚举甲是否作案
//		for (b = 0; b <= 1; b++) { // 枚举乙是否作案
//			for (c = 0; c <= 1; c++) { // 枚举丙是否作案
//				for (d = 0; d <= 1; d++) { // 枚举丁是否作案
//					cnt = 0; // 初始化说真话的人数为0
//					if (a == 1 && b == 0) cnt++; // 甲说真话，乙作案
//					if (b == 0 && c == 0) cnt++; // 乙和丙都说真话，都没作案
//					if (a == 0 && b == 1 && c == 0) cnt++; // 丙说真话，甲作案
//					if (a + c >= 1) cnt++; // 丁说真话，甲或丙至少有一人作案
//					if (cnt == 1) { // 只有一个人说真话
//						printf("作案的是");
//						if (a == 1) printf("甲\n");
//						else if (b == 1) printf("乙\n");
//						else if (c == 1) printf("丙\n");
//						else printf("丁\n");
//						printf("说真话的是");
//						if (a == 1) printf("甲\n");
//						if (b == 1) printf("乙\n");
//						if (c == 1) printf("丙\n");
//						if (d == 1) printf("丁\n");
//						return 0; // 找到答案，结束程序
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}