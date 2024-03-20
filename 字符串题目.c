#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

//过滤空格
//#include<stdio.h>
//#include<string.h>
//
//int main()
//
//{
//	char s1[200] = { 0 };
//	char s2[200] = { 0 };
//	int i = 0, j = 0;
//	gets(s1);
//	int len = strlen(s1);
//	for(int k = 0; k < len; k++)
//	{
//		if (s1[i] == ' '&&s1[i+1] == ' ')
//		{
//			i++;
//			continue;
//		}
//		else
//		{
//			s2[j] = s1[i];
//		}
//		i++;
//		j++;
//	}
//	//s2[j] = '\0';//这句不要也行
//	printf("%s", s2);
//	return 0;
//}




//排列国家名字
//方案一：
//#include<stdio.h>
//#include<string.h>
//
//int main()
//
//{
//	int n = 0;
//	char name[20][20] = { 0 };
//	char t[20] = { 0 };
//	scanf("%d", &n);
//	getchar();//清除回车，防止gets读取
//	for (int i = 0; i < n; i++)
//	{
//		gets(name[i]);//每一行给一串字符串
//	}
//
//	for (int j = n; j > 0; j--) //n是个数，j = 个数，个数要随着冒泡逐渐变小
//	{
//		for (int i = 0; i < j-1; i++) //j - 1是第j个元素的下标 
//		{
//			if (strcmp(name[i], name[i + 1]) > 0) //说明第一个字符应该在下，进行交换
//			{
//				strcpy(t, name[i]);//字符串2取出放到字符串1后边，相当于给t[20]赋值
//				strcpy(name[i], name[i + 1]);//空出来可以放入name[i+1]的字符串
//				strcpy(name[i + 1], t);
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		puts(name[i]); //输出每一行的字符串也可以使用printf("%s\n", n[i]);需要手动换行
//	}
//	return 0;
//}
//方案二：
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//    int n;				//n个国家名
//    char a[25][21];		//因为国家名是字符数组，所以我们要把数组存到数组中
//    char t[21];			//中转数组，比较交换的时候使用
//    // 1.读入n
//    scanf("%d", &n);
//    getchar();			//这里如果下面读取数据用的是gets()，这一句一定要有
//    // 2.读入n个字符数组
//    for (int i = 1; i <= n; i++) {
//        gets(a[i]);		//这里如果使用cin>>a[i]，上一句getchar()就不用写
//    }
//    // 3.利用冒泡排序对一维数组里的每个元素做处理
//    for (int j = n; j >= 2; j--) {
//        for (int i = 1; i < j; i++) {
//            // 这里使用字符串的一些常用函数，可以查询文章最后的表格
//            if (strcmp(a[i], a[i + 1]) > 0) {
//                strcpy(t, a[i]);
//                strcpy(a[i], a[i + 1]);
//                strcpy(a[i + 1], t);
//            }
//        }
//    }
//    // 4.输出结果
//    for (int i = 1; i <= n; i++) {
//        puts(a[i]);
//    }
//    return 0;
//}



//字符串相等

//方案一Run Time Error
//#include<stdio.h>
//#include<string.h>
//
////void Fun(char* s[20], char* t[20])//函数调用失败
////{
////	int len = strlen(s);
////	int i = 0, j = 0;
////	for (i = 0,j = 0; i < len; i++)
////	{
////		if (s[i] != ' ')
////		{
////			if (s[i] > 96)
////			{
////				t[j] = s[i] - 32;
////			}
////			else
////			{
////				t[j] = s[i];
////			}
////		}
////		else
////		{
////			break;
////		}
////	}
////}
//
//int main()
//
//{
//	char s1[20] = { 0 };
//	char s2[20] = { 0 };
//	char t1[20] = { 0 };
//	char t2[20] = { 0 };
//	gets(s1);
//	gets(s2);
//		int len = strlen(s1);
//		int i = 0, j = 0;
//		for (i = 0, j = 0; i < len; i++)
//		{
//			if (s1[i] != ' ')
//			{
//				if (s1[i] > 96)
//				{
//					t1[j] = s1[i] - 32;
//				}
//				else
//				{
//					t1[j] = s1[i];
//				}
//			}
//			else
//			{
//				break;
//			}
//		}
//	len = strlen(s2);
//	for (i = 0, j = 0; i < len; i++)
//	{
//		if (s2[i] != ' ')
//		{
//			if (s2[i] > 96)
//			{
//				t2[j] = s2[i] - 32;
//			}
//			else
//			{
//				t2[j] = s2[i];
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (strcmp(t1, t2) == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}


