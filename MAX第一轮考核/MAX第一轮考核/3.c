//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//
//int i = 0, j = 0;
//char piao[11][6] = {
//	{"20220"},
//	{"20221"},
//	{"20222"},
//	{"20223"},
//	{"20224"},
//	{"20225"},
//	{"20226"},
//	{"20227"},
//	{"20228"},
//	{"20229"},
//	{"00000"}
//};
//
//char my[6] = { 0 };
//
//int Check()
//{
//	for (i = 0; i < 9; i++)
//	{
//		if (strcmp(piao[i], my) == 0)
//		{
//			return 1;
//		}
//	}
//	if (i == 10)
//		return 0;
//}
//
//int main()
//{
//	while (scanf("%s", my) != EOF)
//	{
//		if (strcmp(piao[10], my) == 0)
//		{
//			break;
//		}
//		if (Check() == 1)
//		{
//			printf("您可以入场了\n");
//		}
//		else
//		{
//			printf("凭证无效\n");
//		}
//	}
//	return 0;
//}