//#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//struct Student
//{
//    char name[20];
//    int score;
//    struct Student *next;
//};
//
//int Get_maxScore(struct Student *head, char Best_student[20])
//{
//    int max_score;
//    struct Student *p;      //用于遍历链表的结构体
//
//    max_score = head->score;        //为最高分赋值
//    strcpy(Best_student,head->name);    //为成绩最好的学生姓名赋值
//
//    p = head;
//    while(p != NULL)
//    {
//        if(p->score > max_score)        //判断分数高低，高则重新赋值
//        {
//            max_score = p->score;
//            strcpy(Best_student,p->name);
//        }
//        p = p->next;
//    }
//    return max_score;
//}
//
//int main()
//{
//    int i,n;
//    int Max_score;          //最高的分数
//    char Best_student[20];  //分数最高的学生姓名
//    struct Student *head = malloc(sizeof(struct Student));  //创建头节点
//    struct Student *p;     
//    
//    p = head;
//    scanf("%d",&n);     //为头结点进行赋值
//    scanf("%s",p->name);
//    scanf("%d",&(p->score));
//    for(i = 0; i < (n-1); i++)      //依次创建每个结点并赋值
//    {
//        p->next = malloc(sizeof(struct Student));
//        scanf("%s",p->next->name);
//        scanf("%d",&(p->next->score));
//        p->next->next = NULL;
//        p = p->next;    
//    }   //动态链表创建完成
//    Max_score = Get_maxScore(head, Best_student);
//    printf("%s %d",Best_student,Max_score);
//
//}