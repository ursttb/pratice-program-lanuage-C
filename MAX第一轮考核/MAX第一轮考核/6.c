#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int arr[100] = { 0 };

void F(int a)
{
	int i = 0;
	if (a == 1|| a == 2|| a == 3)
	{
		printf("%d\n", arr[a]);
	}
	else
	{
		for (i = 4; i <= a; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 3];
		}
		printf("%d\n", arr[a]);
	}
}

int main()
{
	arr[1] = 1; arr[2] = 2; arr[3] = 3;
	int i = 0, j = 0;
	int a = 0;

	while (scanf("%d", &a) != EOF)
	{
		if (a == 0)
		{
			break;
		}
		F(a);
	}

	return 0;
}