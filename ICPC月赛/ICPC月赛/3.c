#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0, N = 0;
	int a[100] = { 0 };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (a[j] >= a[j + 1])
			{
				int tep = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tep;
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}