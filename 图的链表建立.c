//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
///*
//每条边存储出边链表的下一个边、边的终点、边的起点、边长等信息
//*/
//struct EDGE
//{
//	int u, v, len;//起点、终点、边长
//	struct EDGE* next;
//	//...
//}epool[100001];
///*
//每个点存储出边链表的第一条边
//*/
//struct Node
//{
//	struct EDGE* fir;
//	//...
//}nodes[100001];
//int N, M,etop;//点和边的个数,etop是当前值，方便用于添加新变量
//
//void addedge(int u, int v, int len)
//{
//	epool[etop].u = u;
//	epool[etop].v = v;
//	epool[etop].len = len;
//	epool[etop].next = nodes[u].fir;
//	nodes[u].fir = &epool[etop];
//	etop++;
//}
//
//int main()
//{
//	int i, u, v, len;
//	scanf("%d%d", &N, &M);
//	for (i = 1; i <= M; i++)
//	{
//		scanf("%d%d%d", &u, &v, &len);
//		addedge(u, v, len);
//		//无向图还要加这行
//		//addedge(v, u, len);
//	}
//	return 0;
//}