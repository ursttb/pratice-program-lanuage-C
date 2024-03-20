//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int L= 0, N= 0, i = 0;
//	int a[5000] = { 0 };
//	int b[5000] = { 0 };
//	while (scanf("%d%d", &L, &N) != EOF)
//	{
//		if (L == 0 && N == 0)
//		{
//			break; 
//		}
//		for (i = 0; i < N; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		for (i = 0; i<N; i++)
//		{
//			b[i] = L + 1 - a[i];
//		}
//		for (i = 0; i < N; i++)
//		{
//
//		}
//		//for (i = 0; i < N-1; i++)
//		//{
//		//	for (int j = 0; j < N - 1 - i; j++)
//		//	{
//		//		if (a[j] >= a[j + 1])
//		//		{
//		//			int tep = a[j + 1];
//		//			a[j + 1] = a[j];
//		//			a[j] = tep;
//		//		}
//		//	}
//		//}
//		//printf("%d ", a[N-1]);
//		//for (i = 0; i < N - 1; i++)
//		//{
//		//	for (int j = 0; j < N - 1 - i; j++)
//		//	{
//		//		if (b[j] <= b[j + 1])
//		//		{
//		//			int tep = b[j + 1];
//		//			b[j + 1] = b[j];
//		//			b[j] = tep;
//		//		}
//		//	}
//		//}
//		//printf("%d\n", b[0]);
//	}
//	return 0;
//}