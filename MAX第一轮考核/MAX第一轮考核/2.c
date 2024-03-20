#define _CRT_SECURE_NO_WARNINGS
//大数求和法
#include<stdio.h>
#include<string.h>

char s1[1000], s2[1000];
int num1[1000], num2[1000], len1, len2, i, j;

void plus(int len1,int len2)
{
    int i, j;
    for (i = len1 - 1, j = 0; i >= 0; --i) //从后往前处理大数字符串，把字符串变成数字组
    {

        num1[j] = s1[i] - '0';
        j++;

    }
    for (i = len2 - 1, j = 0; i >= 0; --i)
    {
        num2[j] = s2[i] - '0';
        j++;

    }

    for (i = 0; i < (len2 > len1 ? len2 : len1); i++)
    {
        num1[i] += num2[i];
        if (num1[i] > 1)
        {
            num1[i + 1] += 1;
            num1[i] -= 2;
        }
    }
    int g = 0;
    if (num1[i])
    {
        for (g= 0,j = i; j >= 0; --j,g++)
        {
            s1[g] = num1[j] + '0';
        }
    }
    else
    {
        for (g = 0, j = i-1; j >= 0; --j, g++)
        {
            s1[g] = num1[j] + '0';
        }
    }
}

int main()
{
    scanf("%s", s1);
    scanf("%s", s2);
    memset(num1, 0, sizeof(num1));
    memset(num2, 0, sizeof(num2));
    len1 = strlen(s1);
    len2 = strlen(s2);
    plus(len1, len2);
    printf("%s", s1);
    return 0;
}