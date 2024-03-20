//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//// #include<stdio.h>
//
//// struct poitab
//// {
////     char name[20];
////     int point;
////     struct pointab* next;  
//// };
//
//
//// int main()
//// {
////     int n = 0;
////     struct poitab maxstu;
////     scanf("%d", &n);
////     for(int i = 0; i<n; i++)
////     {
////         scanf("%s %d", &maxstu.name, &maxstu.point);
////     }
//
////     return 0;
//// }
//
//
//
//// #include<stdio.h>
//// #include<string.h>
//// #include<stdlib.h>
//// #define N 1e6+10
//
//// typedef struct studenttag
//// {
////     char name[20];
////     int point;
////     struct studenttag* next;
//// }stu;
//
//
//// int main()
//
//// {
////     int n = 0;
////     scanf("%d", &n);
////     stu* head = (stu*)malloc(sizeof(stu*));
////     scanf("%s %d", head->name, head->point);
////     for()
////     return 0;
//// }
//
//
//// #include<stdio.h>
//// #include<string.h>
//// #include<stdlib.h>
//// #define N 1000010
//
//// struct studenttag
//// {
////     char name[20];
////     int point;
////     // struct studenttag* next;
//// }stu[N];
//
//
//// int main()
//
//// {
////     int n = 0;
////     scanf("%d", &n);
////     for (int i = 0; i < n; i++)
////     {
////         scanf("%s %d", &stu[i].name, &stu[i].point);
////     }
////     struct studenttag max;
////     max.point = 0;
////     for(int i =0;i<n;i++)
////     {
////         if(max.point<=stu[i].point)
////         {
////             max = stu[i];
////         }
////     }
////     printf("%s %d", max.name, max.point);
////     return 0;
//// }
//
//
//
//
//
//
//
//
//
//
//
//
//
//////pro1
//// #include <stdio.h>
//// typedef struct studenttag
//// {
////     char name[10];
////     int age;
//// }student;
//// student fun(student* std, int n)
//// {
////     student max;
////     int i;
////     max = std[0];//结构体赋值，std是指针，指针默认第一个元素
////     for(i = 0; i<n;i++)
////     {
////         if(max.age < std[i].age)
////         {
////             max = std[i];
////         }
////     }
////     return max;
//// };
////
//// int main()
//// {
////     int n;
////     scanf("%d", &n);
////     student std[20];
////     for(int i = 0;i<n;i++)
////     {
////         scanf("%s %d", &std[i].name, &std[i].age);
////     }
////     student max;
////     max = fun(std,n);//std是数组
////     printf("%s %d", max.name, max.age);
////     return 0;
//// }
//
//
////pro2
////#include<stdio.h>
////union un
////{
////    int num;
////    char ch;
////};
////
////int main()
////{
////    printf("xmx");
////    return 0;
////}
//
//
////pro 5
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//struct student
//{
//    char name[20];
//    int score;
//    struct student* next;
//};
//
//int main()
//{
//    int max_score;
//    // //静态链表:先定义出变量，然后逐一地址域连接或置空
//    // struct student a,b,c;
//    // struct student *p;//用来遍历
//    // a.next = &b;
//    // b.next = &c;
//    // c.next NULL;
//    // p = &a;//
//    // scanf("%s %d", a.name, &a.score);//a.name是一个数组可以不加&
//    // scanf("%s %d", b.name, &b.score);
//    // scanf("%s %d", c.name, &c.score);
//    // for(int i = 0;p!=NULL;p = p->next)//如果p不是空指针（不是最后一个空指针），使p遍历下一个元素(p = p->next)
//    // {
//    //     printf("%d",p->score);        
//    // }
//
//    char Best_student[20];//成绩最好的学生的名字
//    ////动态链表的创建
//    //int n;//预定动态分配n个的链表
//    //scanf("%d", &n);
//    //struct student* head = (struct student*)malloc(sizeof(struct student));//在head地址出动态分配头链表
//    //struct student* p;
//    //p = head;
//    //scanf("%s", p->name);
//    //scanf("%d", &p->score);
//    //for (int i = 0; i < n - 1; i++)//因为头链表已经常见所以只需要再创建n-1个链表
//    //{
//    //    p->next = (struct student*)malloc(sizeof(struct student));//动态分配
//    //    scanf("%s", p ->next->name);
//    //    scanf("%d", &p->next->score);
//    //    p->next->next = NULL;
//    //    p = p->next;
//    //}//动态链表创建完成
//
//    //法二创建链表
//    int n = 0;
//    scanf("%d", &n);
//    struct student* head = NULL, * p = NULL, * tail = NULL;
//    for (int i = 0; i < n; i++)
//    {
//        p = (struct student*)malloc(sizeof(struct student));
//        scanf("%s %d", p->name, &p->score);
//        if (head == NULL)
//        {
//            head = p;//为头节点赋值
//        }
//        else
//        {
//            tail->next = p;//如果是第一个head的时候，tail->next变化其实也是head->next变化
//        }
//        tail = p;//尾结点
//    }
//    tail->next = NULL;
//
//    int Get_maxScore(struct student* head, char Best_student[20]);
//    max_score = Get_maxScore(head, Best_student);
//    printf("%s %d", Best_student, max_score);
//    return 0;
//}
//
//
//int Get_maxScore(struct student* head, char Best_student[20])
//{
//    int max_score;
//    struct student* p;
//    max_score = head-> score;
//    strcpy(Best_student, head->name);
//    p = head;//p用来遍历
//    while (p != NULL)//p == NULL时遍历完成
//    {
//        if (p->score > max_score)
//        {
//            max_score = p->score;
//            strcpy(Best_student, p->name);
//        }
//        p = p->next;//指向下一个结构体
//    }
//    return max_score;
//}