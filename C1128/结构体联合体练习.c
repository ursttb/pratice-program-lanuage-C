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
////     max = std[0];//�ṹ�帳ֵ��std��ָ�룬ָ��Ĭ�ϵ�һ��Ԫ��
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
////     max = fun(std,n);//std������
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
//    // //��̬����:�ȶ����������Ȼ����һ��ַ�����ӻ��ÿ�
//    // struct student a,b,c;
//    // struct student *p;//��������
//    // a.next = &b;
//    // b.next = &c;
//    // c.next NULL;
//    // p = &a;//
//    // scanf("%s %d", a.name, &a.score);//a.name��һ��������Բ���&
//    // scanf("%s %d", b.name, &b.score);
//    // scanf("%s %d", c.name, &c.score);
//    // for(int i = 0;p!=NULL;p = p->next)//���p���ǿ�ָ�루�������һ����ָ�룩��ʹp������һ��Ԫ��(p = p->next)
//    // {
//    //     printf("%d",p->score);        
//    // }
//
//    char Best_student[20];//�ɼ���õ�ѧ��������
//    ////��̬����Ĵ���
//    //int n;//Ԥ����̬����n��������
//    //scanf("%d", &n);
//    //struct student* head = (struct student*)malloc(sizeof(struct student));//��head��ַ����̬����ͷ����
//    //struct student* p;
//    //p = head;
//    //scanf("%s", p->name);
//    //scanf("%d", &p->score);
//    //for (int i = 0; i < n - 1; i++)//��Ϊͷ�����Ѿ���������ֻ��Ҫ�ٴ���n-1������
//    //{
//    //    p->next = (struct student*)malloc(sizeof(struct student));//��̬����
//    //    scanf("%s", p ->next->name);
//    //    scanf("%d", &p->next->score);
//    //    p->next->next = NULL;
//    //    p = p->next;
//    //}//��̬���������
//
//    //������������
//    int n = 0;
//    scanf("%d", &n);
//    struct student* head = NULL, * p = NULL, * tail = NULL;
//    for (int i = 0; i < n; i++)
//    {
//        p = (struct student*)malloc(sizeof(struct student));
//        scanf("%s %d", p->name, &p->score);
//        if (head == NULL)
//        {
//            head = p;//Ϊͷ�ڵ㸳ֵ
//        }
//        else
//        {
//            tail->next = p;//����ǵ�һ��head��ʱ��tail->next�仯��ʵҲ��head->next�仯
//        }
//        tail = p;//β���
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
//    p = head;//p��������
//    while (p != NULL)//p == NULLʱ�������
//    {
//        if (p->score > max_score)
//        {
//            max_score = p->score;
//            strcpy(Best_student, p->name);
//        }
//        p = p->next;//ָ����һ���ṹ��
//    }
//    return max_score;
//}