//方案二
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    int len1, len2;
//    char line1[100] = { '0' }, line2[100] = { '0' }, line3[100] = { '0' }, line4[100] = { '0' };//初始化字符串 
//    char t;
//    gets(line1);
//    gets(line2);
//    len1 = strlen(line1);
//    len2 = strlen(line2);
//    int i, j;
//    j = 0;
//    for (i = 0; i < len1; i++)
//    {
//        if (line1[i] != ' ')
//        {
//            line3[j] = line1[i];
//            j++;
//        }//把Line1去掉空格给line3 
//    }
//    j = 0;
//    for (i = 0; i < len2; i++)
//    {
//        if (line2[i] != ' ')
//        {
//            line4[j++] = line2[i];
//        }      //把line2去掉空格给line4 
//    }
//    len1 = strlen(line3);
//    len2 = strlen(line4);
//    if (len1 != len2)//长度不等直接判断为NO
//    {
//        printf("NO");
//        return 0;
//    }
//    for (i = 0; i < len1; i++)
//    {
//        if (line3[i] >= 'A' && line3[i] <= 'Z')
//        {
//            line3[i] = line3[i] + 32; //A与a相差32，实际上是把大写全变为小写 
//        }
//        if (line4[i] >= 'A' && line4[i] <= 'Z')//在一个循环里对两个line进行处理         节省了时间
//        {
//            line4[i] = line4[i] + 32;
//        }
//    }
//    //for (i = 1; i < len1; i++)//冒泡排序，通过ASCII码进行比较 //这段冒泡排序根据题意可以不要
//    //{
//    //    for (j = 0; j < len1 - i; j++)
//    //    {
//    //        if (line3[j] > line3[j + 1])
//    //        {
//    //            t = line3[j];
//    //            line3[j] = line3[j + 1];
//    //            line3[j + 1] = t;
//    //        }
//    //        if (line4[j] > line4[j + 1]) //在一个循环，对两个line进行处理，减小时空复杂度 
//    //        {
//    //            t = line4[j];
//    //            line4[j] = line4[j + 1];
//    //            line4[j + 1] = t;
//    //        }
//    //    }
//    //}
//    if (strcmp(line3, line4) == 0)//strcmp 函数，对两个字符串进行判断
//    {
//        printf("YES");//出结果 
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}

//测试方案一
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char a[20] = { 0 };
//    char b[20] = { 0 };
//    char c[20] = { 0 };
//    char d[20] = { 0 };
//    int i = 0, j = 0;
//    gets(a);
//    gets(b);
//    int len1 = strlen(a);
//    int len2 = strlen(b);
//    for (i = 0, j = 0; i < len1; i++)
//    {
//        if (a[i] != ' ')
//        {
//            c[j] = a[i];
//            j++;
//        }
//    }
//    for (i = 0, j = 0; i < len2; i++)
//    {
//        if (b[i] != ' ')
//        {
//            d[j] = b[i];
//            j++;
//        }
//    }
//    len1 = strlen(c);
//    len2 = strlen(d);
//    if (len1 == len2)
//    {
//        for (i = 0; i < len1; i++)
//        {
//            if (c[i] > 96)
//            {
//                c[i] = c[i] - 32;
//            }
//            if (d[i] > 96)
//            {
//                d[i] = d[i] - 32;
//            }
//        }
//    }
//    else
//    {
//        printf("NO");
//        return 0;
//    }
//    if (strcmp(c, d) == 0)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}
//测试方案二
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char a[20] = { 0 };
//    char b[20] = { 0 };
//    char c[20] = { 0 };
//    char d[20] = { 0 };
//    int i = 0, j = 0;
//    gets(a);
//    gets(b);
//    int len1 = 0, len2 = 0;
//    len1 = strlen(a);
//    len2 = strlen(b);
//    for (i = 0, j = 0; i < len1; i++)
//    {
//        if (a[i] != ' ')
//        {
//            c[j] = a[i];
//            j++;
//        }
//    }
//    for (i = 0, j = 0; i < len2; i++)
//    {
//        if (b[i] != ' ')
//        {
//            d[j] = b[i];
//            j++;
//        }
//    }
//    len1 = strlen(c);
//    len2 = strlen(d);
//    if (len1 != len2)
//    {
//        printf("NO");
//        return 0;
//    }
//    else
//    {
//        for (i = 0; i < len1; i++)
//        {
//            if (c[i] > 96)
//            {
//                c[i] = c[i] - 32;
//            }
//            if (d[i] > 96)
//            {
//                d[i] = d[i] - 32;
//            }
//        }
//    }
//    if (strcmp(c, d) == 0)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}




