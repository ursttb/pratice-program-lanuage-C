//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int M, N, i =0 , j = 0;
//	char arr[101][101] = {0};
//	int k = 0, count = 0;
//	while (scanf("%d%d", &M, &N) != EOF)
//	{
//		count = 0;
//		if (M == 0 && N == 0)
//		{
//			break;
//		}
//		getchar();
//		for (i = 0; i < M; i++)
//		{
//			for (j = 0; j < N; j++)
//			{
//				scanf("%c", &arr[i][j]);
//			}
//			if (j == N)
//			{
//				getchar();
//			}
//		}
//		for (i = 0; i < M; i++)
//		{
//			for (j = 0; j < N; j++)
//			{
//				if (i == 0&&j == 0)
//				{
//					if (arr[i][j] == '@')
//					{
//						count++;
//					}
//				}
//				if (i == 0 && j != 0)
//				{
//					if (arr[i][j] == '@' && arr[i][j - 1] != '@' && arr[i][j + 1])
//					{
//						if (count == 0)
//						{
//							count++;
//						}
//						if (arr[i + 1][j - 1] != '@' && arr[i + 1][j + 1] != '@')
//							count++;
//					}
//					if (j == N-1 && arr[i][N - 1] == '@')
//					{
//						count++;
//					}
//				}
//				else if(i !=0)
//				{
//					if (j == 0)
//					{
//						if (arr[i][j] == '@' && arr[i - 1][j] != '@'&& arr[i - 1][j + 1] != '@')
//						{
//							count++;
//						}
//					}
//					if (j == N - 1)
//					{
//						if (arr[i - 1][j] != '@' && arr[i][j - 1] != '@' && arr[i - 1][j - 1])
//						{
//							count++;
//						}
//					}
//					if (arr[i][j] == '@' && arr[i][j - 1] != '@' && arr[i - 1][j] != '@' && arr[i - 1][j - 1] != '@' && arr[i - 1][j + 1] != '@')
//					{
//						count++;
//					}
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}