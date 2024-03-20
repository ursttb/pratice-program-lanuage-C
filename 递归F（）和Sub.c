#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

//递归求函数f(x,n)
//#include<stdio.h>
//#include<math.h>
//
//double f(double x, int n)
//{
//    if (n > 1)
//    {
//        return sqrt(n + f(x, n - 1));
//    }
//    else
//    {
//        return sqrt(1 + x);
//    }
//}
//
//int main()
//{
//    double x = 0;
//    int n = 0;
//    scanf("%lf%d", &x, &n);
//    printf("%.2lf", f(x, n));
//    return 0;
//}





// Subsequence
//#include<stdio.h>
//int main()
//{
//	int n;
//	int N, s;
//	int arr[100000];
//	int flag = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &N, &s);
//		for (int j = 1; j <= N; j++)
//		{
//			scanf("%d", &arr[j]);
//		}
//		int num = 0, sum = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			sum += arr[i];
//			num++;
//			if (sum >= s)
//			{
//				break;
//			}
//		}
//		int L = 1;
//		int ans = num;
//		if (sum < s)
//		{
//			printf("0\n");
//			continue;
//		}
//		for (i = num; i <= n; i++)
//		{
//			if (i != num) sum += arr[i];
//			while (sum - arr[L] >= s)
//			{
//				sum -= arr[L];
//				L++;
//				if (i - L + 1 < ans) ans = i - L + 1;
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//#include<string.h>
//
//const int maxn = 100010;
//int num[1000000], sum[1000000], n, S;
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    while (t--)
//    {
//        scanf("%d%d", &n, &S);
//        sum[0] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &num[i]);
//            sum[i] = sum[i - 1] + num[i];
//        }
//        if (sum[n] < S)
//        {
//            printf("0");
//            continue;
//        }
//        int ans = maxn;
//        for (int s = 0; sum[s] + S <= sum[n]; s++)//从sum[s+1]开始查找，s是开始查找的数的前一个位置
//        {
//            int t = lower_bound(sum + s + 1, sum + n + 1, sum[s] + S) - (sum + s);//sum+s是从第sum+s+1个地址开始查找的前一个地址，所以找到的地址减去这个地址即为区间长度
//            ans = min(ans, t);
//        }
//        printf("%d\n", ans);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int N;
//	int n, s;
//	int a[1000000];
//	scanf("%d", &N);
//	while (N--)
//	{
//		scanf("%d %d", &n, &s);
//		int num, sum[] = {0};
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//			
//		}
//
//	}
//	return 0;
//}