#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


////确定进制
//#include<stdio.h>
//#include<math.h>
//
//int maxnum(int p, int q, int r)
//{
//    int ans = 0;
//    ans = p % 10; 
//    p /= 10;
//    while (p % 10)
//    {
//        if (ans < p % 10)
//        {
//            ans = p % 10;
//        }
//        p /= 10;
//    }
//    while (q % 10)
//    {
//        if (ans < q % 10)
//        {
//            ans = q % 10;
//        }
//        q /= 10;
//    }
//    while (r % 10)
//    {
//        if (ans < r % 10)
//        {
//            ans = r % 10;
//        }
//        r /= 10;
//    }
//    return ans;
//}
//
//int jinzhi(int p, int q, int r)
//{
//    int n = maxnum(p, q, r) + 1;
//    int k = 0; int flag = 0;
//    int cp, cq, cr;
//    cp = p; cq = q; cr = r;
//    int ansp = 0, ansq = 0, ansr = 0;
//    do
//    {
//        k = 0; ansp = 0, ansq = 0, ansr = 0;
//        p = cp; q = cq; r = cr;
//        while (!(p == q && q == r && r%10 == 0))
//        {
//            ansp += p % 10 * pow(n, k); p /= 10;
//            ansq += q % 10 * pow(n, k); q /= 10;
//            ansr += r % 10 * pow(n, k); r /= 10;
//            k++;
//        }
//        if (ansp * ansq == ansr)
//        {
//            flag = 1;
//            break;
//        }
//        n++;
//    } while (n<=40);
//    if (flag == 1)
//    {
//        return n;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    int p, q, r;
//    scanf("%d %d %d", &p, &q, &r);
//    printf("%d", jinzhi(p, q, r));
//    return 0;
//}





//Ackmann函数

//方案一
// #include<stdio.h>
// int Ackmann(int m, int n)
// {
//     // if(m == 0)
//     // {
//     //     return n+1;
//     // }
//     // else if(m == 1)
//     // {
//     //     return n+2;
//     // }
//     int ans[4] = {n+1,n+2,};
//     if(n == 0)
//     {
//         return Ackmann(m-1, 1);
//     }
//     else
//     {
//         return Ackmann(m-1, Ackmann(m, n-1));
//     }    
// }

// int main()

// {
//     int m = 0, n = 0;
//     scanf("%d %d", &m, &n);
//     printf("%d", Ackmann(m, n));
//     return 0;
// }


//方案二
//#include <stdio.h>
//#include<math.h>
////a is m b is n
//int akm(long long a, long long b) {
//    if (a == 0)
//    {
//        return b + 1;
//    }
//    if (a > 0 && b == 0)
//    {
//        return akm(a - 1, 1);
//    }
//    if (a > 0 && b > 0)
//    {
//        return akm(a - 1, akm(a, b - 1));
//    }
//}
//int m, n;
//int j, i;
//long long c;
//int main()
//{
//    scanf("%d %d", &m, &n);
//    if (m == 3)
//    {//此时递归次数过多
//        for (j = 0, c = 5; j < n; j++)
//        {
//            c += (long long)pow(2, j + 3);
//        }
//        printf("%lld", c);
//    }
//    else
//    {
//        printf("%lld", akm(m, n));
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, i, j, k;
//	int sn = 0;
//	int arr[20][20];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//		arr[i][i] = 1;
//	}
//	if (n == 1)
//	{
//		printf("%d", arr[0][0]);
//		return 0;
//	}
//	else
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				if (j == 0)
//				{
//					for (k = 0; k < n - i - 1; k++)//sn是要打印两个空格的次数
//					{
//						printf("  ");
//					}
//					printf("%4d", arr[i][j]);
//				}
//				else printf("%4d", arr[i][j]);
//			}
//			printf("\n");
//		}
//	return 0;
//}
//
//// for(int i = 0; i < n; i ++)
//// {
//// 	for(int k = 1; k <= (n-i); k++) printf("  ");
//// 	for(int j = 0; j <= i; j ++)
//// 	{
//// 		printf("%4d",arr[i][j]);
//// 	}
//// printf("\n");
//// }


#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "♂";
    printf("%s", str);
    printf("%d", strlen(str));
    return 0;
}

