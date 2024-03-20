#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i, j, count = 0;
	int arr[20][20];
	int a[20] ={0};
	scanf("%d", &n);
	for (i = 1; a[i-1] < n; i++)
	{
		a[i] = a[i-1] + i;
	}
	count = i;
	for (i = 0; i < count-1; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
		arr[i][i] = 1;
	}
	for (int k = 0; k < arr[count-2][n-a[count-2]]; k++)
	{
		printf("Hug me\n");
	}
	return 0;
}