#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>//数学运算的

//冒泡算法
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)//第几趟
    {
        for (int j = 0; j < n - 1 - i; j++)//两两比较
        {
            if (arr[j] > arr[j + 1])
            {
                //进行交换操作
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


//int main()
//{
//	//当你需要固定次数的循环for
//	//for(i = 1;i<=10;i++){语句}
//
//	//当你不知道循环次数或者死循环while
//	//while(条件),条件成真(!=0){语句}
//
//	//当你先执行一次语句的时候do-while
//	//do{语句}while;
//
//	//break和continue
//	//希望立刻退出循环break;不会进行条件更新
//	//只需要跳出本次循环continue;会进行条件更新
//
//
// //   int i = 0, j = 0;//遍历
// //   int n = 10;//10个数字
//	//int arr[10] = { 8, 5, 6, 7, 9, 2, 3, 1, 4, 0 };//数字是什么
// //   for (int i = 0; i < n - 1; i++)//第几趟
// //   {
// //       for (int j = 0; j < n - 1 - i; j++)//两两比较
// //       {
// //           if (arr[j] > arr[j + 1])
// //           {
// //               //进行交换操作
// //               int temp = arr[j];
// //               arr[j] = arr[j + 1];
// //               arr[j + 1] = temp;
// //           }
// //       }
// //   }
// //   for (i = 0; i < 10; i++)//for(i = 1; i<=10;i++)
// //   {
// //       printf("%d ", arr[i]);
// //   }
//
//
//
//    ////求阶乘
//    //int num = 0;
//    //int ans = 1;
//    //scanf("%d", &num);
//    ////阶乘1*...n
//    //for (int i = 1; i <= num; i++)
//    //{
//    //    ans *= i;
//                    /*小tips解释
//                    i循环i = 1 到 i = 10
//                    程序员很懒    
//                    对于语句sum = sum + i; 
//                    有等价写法sum += i;
//                    sum *= i; == sum = sum * i;
//                    */
//    //}
//    //printf("%d", ans);
//
//    ////水仙花
//    //int T = 0, flag = 0;
//    //int m = 0, n = 0;
//    //scanf("%d", &T);
//    //while (T--)//for(int i = 0;i<T;i++)
//    //{
//    //    scanf("%d%d", &m, &n);
//    //    //幂运算pow(number, n次方);
//    //    for (int i = m; i <= n; i++)
//    //    {
//    //        if (i == pow(i / 100, 3) + pow(i % 100 / 10, 3) + pow(i % 10, 3))//判断水仙花
//    //        {
//    //            flag = 1;//有水仙花
//    //            printf("%d ", i);
//    //        }
//    //    }
//    //    if (flag == 0)//没有水仙花
//    //    {
//    //        printf("-1\n");
//    //    }
//    //}
//
//    //////回文数
//    //int n = 0, flag  = 0,size = 0;
//    //char string[100];
//    //scanf("%d", &n);//有n个字符串
//    //for (int i = 0; i < n; i++)//有个n次循环字符串
//    //{
//    //    memset(string, '0', size);//这里建议清零一次，虽然scanf本身会帮我们结束位置零
//    //    scanf("%s", string);
//    //    size = strlen(string);//有多少个字符
//    //    for (int i = 0; i <= size / 2; i++)
//    //    {
//    //        if (string[i] != string[size - 1 - i])
//    //        {
//    //            flag = 1;
//    //            break;
//    //        }
//    //    }
//
//    //    if (flag == 1)
//    //    {
//    //        flag = 0;//清零
//    //        printf("no\n");
//    //    }
//    //    else
//    //    {
//    //        printf("yes\n");
//    //    }
//    //}
//
//    //这个看着乐乐就行，讲了讲缓冲区的问题，还有函数的一点调用方法。仔细读题后发现这个代码不是很行不是很符合原题描述
//    //int n = 0,flag = 0;
//    //int i = 0;
//    //char string[100];
//    //while (scanf("%d", &n)!=EOF)//死循环
//    //{
//    //    while (getchar() != '\n');//清除缓冲区
//
//    //    for (i = 0; i < n; i++)
//    //    {
//    //        scanf("%c", &string[i]);//输入n个字符
//    //    }
//    //    string[i] = '\0';
//
//    //    int size = strlen(string);//有多少个字符
//    //    for (int i = 0; i <= size / 2; i++)
//    //    {
//    //        if (string[i] != string[size - 1 - i])
//    //        {
//    //            flag = 1;
//    //            break;
//    //        }
//    //    }
//
//    //    if (flag == 1)
//    //    {
//    //        printf("no\n");
//    //    }
//    //    else
//    //    {
//    //        printf("yes\n");
//    //    }
//    //   
//    //}
//
//    ////99乘法表
//    //int i = 0, j = 0;
//    //for (i = 1; i <= 9; i++)
//    //{
//    //    for (j = 1; j <= i; j++)
//    //    {
//    //        printf("%d*%d=%-2d ", j, i, j * i);
//    //    }
//    //    printf("\n");
//    //}
//
//}

