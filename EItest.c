#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//
//}

//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		printf("请输入一个数字：");
//		scanf("%d", &num);
//		if (num < 0)
//		{
//			printf("我滚球了");
//			break;
//		}
//	}
//}

//int main()
//{
//	int num = 0;
//	printf("请输入一个数字：");
//	while (scanf("%d", &num) && num>0)
//	{		
//		printf("请输入一个数字：");;
//	}
//	if (num < 0)
//	{
//		printf("我滚球了");
//	}
//}

//int main()
//{
//    char password[10];
//    do
//    {
//        printf("请输入密码：");
//        scanf("%s", password);
//    } while (strcmp(password, "EI6708") != 0 && //比较密码
//             printf("密码错误\n") && //若错误提示密码错误
//             memset(password, 0, strlen(password)));//清空password
//    printf("密码正确\n");
//}

//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i % 2 == 0)//是偶数则跳过不打印
//        {
//            continue;
//        }
//        printf("%d ", i);
//        if (i == 5) break;//打印完5后就跳出不再循环，也不会进行更新
//    }
//    printf("%d ", i);
//}

//void bubbleSort(int arr[], int n)
//{
//    for (int i = 0; i < n - 1; i++)//第几趟
//    {
//        for (int j = 0; j < n - 1 - i; j++)//两两比较
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                //进行交换操作
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//
//int main()
//{
//    int n = 0;//记录输入数字
//    int arr[100];
//    scanf("%d", &n);//输入n个数
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    bubbleSort(arr, n);//进行冒泡排序
//
//    //排序后进行输出
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}

//#include <stdio.h>
//#include <stdlib.h>
//
///* Function to calculate f(x) = x^2 */
//float f(float x) {
//    return ;
//}
//
//int main() {
//    unsigned N = 100000;
//    float sum = 0.0;
//    float width = 1.0 / N; // Width of each slice
//
//    for (unsigned index = 0; index < N; index++) {
//        float x = (index + 0.5) * width; // Midpoint of the current slice
//        sum += x * x * width;
//        printf("With %u slices, the integral is %f.\n", N, sum);
//    }
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
/* Calculate the integral of x^2 from 0 to 1, using N
rectangles to estimate. */
//int main()
//{
//	unsigned N = 10000000;
//	double sum; //float sum;
//	double point; //float point;
//	unsigned index;
//	/* Start with 1/2 of the value at 0 and 1/2 of the
//	* value at 1, scaled by 1/N. */
//	sum = (0 * 0 + 1 * 1) / (N * (float)2.0);
//	for (index = 1; N > index; index = index + 1) {
//		/* Add each point, scaled by 1/N. */
//		point = index / (float)N;
//		sum = sum + (point * point) / N;
//	}
//	printf("With %u slices, the integral is %f.\n", N, sum);
//	return 0;
//}

