//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//#include<stdio.h>
//#include<stdlib.h>
//int n = 0;//һ��node��data��n������n������10
//int a[10];
//
//struct node 
//{
//	int data;//�洢����
//	node* next;//�洢��һ����̬����Ŀռ��ַ
//};
//
////����n������
//node* create(int a[])
//{
//	node* p, * pre, * head;  //����node�Զ������͵ĵ�ַ׼���洢��̬���ٵĿռ�,����pre���浱ǰ����ǰ����㣬 headΪͷ���
//	head = (node*)malloc(sizeof(node));  //����ͷ���,����ռ�
//	head->next = NULL;   //ͷ��㲻��Ҫ������ָ�����ʼ��Ϊ�� 
//	pre = head;  //���ȼ�¼ 
//	for (int i = 0; i < n; i++) 
//	{
//		p = (node*)malloc(sizeof(node));//��������һ���µĿռ䣨��ַΪp��,
//		p->data = a[i];//����������ݸ�������
//		p->next = NULL;//�ȸ���ǰ�������һ������֮�����ÿ�
//		pre->next = p;//��ǰһ������Ŀռ��ַ��Ϊ��ǰ��ַ,����������
//		pre = p;//
//	}
//	return head;
//}
//
//
////ͳ��������ĳ��Ԫ�س��ֵĴ���  �������ͷ����Ҫͳ�Ƶ�x
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
////��ĳһλ���ϲ���һ��Ԫ��x
//void insert(node* head, int pos, int x) 
//{
//	node* p = head;
//	for (int i = 0; i < pos - 1; i++) p = p->next;  //һֱ������λ�õ�ǰһ�����
//	node* q = (node*)malloc(sizeof(node));  //�½����
//	q->data = x;   //�½�����������Ϊx
//	q->next = p->next;   //�½�����һ�����ָ��ԭ�Ȳ���λ�õĽ��
//	p->next = q; 	//ǰһ��λ�õĽ��ָ���½��
//}
//
//
//
////ɾ��Ԫ��   ɾ����headΪͷ��������������������Ϊx�Ľ��
//void del(node* head, int x) 
//{
//	node* p = head->next;  //p�ӵ�һ����㿪ʼö��
//	node* pre = head;  //preʼ�ձ���p��ǰ������ָ��
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
////������
//int main() 
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &a[i]);//����n����
//	node* l = create(a);//l�ǵ�ַ
//	l = l->next;
//	while (l != NULL) 
//	{
//		printf("%d ", l->data);
//		l = l->next;
//	}
//	return 0;
//}