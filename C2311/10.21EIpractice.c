#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>//��ѧ�����

//ð���㷨
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)//�ڼ���
    {
        for (int j = 0; j < n - 1 - i; j++)//�����Ƚ�
        {
            if (arr[j] > arr[j + 1])
            {
                //���н�������
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


//int main()
//{
//	//������Ҫ�̶�������ѭ��for
//	//for(i = 1;i<=10;i++){���}
//
//	//���㲻֪��ѭ������������ѭ��while
//	//while(����),��������(!=0){���}
//
//	//������ִ��һ������ʱ��do-while
//	//do{���}while;
//
//	//break��continue
//	//ϣ�������˳�ѭ��break;���������������
//	//ֻ��Ҫ��������ѭ��continue;�������������
//
//
// //   int i = 0, j = 0;//����
// //   int n = 10;//10������
//	//int arr[10] = { 8, 5, 6, 7, 9, 2, 3, 1, 4, 0 };//������ʲô
// //   for (int i = 0; i < n - 1; i++)//�ڼ���
// //   {
// //       for (int j = 0; j < n - 1 - i; j++)//�����Ƚ�
// //       {
// //           if (arr[j] > arr[j + 1])
// //           {
// //               //���н�������
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
//    ////��׳�
//    //int num = 0;
//    //int ans = 1;
//    //scanf("%d", &num);
//    ////�׳�1*...n
//    //for (int i = 1; i <= num; i++)
//    //{
//    //    ans *= i;
//                    /*Сtips����
//                    iѭ��i = 1 �� i = 10
//                    ����Ա����    
//                    �������sum = sum + i; 
//                    �еȼ�д��sum += i;
//                    sum *= i; == sum = sum * i;
//                    */
//    //}
//    //printf("%d", ans);
//
//    ////ˮ�ɻ�
//    //int T = 0, flag = 0;
//    //int m = 0, n = 0;
//    //scanf("%d", &T);
//    //while (T--)//for(int i = 0;i<T;i++)
//    //{
//    //    scanf("%d%d", &m, &n);
//    //    //������pow(number, n�η�);
//    //    for (int i = m; i <= n; i++)
//    //    {
//    //        if (i == pow(i / 100, 3) + pow(i % 100 / 10, 3) + pow(i % 10, 3))//�ж�ˮ�ɻ�
//    //        {
//    //            flag = 1;//��ˮ�ɻ�
//    //            printf("%d ", i);
//    //        }
//    //    }
//    //    if (flag == 0)//û��ˮ�ɻ�
//    //    {
//    //        printf("-1\n");
//    //    }
//    //}
//
//    //////������
//    //int n = 0, flag  = 0,size = 0;
//    //char string[100];
//    //scanf("%d", &n);//��n���ַ���
//    //for (int i = 0; i < n; i++)//�и�n��ѭ���ַ���
//    //{
//    //    memset(string, '0', size);//���ｨ������һ�Σ���Ȼscanf���������ǽ���λ����
//    //    scanf("%s", string);
//    //    size = strlen(string);//�ж��ٸ��ַ�
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
//    //        flag = 0;//����
//    //        printf("no\n");
//    //    }
//    //    else
//    //    {
//    //        printf("yes\n");
//    //    }
//    //}
//
//    //����������־��У����˽������������⣬���к�����һ����÷�������ϸ�������������벻�Ǻ��в��Ǻܷ���ԭ������
//    //int n = 0,flag = 0;
//    //int i = 0;
//    //char string[100];
//    //while (scanf("%d", &n)!=EOF)//��ѭ��
//    //{
//    //    while (getchar() != '\n');//���������
//
//    //    for (i = 0; i < n; i++)
//    //    {
//    //        scanf("%c", &string[i]);//����n���ַ�
//    //    }
//    //    string[i] = '\0';
//
//    //    int size = strlen(string);//�ж��ٸ��ַ�
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
//    ////99�˷���
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

