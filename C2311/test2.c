#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
////比较整形
////注意类型时void* 所以要强制类型转化，还要解引用才是对应的值！！！
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void main()
//{
//	int arr[100] = { 0 };
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print(arr, sz);
//}


#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(long long int*)e1 - *(long long int*)e2;
//}
//
//int main()
//{
//	int i = 0;
//	int n = 0, hh, mm, ss;
//	long long int ID[101] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d:%d:%d %lld", &hh, &mm, &ss, &ID[i]);
//	}
//	qsort(a, n, sizeof(long long int), cmp_int);
//	for (int i = 0; i < n; i++)
//	{
//		if (ID[i + 1] == ID[i])
//			printf("\n");
//		else printf("%lld\n\n", ID[i]);
//	}
//	return 0;
//}