//合法C标识符
//方案一
//#include<stdio.h>
//#include<string.h>
//
//char a1[36][20] =
//{
//    "int",
//    "sizeof"
//    ,"long"
//    ,"short"
//    ,"float"
//    ,"double"
//    ,"char"
//    ,"unsigned"
//    ,"signed"
//    ,"const"
//    ,"void"
//    ,"volatile"
//    ,"enum"
//   ,"struct"
//   ,"union"
//    ,"if"
//    ,"else"
//    ,"goto"
//    ,"switch"
//    ,"case"
//    ,"do"
//   ,"while"
//    ,"for"
//    ,"continute"
//    ,"break"
//    ,"return"
//    ,"default"
//    ,"typedef"
//    ,"auto"
//    ,"register"
//    ,"extern"
//    ,"static"
//    ,"return"
//    ,"typedef"
//    ,"default"
//
//};//存储名字
//
//int main()
//{
//    char a[20] = { 0 };
//    gets(a);
//    int len = strlen(a);
//    for (int j = 0; j < 36; j++)//对比合法性
//    {
//        if (strcmp(a, a1[j]) == 0)
//        {
//            printf("no");
//            return 0;
//        }
//    }
//    for (int i = 0; i < len; i++)//对比单个字符合法性
//    {
//        if (i == 0)
//        {
//            if (a[i] >= '0' && a[i] <= '9')
//            {
//                printf("no");
//                return 0;
//            }
//        }
//        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z') || (a[i] >= '0' && a[i] <= '9') || ((a[i]) == '_'))
//        {
//            ;
//        }
//        else
//        {
//            printf("no");
//            return 0;
//        }
//    }
//    printf("yes");
//    return 0;
//}

//方案二
// #define _CRT_SECURE_NO_WARNINGS
// #include<stdio.h>
// #include<string.h>

// char a1[36][20] = {
//     "int",
//     "sizeof"
//     ,"long"
//     ,"short"
//     ,"float"
//     ,"double"
//     ,"char"
//     ,"unsigned"
//     ,"signed"
//     ,"const"
//     ,"void"
//     ,"volatile"
//     ,"enum"
//    ,"struct"
//    ,"union"
//     ,"if"
//     ,"else"
//     ,"goto"
//     ,"switch"
//     ,"case"
//     ,"do"
//    ,"while"
//     ,"for"
//     ,"continute"
//     ,"break"
//     ,"return"
//     ,"default"
//     ,"typedef"
//     ,"auto"
//     ,"register"
//     ,"extern"
//     ,"static"
//     ,"return"
//     ,"typedef"
//     ,"default"

// };
// int main()
// {
//     char a[100];
//     scanf("%s", a);
//     int len = strlen(a);
//     int flag = 0;

//     for (int i = 0; i < len; i++)
//     {
//         for (int j = 0; j < 36; j++)
//         {
//             if (strcmp(&a[i],a1[j]) == 0)
//             {
//                 printf("no");
//                 return 0;
//             }
//         }

//     }
//     if ((a[0] == '_') || (a[0] >= 'a' && a[0] <= 'z') || (a[0] >= 'A' && a[0] <= 'Z'))
//     {
//         for (int i = 0; i < len; i++)
//         {
//             if ((a[i] == '_') || (a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9'))
//             {
//                 flag = 1;
//             }
//             else
//             {
//                 flag = 0;
//                 break;

//             }

//         }

//     }
//     if (flag == 1)
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }



//删除单词后缀

//方案一
//#include<stdio.h>
//#include<string.h>
//
//int main()
//
//{
//    char a[20] = { 0 };
//    gets(a);
//    int len = strlen(a);
//    if (a[len - 2] == 'e' && a[len - 1] == 'r')
//    {
//        a[len - 2] = '\0';
//        printf("%s", a);
//    }
//    else if (a[len - 2] == 'll' && a[len - 1] == 'y')
//    {
//        a[len - 2] = '\0';
//        printf("%s", a);
//    }
//    else if (a[len - 3] == 'i' && a[len - 2] == 'n' && a[len - 1] == 'g')
//    {
//        a[len - 2] = '\0';
//        printf("%s", a);
//    }
//    else
//    {
//        printf("%s", a);
//    }
//    return 0;
//}

//方案二
//#include<stdio.h>  
//#include<string.h>  
//int main()
//{
//	char a[32];  //按照题意定义一个字符数组
//	char* p;  //定义一个指针
//	gets(a);
//	p = a;
//	if (strlen(a) <= 2)  //如果输入的单词长度为2，则直接输出
//		printf("%s\n", a);
//	else if (strlen(a) == 3)//如果输入的单词长度为3
//	{
//		if (strcmp(p + 1, "er") == 0 || strcmp(p + 1, "ly") == 0)//判断单词是否已"er"或者"ly"结尾
//			printf("%c\n", a[0]);//如果是，则输出字符数组第1位
//		else
//			printf("%s\n", a);//如果不是，则直接输出
//	}
//	else
//	{
//		if (strcmp(p + strlen(a) - 3, "ing") == 0)//判断单词是否已"ing"结尾  
//			a[strlen(a) - 3] = NULL;//将字符数组的后3位置空  
//		p = a;
//		if (strcmp(p + strlen(a) - 2, "er") == 0 || strcmp(p + strlen(a) - 2, "ly") == 0)//判断单词是否已"er"或者"ly"结尾
//			a[strlen(a) - 2] = NULL; //将字符数组的后3位置空   
//		printf("%s\n", a);
//	}
//
//	return 0;
//}






