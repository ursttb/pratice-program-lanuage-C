//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
///*
//ÿ���ߴ洢�����������һ���ߡ��ߵ��յ㡢�ߵ���㡢�߳�����Ϣ
//*/
//struct EDGE
//{
//	int u, v, len;//��㡢�յ㡢�߳�
//	struct EDGE* next;
//	//...
//}epool[100001];
///*
//ÿ����洢��������ĵ�һ����
//*/
//struct Node
//{
//	struct EDGE* fir;
//	//...
//}nodes[100001];
//int N, M,etop;//��ͱߵĸ���,etop�ǵ�ǰֵ��������������±���
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
//		//����ͼ��Ҫ������
//		//addedge(v, u, len);
//	}
//	return 0;
//}