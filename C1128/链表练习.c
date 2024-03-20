//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//#include"链表练习.h"
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
//student_create1(int n) //含有头尾结点的链表生成
//{
//    student* head, * node, * end;//定义头节点，普通节点，尾部节点；
//    head = (student*)malloc(sizeof(student));//分配地址
//    end = head;         //若是空链表则头尾节点一样
//    for (int i = 0; i < n; i++) 
//    {
//        node = (student*)malloc(sizeof(student));
//        scanf("%s %d", &node->name, &node->point);//输入数据
//        end->next = node;
//        end = node;
//    }
//    end->next = NULL;//结束创建
//    return head;
//}


//
//student_create2(student* s,int n)//无头尾链表生成
//{
//    student* ps = s;
//    for (int i = 0; i < n; i++)
//    {
//        if (i == 0)
//        {
//            scanf("%s %d", &s->name, &s->point);//输入数据
//            s->next = NULL;
//        }
//        else
//        {
//            student* node = (student*)malloc(sizeof(student));//开辟空间
//            scanf("%s %d", &node->name, &node->point);//输入数据
//            ps->next = node;
//            node->next = NULL;
//        }
//    }
//}