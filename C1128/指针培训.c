//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//
////Ѱ�����ֵ�ʹδ�ֵ
////#include <stdio.h>
////#include <stdlib.h>
////#include <limits.h>
////void LargestTow(int a[], int n, int* pfirst, int* psecond);
////int main()
////{
////    int str[1005], n, i, x, y;//x��Ϊ���ֵ��y��Ϊ�δ�ֵ
////    scanf("%d", &n);
////    for (i = 0; i < n; i++)
////        scanf("%d", &str[i]);
////    LargestTow(str, n, &x, &y);
////    printf("%d %d", x, y);
////    return 0;
////}
////void LargestTow(int a[], int n, int* pfirst, int* psecond)
////{
////    int i, q, m, b;//�ҳ�������������������������һ���󣡣���
////    *pfirst = 0, * psecond = 0;
////    for (i = 0; i < n; i++)//�ҳ���������
////    {
////        if (a[i] > *pfirst)
////        {
////            *pfirst = a[i];
////            q = i;
////        }
////    }
////    for (i = 0; i < n; i++)//�ҳ��ڶ��������
////    {
////        if (a[i] > *psecond && i != q)//i!=q�������ų��������ģ�
////        {
////            *psecond = a[i];
////        }
////    }
////}
//
//
//
////�������Ա�
////��������
////#include<stdio.h>
////#include<string.h>
////int cmp(char* a, char* b)
////{
////	int len1, len2, i;
////	len1 = strlen(a);
////	len2 = strlen(b);
////	if (len1 > len2)
////		return 1;
////	else if (len1 < len2)
////		return -1;
////	else
////	{
////		for (i = 0; i < len1; i++)
////		{
////			if (*(a + i) > *(b + i))
////				return 1;
////			else if (*(a + i) < *(b + i))
////				return -1;
////		}
////	}
////	return 0;
////}
////int main()
////{
////	int cmp(char* a, char* b);
////	char str[3][100], s[100];
////	int i, j;
////	for (i = 0; i < 3; i++)
////		scanf("%s", str[i]);
////	for (i = 0; i < 3; i++)//��ÿһ���ַ�����ð������
////	{
////		for (j = 2; j > i; j--)
////		{
////			if (cmp(str[j - 1], str[j]) == 1)
////			{
////				strcpy(s, str[j]);
////				strcpy(str[j], str[j - 1]);
////				strcpy(str[j - 1], s);
////			}
////		}
////	}
////	for (i = 0; i < 3; i++)
////		printf("%s\n", str[i]);
////	return 0;
////}
////https://blog.csdn.net/YGGZZZ/article/details/105708817
//
//
////�ҵ�����
////#include<stdio.h>
////#include<string.h>
////
////int cmp(char* a, char* b)
////{
////	//��������a����b������1��
////	  //��aС��b������-1��
////	  // ��a��b��ȣ�����0
////	int len1 = strlen(a), len2 = strlen(b);//����strlen(*a);--������������Ԫ�ص�ַ������Ҫ���н�����
////	if (len1 > len2) return 1;
////	if (len1 < len2) return -1;
////	else
////	{
////		for (int i = 0; i < len1; i++)
////		{
////			if (a[i] > b[i])//����a��b��������������Ԫ�ص�ַ����������õ�����a[i] �൱��*(a+i)Ҳ���ǵ�i��Ԫ��
////			{
////				return 1;
////			}
////			if (a[i] < b[i])
////			{
////				return -1;
////			}
////		}
////	}
////
////	return 0;
////}
////
////int main()
////{
////	char tmp[100];
////	char s[3][100] = { 0 };
////	int i, j;
////	for(i = 0; i < 3; i++)//��������
////	{
////		gets(s[i]);
////	}
////	for (i = 0; i < 3; i++)//��ÿһ���ַ�����ð������
////	{
////		for (j = 0; j <2 - i; j++)
////		{
////			if (cmp(s[j], s[j+1]) == 1)
////			{
////				//strcpy(tmp, s[j+1]);
////				//strcpy(s[j+1], s[j]);
////				//strcpy(s[j], tmp);
////				strcpy(tmp, s[j]);
////				strcpy(s[j], s[j + 1]);
////				strcpy(s[j + 1], tmp);
////			}
////		}
////	}
////	for (i = 0; i < 3; i++)
////		printf("%s\n", s[i]);
////	return 0;
////}
//
//
//
////ʵ����С������
////#include <stdio.h>
////#include <stdlib.h>
////#include<math.h>
////#include<string.h>
////#include<limits.h>//Ϊ��ʡ�°ѳ��õ�ͷ�ļ�ȫд�ˣ��ֶ���ͷ��
////char* decimal(char* p);
////int main()
////{
////    int lon;
////    char num[101] = { 0 };//���һλ����ַ�����Խ��
////    gets(num);
////    char* p = decimal(num);//���Զ��庯���ķ���ֵ������ָ��ʹ����main������
////    if (p == NULL)//p�ǿ�ָ��ʱ��˵��û��С������
////    {
////        printf("No decimal part");
////        return 0;//ֱ�ӽ�������
////    }
////    int i = 0;
////    printf("0%s", p);//���ȥ����С��
////
////    return 0;
////}
////char* decimal(char* p)
////{
////    char* lost = NULL;//����һ��ָ����Ϊ���ض���
////    int t;
////    int j = 0;
////    for (int i = 0; *(p + i) != '\0'; i++)//Ѱ��С����
////        if (p[i] == '.')
////        {
////            lost = &p[i];
////            break;
////        }
////
////    int lon = strlen(lost);
////    while (lon--)
////    {
////        if (lost[lon] == '0')//ȥ��ĩβ�����0����Ϊ������101λ�����Կ��Բ���--lon������������--lon��
////            lost[lon] = '\0';
////        else
////            break;
////    }
////    if (lost[lon] == '.')//���whileѭ��ȥ��ĩβ0��ֻʣС���㣬����û��С�����֣����ؿ�ָ��
////        lost = NULL;
////    return lost;//���򣬷���ָ��lost��ָ��
////}
////��������������������������������
////��Ȩ����������ΪCSDN���������� | ����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
////ԭ�����ӣ�https ://blog.csdn.net/bairimeng16/article/details/121843552
//
////�ҵ�����
////#include<stdio.h>
////#include<string.h>
////
////char* decimal(char* p)
////{
////	/*���ַ���p��ʾ��ʵ������С���㿪ʼ��С�����ִ���һ���ַ��������ɺ������أ���pΪ��123.456����	�򷵻ص��ַ���Ϊ��.456������С������Ϊ0,���ؿ�ָ��NULL��*/
////	char* sp = NULL;
////	int len = strlen(p);
////	int i = 0;
////	for (i = 0; i < len; i++)
////	{
////		if (p[i] == '.')
////		{
////			sp = &p[i];
////			break;
////		}
////	}
////
////	len = strlen(sp);//�ҵĴ���len = sp�����Ԫ�ظ��������±�Ӧ��Ҫ��һ
////	for (i = len-1; i >=0; --i)
////	{
////		if (sp[i] == '0')
////		{
////			sp[i] = '\0';
////		}
////		else break;
////	}
////	len = strlen(sp);
////	if (len == 1)
////	{
////		return NULL;
////	}
////	else return sp;
////}
////
////int main()
////{
////	char s[101] = { 0 };
////	gets(s);
////	char* p = decimal(s);
////	if (p == NULL) printf("No decimal part");
////	else printf("0%s", p);//�ҵĴ��󣺽�������p��Ӧ�ð�������һ���ַ�������ʹ��
////	return 0;
////}
//
//
////�ַ�������
//#include<stdio.h>
//#include<string.h>
//
//char* nixu(char* s,int len)
//{
//	int i = 0, j = 0;
//	char p[100] = { 0 };
//	for (i = len-1,j = 0; i >= 0; --i,j++)
//	{
//		if(p!=NULL)
//		p[j] = s[i];
//	}
//	p[j] = '\0';
//	return p;
//}
//
//int main()
//{
//	char s[100] = { 0 };
//	gets(s);
//	char* p;//������Ԫ�ص�ַ
//	int len = strlen(s);
//	p = nixu(s,len);
//	printf("%s", p);
//	return 0;
//}
//
