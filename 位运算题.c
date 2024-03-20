#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//
//int main()
//
//{
//	int i = 128;//1000000
//	char ch = i;//补码中第一位有权重（-2）^n
//	printf("%d\n", ch);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//	unsigned int A = 0, B = 0;
//	scanf("%d%d", &A, &B);
//	if (A & (1 << B))
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}





//#include<stdio.h>
//
//int main()
//
//{
//	unsigned short a, b, c;
//	scanf("%hd%hd%hd", &a, &b, &c);
//	a = a | (1 << b);
//	a = a & ~(1 << c);
//	return 0;
//}




//二进制转十进制
//#include<stdio.h>
//
//int main()
//
//{
//	short a;
//	scanf("%hd", &a);
//	char b = a;
//	unsigned short c = b;
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = 0;
//	int c = 0;
//	int i = 0;
//	int k = 10;
//	for (i = 0; i < 8; i++)
//	{
//		unsigned short b = a % 10;
//		c = b * pow(2, i);
//		sum += c;
//		a = a / k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//	unsigned short a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	int arr[16];
//	for (i = 0; i < 16; i++)
//	{
//		arr[i]=
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//{
//	int number;
//	scanf("%d", &number);
//	int bytes = sizeof(int);
//	unsigned mask = 1u << (bytes * 8 - 1);
//	for (; mask; mask >>= 1) 
//	{
//		printf("%d", number & mask ? 1 : 0);
//	}
//	printf("\nBinary format of %d (decimal) is shown above.\n", number);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//    int a[32], n;
//    scanf("%d", &n);
//    for (int i = 0; i <= 31; i++) 
//    {
//        a[i] = n & (1 << i )? 1 : 0;
//    }
//    for (int i = 31; i >= 0; i--)
//    {
//        printf("%d", a[i]);
//    }
//    printf("\n");
//	return 0;
//}




//位运算无符号16位十进制数转二进制
//#include<stdio.h>
//
//int main()
//
//{
//    int a[16];
//    unsigned short n;
//    scanf("%hu", &n);
//    for (int i = 0; i <= 15; i++)
//    {
//        a[i] = n & (1 << i) ? 1 : 0;
//    }
//    for (int i = 15; i >= 0; i--)
//    {
//        printf("%d", a[i]);
//    }
//    return 0;
//}
//有符号十进制数转补码
//#include<stdio.h>
//
//int main()
//
//{
//    int a[16];
//    short n;
//    scanf("%hd", &n);
//    for (int i = 0; i <= 15; i++)
//    {
//        a[i] = n & (1 << i) ? 1 : 0;
//    }
//    for (int i = 15; i >= 0; i--)
//    {
//        printf("%d", a[i]);
//    }
//    return 0;
//}




//EOF测试
//#include<stdio.h>
//
//int main()
//
//{	
//	int ch = 0;
//	while((ch=getchar())!=EOF)
//	{putchar(ch);
//	}
//	return 0;
//}
//计算变量类型所占空间大小
//#include<stdio.h>
//
//int main()
//
//{	
//	char arr1[] = "abcdef";
//	char arr2[] = {'a','b','c'}; 
//	int arr3[] = {1,2,3,4,5,6,7};
//	int sz1 =sizeof(arr1)/sizeof(arr1[0]);
//	int sz2 =sizeof(arr2)/sizeof(arr2[0]);
//	int sz3 = sizeof(arr3)/sizeof (arr3[0]);
//	printf("%d\n",sizeof (arr1));
//	printf("%d\n",sizeof (arr2));
//	printf("%d\n",sizeof (sz1));
//	printf("%d\n",sizeof (sz2));
//	printf("%d\n",sizeof(arr2[0]));
//	printf("%d\n",sizeof (arr3));
//	printf("%d\n",sizeof (sz3));
//	return 0;
//}
// 字符打印问题
//#include<stdio.h>
//
//int main()
//
//{
//	printf("%d\n", sizeof(int));
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//
//{
//	char a = 'A';
//	printf("%c\n", a);
//	printf("%d", a);
//	return 0;
//}



// 往上行打印（失败）
//#include<stdio.h>
//
//int main()
//
//{	
//	printf("hello world\r你好世界\n");
//	printf("\n\r你好世界");
//	return 0;
//}

//#include<stdio.h>
//
//int prinf()
//{
//	printf("hello world");
//
//}
//int main()
//
//{
//	prinf();
//	return 0;
//}
//


//输入两个数组
// 
//#include<stdio.h>
//int main()
//{
//	int nums1[10];
//	int nums2[10];
//	int a, b, c1, c2,ch=0;
//	char c, d;
//	int i = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		scanf_s("%d", &a);
//		nums1[i] = a;
//		i = i++;
//		getchar();
//		printf("继续请打一次回车，结束按ctrl+z\n");
//	}
//	printf("%d %d", nums1[0], nums1[1]);
//	//c = getchar();
//	//if (c == '\n')
//	//	c1 = i;
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0, i = 0, j = 0, ch;
//	int m = 0, n = 0;
//	int num1[20], num2[20];
//	do
//
//	{
//		scanf("%d", &a);
//		num1[i] = a;
//		i = i++;
//		m++;
//	}while ((ch = getchar()) != '\n');
//	do
//
//	{
//		scanf("%d", &a);
//		num2[j] = a;
//		j = j++;
//		n++;
//	} while ((ch = getchar()) != '\n');
//	
//	for(i = 0; i < m; i++)
//	{
//		for(j = 0; j< n; j++)
//		{
//			if (num1[i] == num2[j])
//			{
//				printf("%d\t", num1[i]);
//			}
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, i = 0, n = 0, j = 0, k = 0, ch;
//	int num1[20], num2[20];
//	do
//
//	{
//		scanf("%d", &a);
//		num1[i] = a;
//		i = i++;
//		j = i;
//	}
//
//	while ((ch = getchar()) != '\n');
//
//	do
//
//	{
//		scanf("%d", &b);
//		num2[n] = b;
//		n = n++;
//		k = n;
//	} while ((ch = getchar()) != '\n');
//
//
//	for (i = 0; i != j; i++)
//	{
//		if (num1[i] == num1[i - 1])
//			continue;
//		for (n = 0; n != k; n++)
//		{
//			if (num2[n] == num2[n - 1])
//				continue;
//			if (num1[i] == num2[n])
//				printf("%d\t", num1[i]);
//		}
//	}
//	return 0;
//}

