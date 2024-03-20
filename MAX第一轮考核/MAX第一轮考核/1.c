#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct MyStruct
{
	int id;
	int a;
}ren[100];

int main()
{
	int i = 0, j = 0;
	int N, K;
	int a[100] = { 0 };
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &ren[i].id);
	}

	int B = K / N;
	if (B * N < K)
	{
		B = B + 1;
	}
	if (B * N == K)
	{
		for (i = 0; i < N; i++)
		{
			a[i] = B;
		}
		for (i = 0; i < N; i++)
		{
			printf("%d\n", a[i]);
		}
		return 0;
	}
	for (i = 0; i < N; i++)
	{
		a[i] = B;
	}
	for (i = 0,j =1; j <= N; i++,j++)
	{
		if (a[i] * j >= K)
		{
			break;
		}
	}
	for (; i < N; i++)
	{
		a[i] = B - 1;
	}

	int min = 0, renminid = 0;
	int g = 0;
	for (g = 0;g<N;g++)
	{
		min = ren[0].id;
		for (i = g; i < N; i++)
		{
			if (min > ren[i].id)
			{
				min = ren[i].id;
				renminid = i;
			}
		}
		ren[renminid].a = a[g];
	}
	for (i = 0; i < N; i++)
	{
		printf("%d\n", ren[i].a);
	}
	return 0;
}