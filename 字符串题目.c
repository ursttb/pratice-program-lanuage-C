#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

//���˿ո�
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
//	//s2[j] = '\0';//��䲻ҪҲ��
//	printf("%s", s2);
//	return 0;
//}




//���й�������
//����һ��
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
//	getchar();//����س�����ֹgets��ȡ
//	for (int i = 0; i < n; i++)
//	{
//		gets(name[i]);//ÿһ�и�һ���ַ���
//	}
//
//	for (int j = n; j > 0; j--) //n�Ǹ�����j = ����������Ҫ����ð���𽥱�С
//	{
//		for (int i = 0; i < j-1; i++) //j - 1�ǵ�j��Ԫ�ص��±� 
//		{
//			if (strcmp(name[i], name[i + 1]) > 0) //˵����һ���ַ�Ӧ�����£����н���
//			{
//				strcpy(t, name[i]);//�ַ���2ȡ���ŵ��ַ���1��ߣ��൱�ڸ�t[20]��ֵ
//				strcpy(name[i], name[i + 1]);//�ճ������Է���name[i+1]���ַ���
//				strcpy(name[i + 1], t);
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		puts(name[i]); //���ÿһ�е��ַ���Ҳ����ʹ��printf("%s\n", n[i]);��Ҫ�ֶ�����
//	}
//	return 0;
//}
//��������
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//    int n;				//n��������
//    char a[25][21];		//��Ϊ���������ַ����飬��������Ҫ������浽������
//    char t[21];			//��ת���飬�ȽϽ�����ʱ��ʹ��
//    // 1.����n
//    scanf("%d", &n);
//    getchar();			//������������ȡ�����õ���gets()����һ��һ��Ҫ��
//    // 2.����n���ַ�����
//    for (int i = 1; i <= n; i++) {
//        gets(a[i]);		//�������ʹ��cin>>a[i]����һ��getchar()�Ͳ���д
//    }
//    // 3.����ð�������һά�������ÿ��Ԫ��������
//    for (int j = n; j >= 2; j--) {
//        for (int i = 1; i < j; i++) {
//            // ����ʹ���ַ�����һЩ���ú��������Բ�ѯ�������ı��
//            if (strcmp(a[i], a[i + 1]) > 0) {
//                strcpy(t, a[i]);
//                strcpy(a[i], a[i + 1]);
//                strcpy(a[i + 1], t);
//            }
//        }
//    }
//    // 4.������
//    for (int i = 1; i <= n; i++) {
//        puts(a[i]);
//    }
//    return 0;
//}



//�ַ������

//����һRun Time Error
//#include<stdio.h>
//#include<string.h>
//
////void Fun(char* s[20], char* t[20])//��������ʧ��
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


//������
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    int len1, len2;
//    char line1[100] = { '0' }, line2[100] = { '0' }, line3[100] = { '0' }, line4[100] = { '0' };//��ʼ���ַ��� 
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
//        }//��Line1ȥ���ո��line3 
//    }
//    j = 0;
//    for (i = 0; i < len2; i++)
//    {
//        if (line2[i] != ' ')
//        {
//            line4[j++] = line2[i];
//        }      //��line2ȥ���ո��line4 
//    }
//    len1 = strlen(line3);
//    len2 = strlen(line4);
//    if (len1 != len2)//���Ȳ���ֱ���ж�ΪNO
//    {
//        printf("NO");
//        return 0;
//    }
//    for (i = 0; i < len1; i++)
//    {
//        if (line3[i] >= 'A' && line3[i] <= 'Z')
//        {
//            line3[i] = line3[i] + 32; //A��a���32��ʵ�����ǰѴ�дȫ��ΪСд 
//        }
//        if (line4[i] >= 'A' && line4[i] <= 'Z')//��һ��ѭ���������line���д���         ��ʡ��ʱ��
//        {
//            line4[i] = line4[i] + 32;
//        }
//    }
//    //for (i = 1; i < len1; i++)//ð������ͨ��ASCII����бȽ� //���ð���������������Բ�Ҫ
//    //{
//    //    for (j = 0; j < len1 - i; j++)
//    //    {
//    //        if (line3[j] > line3[j + 1])
//    //        {
//    //            t = line3[j];
//    //            line3[j] = line3[j + 1];
//    //            line3[j + 1] = t;
//    //        }
//    //        if (line4[j] > line4[j + 1]) //��һ��ѭ����������line���д�����Сʱ�ո��Ӷ� 
//    //        {
//    //            t = line4[j];
//    //            line4[j] = line4[j + 1];
//    //            line4[j + 1] = t;
//    //        }
//    //    }
//    //}
//    if (strcmp(line3, line4) == 0)//strcmp �������������ַ��������ж�
//    {
//        printf("YES");//����� 
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}

//���Է���һ
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
//���Է�����
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




//�Ϸ�C��ʶ��
//����һ
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
//};//�洢����
//
//int main()
//{
//    char a[20] = { 0 };
//    gets(a);
//    int len = strlen(a);
//    for (int j = 0; j < 36; j++)//�ԱȺϷ���
//    {
//        if (strcmp(a, a1[j]) == 0)
//        {
//            printf("no");
//            return 0;
//        }
//    }
//    for (int i = 0; i < len; i++)//�Աȵ����ַ��Ϸ���
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

//������
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



//ɾ�����ʺ�׺

//����һ
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

//������
//#include<stdio.h>  
//#include<string.h>  
//int main()
//{
//	char a[32];  //�������ⶨ��һ���ַ�����
//	char* p;  //����һ��ָ��
//	gets(a);
//	p = a;
//	if (strlen(a) <= 2)  //�������ĵ��ʳ���Ϊ2����ֱ�����
//		printf("%s\n", a);
//	else if (strlen(a) == 3)//�������ĵ��ʳ���Ϊ3
//	{
//		if (strcmp(p + 1, "er") == 0 || strcmp(p + 1, "ly") == 0)//�жϵ����Ƿ���"er"����"ly"��β
//			printf("%c\n", a[0]);//����ǣ�������ַ������1λ
//		else
//			printf("%s\n", a);//������ǣ���ֱ�����
//	}
//	else
//	{
//		if (strcmp(p + strlen(a) - 3, "ing") == 0)//�жϵ����Ƿ���"ing"��β  
//			a[strlen(a) - 3] = NULL;//���ַ�����ĺ�3λ�ÿ�  
//		p = a;
//		if (strcmp(p + strlen(a) - 2, "er") == 0 || strcmp(p + strlen(a) - 2, "ly") == 0)//�жϵ����Ƿ���"er"����"ly"��β
//			a[strlen(a) - 2] = NULL; //���ַ�����ĺ�3λ�ÿ�   
//		printf("%s\n", a);
//	}
//
//	return 0;
//}






//��߷�����ѧ������
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
//        getchar();//�����ֹ��ȡ�˿ո�
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








//���̵���

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


//δ�������
// #include<stdio.h>
// #include<string.h>

// int main()

// {
//     char s[100] = {0};
//     char ch[20][20] = { 0 };//��¼����
//     int len[20] = { 0 };//�������ʵĳ���
//     int word = 0;//��¼���ʵĸ���
//     int j = 0;//�Ƚϵ��ʵĳ�����
//     int k = 0;//����ĵ��ʶ�Ӧ�ַ������±�
//     int i = 0;
//     int l = 0;//��¼ԭ�ַ����±�
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
//     // for (i = 0; i < 20; i++)//�������,����¼ÿ�����ʵĳ���
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