//最高分数的学生名字
//#include<stdio.h>
//#include<string.h>
//
//int main()
//
//{
//    int N = 0;
//    int point[20] = { 0 };
//    char ch[20][20] = { 0 };
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &point[i]);
//        getchar();//这里防止读取了空格
//        gets(ch[i]);
//    }
//    for (int i = 0; i < N; i++)
//    {
//        if (point[i] < point[i + 1])
//        {
//            strcpy(ch[i], ch[i + 1]);
//        }
//    }
//    puts(ch[0]);
//    return 0;
//}








//最长最短单词

#include<stdio.h>
#include<string.h>

int main()

{
    char ch[20][20] = { 0 };
    int len[20] = { 0 };
    int k = 0;
    int i = 0;
    int flag = 1;
    for (i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            scanf("%c", &ch[i][j]);
            if (ch[i][j] == '\n')
            {
                ch[i][j] = '\0';
                len[i] = j;
                goto goto_label;
            }
            if (ch[i][j] == ' ' || ch[i][j] == ',')
            {
                ch[i][j] = '\0';
                len[i] = j;
                break;
            }
        }
    }
    goto_label:;
    int len1 = i+1;
    for (i = 0, k = 0; i < len1; i++)
    {
        if (len[i] < len[i + 1])
        {
            k = i + 1;
            flag = 0;
        }
    }
    if (flag == 1)
    {
        puts(ch[0]);
    }
    else
    {
        puts(ch[k]);
    }
    for (i = 0, k = 0; i < len1; i++)
    {
        if (len[0] > len[i+1])
        {
            k = i + 1;
            flag = 0;
        }
    }
    if (flag = 1)
    {
        puts(ch[0]);
    }
    else
    {
        puts(ch[k]);
    }
    return 0;
}



#include<stdio.h>
#include<string.h>

int main()

{
    char ch[20][20] = { 0 };
    int len[20] = { 0 };
    int k = 0;
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            scanf("%c", &ch[i][j]);
            if (ch[i][j] == ' ' || ch[i][j] == ',')
            {
                ch[i][j] = '/0';
                len[i] = j;
                break;
            }
        }
    }
    int len1 = strlen(ch);
    for (i = 0; i < len1; i++)
    {
        if (len[i] < len[i + 1])
        {
            k = i + 1;
        }
    }
    puts(ch[k]);
    for (i = 0, k = 0; i < len; i++)
    {
        if (len[i] > len[i + 1])
        {
            k = i + 1;
        }
    }
    puts(ch[k]);
    return 0;
}


//未解决方案
// #include<stdio.h>
// #include<string.h>

// int main()

// {
//     char s[100] = {0};
//     char ch[20][20] = { 0 };//记录单词
//     int len[20] = { 0 };//各个单词的长度
//     int word = 0;//记录单词的个数
//     int j = 0;//比较单词的长度用
//     int k = 0;//输出的单词对应字符串的下标
//     int i = 0;
//     int l = 0;//记录原字符串下标
//     gets(s);
//     int lenstr = strlen(s);
//     for(i = 0,l = 0;i<20; i++)
//     {
//         for(j = 0; l<lenstr; j++)
//         {
//             if (s[l] != ' ' && s[l] != ',')
//             {
//                 ch[i][j] = s[l];
//                 len[i] = j;
//                 l++;
//             }
//             else
//             {
//                 l++;
//                 word++;
//                 break;
//             }
//         }
//     }
//     // for (i = 0; i < 20; i++)//输入句子,并记录每个单词的长度
//     // {
//     //     for (int j = 0; j < 20; j++)
//     //     {
//     //         scanf("%c", &ch[i][j]);
//     //         if (ch[i][j] == '\n')
//     //         {
//     //             ch[i][j] = '\0';
//     //             len[i] = j;
//     //             goto goto_label;
//     //         }
//     //         if (ch[i][j] == ' ' || ch[i][j] == ',')
//     //         {
//     //             ch[i][j] = '\0';
//     //             word++;
//     //             len[i] = j;
//     //             break;
//     //         }
//     //     }
//     // }
//     // goto_label:
//     j = len[0];
//     for(i = 1; i<=word; i++)
//     {
//         if(j < len[i])
//         {
//             j = len[i];
//             k = i;
//         }
//     }
//     puts(ch[k]);
//     j = len[0]; k = 0;
//     for(i = 1; i<=word; i++)
//     {
//         if(j>len[i])
//         {
//             j = len[i];
//             k = i;
//         }
//     }
//     puts(ch[k]);
//     return 0;
// }