//#include"stdio.h"
//#include"string.h"
//
//void plus()
//{
//	char a[200], b[200], c[200]; int x[210], y[210], z[210];
//	//gets(a);
//	//gets(b);
//	scanf("%s", a);
//	scanf("%s", b);
//	int lena = strlen(a), lenb = strlen(b), k = 0;
//	for (int i = 0; i <= 20; i++)
//	{
//		x[i] = 0;
//		y[i] = 0;
//		z[i] = 0;
//	}
//	for (int i = 0; i <= strlen(a) - 1; i++)
//	{
//		x[i] = a[lena - 1] - '0';
//		lena--;
//	}
//	for (int i = 0; i <= strlen(b) - 1; i++)
//	{
//		y[i] = b[lenb - 1] - '0';
//		lenb--;
//	}
//	int max = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
//	for (int i = 0; i <= max - 1; i++)
//	{
//		z[i] += (x[i] + y[i]);
//		if (z[i] >= 2)
//		{
//			z[i] -= 2;
//			z[i + 1] += 1;
//			if (i == max - 1)
//			{
//				k++;
//			}
//		}
//	}
//	for (int i = max - 1 + k; i >= 0; i--)
//	{
//		c[i] = z[i] + '0';
//	}
//	for (int i = max - 1 + k; i >= 0; i--)
//	{
//		printf("%c", c[i]);
//	}
//}
//
//int main()
//{
//	plus();
//	return 0;
//}
