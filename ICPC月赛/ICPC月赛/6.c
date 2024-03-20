#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int sum(int l, int r, int n, int a[])
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] == l)
//		{
//			do
//			{
//				sum += a[i];
//			} while (a[i++] == r);
//			break;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0, q = 0;
//	int l = 0, r = 0;
//	int i = 0;
//	int a[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &q);
//	for (i = 0; i < q; i++)
//	{
//		scanf("%d%d", &l, &r);
//		printf("%d", sum(l, r, n, a[100]));
//	}
//	return 0;
//}

//#include <stdio.h>
//int Add(int arr[], int x, int y)
//{
//    int sum = 0;
//    int tep = 0;
//    int i, left, right;
//    for (i = 0; i <= 4; i++)
//    {
//        if (arr[i] == x)
//            left = i;
//        if (arr[i] == y)
//            right = i;
//    }
//    if (left > right)
//    {
//        tep = right;
//        left = right;
//        right = tep;
//    }
//    for (; left <= right; left++)
//    {
//        sum = arr[left] + sum;
//    }
//    return sum;
//}
//
//
//int main()
//{
//    int n = 0, c = 0, z = 0, x = 0;
//    int arr[100] = { 0 };
//    int a, b;
//    scanf("%d", &x);
//    for (n = 0; n < x; n++)
//    {
//        scanf("%d", &arr[n]);
//    }
//    scanf("%d", &z);
//    for (n = 0; n < z; n++)
//    {
//        scanf("%d%d", &a, &b);
//        c = Add(arr, a, b);
//        printf("%d\n", c);
//    }
//    return 0;
//}
