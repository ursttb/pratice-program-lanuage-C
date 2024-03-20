//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//#include<stdio.h>
//#include<stdlib.h>
//int n = 0;//一个node的data有n个数字n不超过10
//int a[10];
//
//struct node 
//{
//	int data;//存储数据
//	node* next;//存储下一个动态分配的空间地址
//};
//
////创建n个链表
//node* create(int a[])
//{
//	node* p, * pre, * head;  //设置node自定义类型的地址准备存储动态开辟的空间,其中pre保存当前结点的前驱结点， head为头结点
//	head = (node*)malloc(sizeof(node));  //创建头结点,分配空间
//	head->next = NULL;   //头结点不需要数据域，指针域初始化为空 
//	pre = head;  //首先记录 
//	for (int i = 0; i < n; i++) 
//	{
//		p = (node*)malloc(sizeof(node));//继续分配一个新的空间（地址为p）,
//		p->data = a[i];//将输入的数据给该链表
//		p->next = NULL;//先给当前链表的下一个链表之间结点置空
//		pre->next = p;//让前一个分配的空间地址赋为当前地址,用于链表结点
//		pre = p;//
//	}
//	return head;
//}
//
//
////统计链表中某个元素出现的次数  传入的是头结点和要统计的x
//int search(node* head, int x) 
//{
//	int cnt = 0;
//	node* p = head->next;
//	while (p != NULL) 
//	{
//		if (p->data == x) cnt++;
//		p = p->next;
//	}
//	return cnt;
//}
//
//
//
////在某一位置上插入一个元素x
//void insert(node* head, int pos, int x) 
//{
//	node* p = head;
//	for (int i = 0; i < pos - 1; i++) p = p->next;  //一直到插入位置的前一个结点
//	node* q = (node*)malloc(sizeof(node));  //新建结点
//	q->data = x;   //新建结点的数据域为x
//	q->next = p->next;   //新结点的下一个结点指向原先插入位置的结点
//	p->next = q; 	//前一个位置的结点指向新结点
//}
//
//
//
////删除元素   删除以head为头结点的链表中所有数据域为x的结点
//void del(node* head, int x) 
//{
//	node* p = head->next;  //p从第一个结点开始枚举
//	node* pre = head;  //pre始终保存p的前驱结点的指针
//	while (p != NULL)
//	{
//		if (p->data == x) 
//		{
//			pre->next = p->next;
//			free(p);
//			p = pre->next;
//		}
//		else 
//		{
//			pre = p;
//			p = p->next;
//		}
//	}
//}
//
//
////主函数
//int main() 
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &a[i]);//输入n个数
//	node* l = create(a);//l是地址
//	l = l->next;
//	while (l != NULL) 
//	{
//		printf("%d ", l->data);
//		l = l->next;
//	}
//	return 0;
//}