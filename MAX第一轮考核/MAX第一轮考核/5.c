#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int i, j, t, n;
int a[100];
int sz = sizeof(a) / sizeof(a[0]);

void sort()
{
    for (i = 0; i < sz - 1; i++)
    {
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tep = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tep;
            }
        }
    }
}

int main()
{
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort();
    for (i = sz - n; i < sz; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}