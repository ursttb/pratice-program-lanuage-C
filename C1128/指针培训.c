//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//
////寻找最大值和次大值
////#include <stdio.h>
////#include <stdlib.h>
////#include <limits.h>
////void LargestTow(int a[], int n, int* pfirst, int* psecond);
////int main()
////{
////    int str[1005], n, i, x, y;//x作为最大值，y作为次大值
////    scanf("%d", &n);
////    for (i = 0; i < n; i++)
////        scanf("%d", &str[i]);
////    LargestTow(str, n, &x, &y);
////    printf("%d %d", x, y);
////    return 0;
////}
////void LargestTow(int a[], int n, int* pfirst, int* psecond)
////{
////    int i, q, m, b;//找出最大的两个数，这两个数可能一样大！！！
////    *pfirst = 0, * psecond = 0;
////    for (i = 0; i < n; i++)//找出最大的数；
////    {
////        if (a[i] > *pfirst)
////        {
////            *pfirst = a[i];
////            q = i;
////        }
////    }
////    for (i = 0; i < n; i++)//找出第二大的数；
////    {
////        if (a[i] > *psecond && i != q)//i!=q是用来排除最大的数的；
////        {
////            *psecond = a[i];
////        }
////    }
////}
//
//
//
////超大数对比
////网上做法
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
////	for (i = 0; i < 3; i++)//对每一个字符串做冒泡排序
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
////我的做法
////#include<stdio.h>
////#include<string.h>
////
////int cmp(char* a, char* b)
////{
////	//若大整数a大于b，返回1；
////	  //若a小于b，返回-1；
////	  // 若a与b相等，返回0
////	int len1 = strlen(a), len2 = strlen(b);//错误strlen(*a);--数组名就是首元素地址，不需要进行解引用
////	if (len1 > len2) return 1;
////	if (len1 < len2) return -1;
////	else
////	{
////		for (int i = 0; i < len1; i++)
////		{
////			if (a[i] > b[i])//由于a和b进来就是数组首元素地址，数组解引用的妙用a[i] 相当于*(a+i)也就是第i个元素
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
////	for(i = 0; i < 3; i++)//输入数字
////	{
////		gets(s[i]);
////	}
////	for (i = 0; i < 3; i++)//对每一个字符串做冒泡排序
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
////实数的小数部分
////#include <stdio.h>
////#include <stdlib.h>
////#include<math.h>
////#include<string.h>
////#include<limits.h>//为了省事把常用的头文件全写了（手动狗头）
////char* decimal(char* p);
////int main()
////{
////    int lon;
////    char num[101] = { 0 };//多出一位存空字符避免越界
////    gets(num);
////    char* p = decimal(num);//把自定义函数的返回值赋给新指针使其在main中作用
////    if (p == NULL)//p是空指针时，说明没有小数部分
////    {
////        printf("No decimal part");
////        return 0;//直接结束程序
////    }
////    int i = 0;
////    printf("0%s", p);//输出去整的小数
////
////    return 0;
////}
////char* decimal(char* p)
////{
////    char* lost = NULL;//定义一个指针作为返回对象
////    int t;
////    int j = 0;
////    for (int i = 0; *(p + i) != '\0'; i++)//寻找小数点
////        if (p[i] == '.')
////        {
////            lost = &p[i];
////            break;
////        }
////
////    int lon = strlen(lost);
////    while (lon--)
////    {
////        if (lost[lon] == '0')//去除末尾多余的0，因为定义了101位，所以可以不用--lon（不过建议用--lon）
////            lost[lon] = '\0';
////        else
////            break;
////    }
////    if (lost[lon] == '.')//如果while循环去除末尾0后只剩小数点，代表没有小数部分，返回空指针
////        lost = NULL;
////    return lost;//否则，返回指向lost的指针
////}
////————————————————
////版权声明：本文为CSDN博主「阿白 | 」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
////原文链接：https ://blog.csdn.net/bairimeng16/article/details/121843552
//
////我的做法
////#include<stdio.h>
////#include<string.h>
////
////char* decimal(char* p)
////{
////	/*将字符串p表示的实数的自小数点开始的小数部分存入一个字符串，并由函数返回，若p为“123.456”，	则返回的字符串为“.456”。若小数部分为0,返回空指针NULL。*/
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
////	len = strlen(sp);//我的错误：len = sp数组的元素个数，而下标应该要减一
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
////	else printf("0%s", p);//我的错误：解引用了p，应该把它当做一个字符数组来使用
////	return 0;
////}
//
//
////字符组逆序
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
//	char* p;//定义首元素地址
//	int len = strlen(s);
//	p = nixu(s,len);
//	printf("%s", p);
//	return 0;
//}
//
