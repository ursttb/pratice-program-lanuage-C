#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


//��ICPC���ţ����������ϰ(��)
// ����һϵ��a,b��a+b
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    while (scanf("%d%d", &a, &b) != EOF)//���������д��
//    {
//        printf("%d\n", a + b);
//    }
//    return 0;
//}
//��ICPC���ţ����������ϰ(��)
// ������һ��n��������n��ÿһ��Ҫ����һϵ��a,b��a+b
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a, b;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d%d", &a, &b);
//		printf("%d\n", a + b);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a, b;
//	while (scanf("%d", &n)!=EOF)//��������
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d%d", &a, &b);
//			printf("%d\n", a + b);
//		}
//	}
//	return 0;
//}
//��ICPC���ţ����������ϰ(��)
// �����������ÿһ����a, b��a, b������0ʱ��ֹ�����a+b
//#include<stdio.h> 
//int main()
//{
//    int a, b;
//    while (scanf("%d%d", &a, &b) != EOF)//��������
//	 {
//        if (a == 0 && b == 0) break;//��������
//        printf("%d\n", a + b);
//    }
//    return 0;
//}
//���������ϰ(��)
// ����������ݣ���һ����Ϊn ������n�������������n������,����0��ֹ
//#include <stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)//��������
//    {
//        if (n == 0)//��ʡ��
//        {//��ʡ��
//            return 0;//��ʡ��
//        }//��ʡ��
//        int arr;
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr);
//            res += arr;
//        }
//        printf("%d\n", res);
//    }
//}
//���������ϰ(��)
//#include<stdio.h>
// ������N��������N��ÿһ��Ҫ�����һ����Ϊn ������n�������������n�����ĺ�
//int main()
//{
//	int n;
//    scanf("%d", &n);
//    for(int j = 0; j<n; j++)//�����о�����������for
//	{
//        int N = 0;
//		scanf("%d", &N);
//        int arr;
//        int res = 0;
//        for (int i = 0; i < N; i++)
//        {
//            scanf("%d", &arr);
//            res += arr;
//        }
//        printf("%d\n", res);
//	}
//	return 0;
//}


//���������ϰ(��)
//����������ݣ�ÿһ�е�һ����n������n������͡����е�һ����Ϊ0����ֹ
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d",&n)!=EOF)
//	{
//		if (n == 0)
//		{
//			break;
//		}
//		int N;
//		scanf("%d", &N);
//		int sum=0, num;
//		for (int i = 0; i < N; i++)
//		{
//			scanf("%d", &num);
//			sum += num;
//		}
//		printf("%d", sum);
//	}
//	return 0;
//}




//���������ϰ(��)
//������N��������������Ȼ���һ��n����n����������
//#include<stdio.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		int j, n, num, sum = 0;
//		scanf("%d", &n);
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &num);
//			sum += num;
//		}
//		if(i!=N-1)
//		printf("%d\n\n", sum);
//		else
//		printf("%d",sum);
//	}
//	return 0;
//}