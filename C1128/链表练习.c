//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//#include"������ϰ.h"
//
//int main()
//{
//    int n = 0;
//    student* head, * p, * tail;
//    scanf("%d", &n);
//    head = (student*)malloc(sizeof(student));
//    head->next = NULL;
//    for (int i = 0; i < n; i++)
//    {
//        p = (student*)malloc(sizeof(student));
//        scanf("%s %d", &p->name, &p->point);
//        p->next = tail;
//        head->next = p;
//        if (i == n - 1)
//        {
//            tail = (student*)malloc(sizeof(student));
//            scanf("%s %d", &tail->name, &tail->point);
//            p->next = tail;
//            tail->next = NULL
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//
//    }
//    return 0;
//}
//
//
//
//student_create1(int n) //����ͷβ������������
//{
//    student* head, * node, * end;//����ͷ�ڵ㣬��ͨ�ڵ㣬β���ڵ㣻
//    head = (student*)malloc(sizeof(student));//�����ַ
//    end = head;         //���ǿ�������ͷβ�ڵ�һ��
//    for (int i = 0; i < n; i++) 
//    {
//        node = (student*)malloc(sizeof(student));
//        scanf("%s %d", &node->name, &node->point);//��������
//        end->next = node;
//        end = node;
//    }
//    end->next = NULL;//��������
//    return head;
//}


//
//student_create2(student* s,int n)//��ͷβ��������
//{
//    student* ps = s;
//    for (int i = 0; i < n; i++)
//    {
//        if (i == 0)
//        {
//            scanf("%s %d", &s->name, &s->point);//��������
//            s->next = NULL;
//        }
//        else
//        {
//            student* node = (student*)malloc(sizeof(student));//���ٿռ�
//            scanf("%s %d", &node->name, &node->point);//��������
//            ps->next = node;
//            node->next = NULL;
//        }
//    }
//}