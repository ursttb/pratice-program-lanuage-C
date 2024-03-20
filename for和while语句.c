#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


//for语句


//for求阶乘
//#include<stdio.h>
//
//int main()
//
//{
//	int i = 1;
//	int n = 0;
//	long long ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = i * ret;
//	}
//	printf("%lld\n", ret);
//	return 0;
//}

//for计算分数数列求和
//#include<stdio.h>
//
//int main()
//
//{
//	int n = 0;
//	int i = 1;
//	double sum = 0;
//	int sign = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += sign * 1.0 / i;
//		sign = -sign;
//	}
//	printf("%.4lf", sum);
//	return 0;
//}

//for求幂的末尾
//#include<stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	long long a = 0;
//	long long b = 0;
//	int i = 0;
//	scanf("%lld%lld", &a, &b);
//	long long num = 0;
//	num = pow(a, b);
//	while(num/1000 != 0)
//	{
//		num = num % 1000;
//	}
//	for (i = 100; i=1; i / 10)
//	{
//		printf("%lld", num / i);
//		if (i = 1)
//			break;
//		num = num % i;
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//
//{
//	int a, b,i,count =0;
//	int num = 1;
//	scanf("%d%d", &a, &b);
//	for (i = 1; i <= b; i++)
//	{
//		num = num * a;
////		if (num / 1000 != 0)
//		num = num % 1000;
//	}
//	printf("%d", num / 100);
//	printf("%d", num % 100 / 10);
//	printf("%d", num % 100 % 10 / 1);
	//i = 100;
	//while (count<=3)
	//{	
	//	printf("%d", num / i);
	//	num %= i;
	//	i /= 10;
	//	count++;
	//}
	//for (i = 100; count <= 3; 	count++)
	//{
	//	printf("%d", num / i);
	//	num = num % i;
	//	i /= 10;
	//}
//	return 0;
//}

//求素数
//#include<stdio.h>
//
//int main()
//
//{
//	int a, b;
//	int i = 1;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	for (; a <= b; a++)
//	{
//		for (i = 2; i <= a; i++)
//		{
//			if (a % i == 0)
//				break;
//		}
//		if (i == a)
//		{
//			printf("%d\n", a);
//			count++;
//		}
//	}
//	if (count == 0)
//		printf("None");
//	return 0;
//}





//while语句系列


//最小n值
//#include<stdio.h>
//
//int main()
//
//{	
//	int n = 0;
//	int m = 0;
//	double sum = 0;
//	scanf("%d", &m);
//	while (sum<m)
//	{
//		n++;
//		sum = 1.0 / n + sum;
//	}
//	printf("%d\n", n);
//	return 0;
//}




//最小公约数和最大公倍数
//#include<stdio.h>
//
//int main()
//
//{
//	long long m, n;
//	int GCD, LCM;
//	scanf("%lld%lld", &m, &n);
//	long long ret = m * n;
//	while (m % n != 0)
//	{
//		GCD = m % n;
// 		m = n;
//		n = GCD;
// 	}
//	LCM = ret / GCD;
//	printf("%d %d", GCD, LCM);
//	return 0;
//}



//Collatz猜想
//#include<stdio.h>
//
//int main()
//
//{	
//	long long N;
//	scanf("%lld", &N);
//	while (N != 2)
//	{
//		if (N % 2 == 1)
//		{
//			printf("%lld*3+1=%lld\n", N, N * 3 + 1);
//			N = N * 3 + 1;
//		}
//		else
//		{
//			printf("%lld/2=%lld\n", N,  N / 2);
//			N = N / 2;
//		}
//	}
//	printf("End");
//	return 0;
//}