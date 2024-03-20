#define _CRT_SECURE_NO_WARNINGS

//递归反向输出字符
//#include<stdio.h>
//
//void FAN(char a, char b, char c, char d, char e)
//{
//
//}
//int main(*)
//{
//	char a, b, c, d, e;
//	scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);
//	FAN(a, b, c, d, e);
//	return 0;
//}
//



//逆序输出数字
// 带符号超长逆序输出
// #include<stdio.h>
//
//char str[100];
//char a[100];
//int f;
//int main() {
//	scanf("%s", str);
//	int l = strlen(str);
//	if (str[0] == '-') {
//		f = 1;
//		printf("-");
//	}
//	else f = 0;
//	for (int i = f; i < l; i++)a[i] = str[i];
//	while (l > 1 && a[l - 1] == '0')l--;//删去前面0
//	for (int i = l - 1; i >= f; i--) {
//		//if (a[i] == '.' - '0')printf(".");
//		else printf("%c ", a[i]);
//	}
//	return 0;
//}
// 
// 小型无符号逆序输出
// #include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char n[1000000] = { 0 };
//	scanf("%s", &n);
//	int l = strlen(n);
//	for (int i = l - 1; i >= 0; i--)
//	{
//		printf("%c ", n[i]);
//	}
//	return 0;
//}
// #include<stdio.h>
//
//int main()
//
//{
//    char ch[99];
//    scanf("%s", &ch);
//    int l = strlen(ch);
//    for (int i = l - 1; i >= 0; i--)
//    {
//        printf("%c ", ch[i]);
//    }
//    return 0;
//}
//C艹有符号超长逆序输出方案一（有屎）
//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
//const int N = 1e6 + 5;
//char str[N];//字符数组输入数字，防止溢出
//vector<int> a;
//int main() {
//	cin >> str;
//	int l = strlen(str);
//	for (int i = 0; i <= l - 1; i++)a.push_back(str[i] - '0');
//	while (a.size() > 1 && a.back() == 0)a.pop_back();//去除前导0
//	reverse(a.begin(), a.end());
//	for (int i = 0; i <= a.size() - 1; i++)cout << a[i];
//	return 0;
//}
//方案二
//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
//const int N = 1e6 + 5;
//char str[N];
//vector<int> a;
//int f;
//int main() {
//	cin >> str;
//	int l = strlen(str);
//	if (str[0] == '-') {
//		f = 1;
//		cout << "-";
//	}
//	else f = 0;
//	for (int i = f; i <= l - 1; i++)a.push_back(str[i] - '0');
//	while (a.size() > 1 && a.back() == 0)a.pop_back();
//	for (int i = a.size() - 1; i >= f; i--) {
//		if (a[i] == '.' - '0')cout << ".";
//		else cout << a[i] << " ";
//	}
//	return 0;
//}
// //方案三最牛逼版
//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
//const int N = 1e6 + 5;
//char str[N];
//vector<char> a;
//int f;
//int main() {
//	cin >> str;
//	int l = strlen(str);
//	if (str[0] == '-') {
//		f = 1;
//		cout << "-";
//	}
//	else f = 0;
//	for (int i = f; i <= l - 1; i++)a.push_back(str[i]);
//	while (a.size() > 1 && a.back() == '0')a.pop_back();
//	for (int i = a.size() - 1; i >= f; i--) {
//		if (a[i] == '.' - '0')cout << ".";
//		else cout << a[i] << " ";
//	}
//	return 0;
//}




//测试字数数组打印
//#include<stdio.h>
//int main()
//
//{
//	short a = 0;
//	char ch[3] = {0};
//	scanf("%s", ch);
//	printf("%s", ch);
//	char ch[2] = '\0';
//	printf("%s", ch);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	short a = 0;
//	char output[17] = { 0 };
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 15; i >= 0; i--)
//	{
//		output[i] = '0' + (a % 2);//存入字符数组要'0' + 数字
//		a /= 2;
//	}
//	output[16] = '\0';
//	printf("%s", output);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch[100] = {0};
//	int i = 0;
//	for (i = 0; i<;i++)
//	{
//		scanf("%c", ch[i]);
//	}
//	printf("%s", ch);
//	return 0;
// }


//消除字符串空格
//#include<stdio.h>
//
//int main()
//{
//	char ch_arr[200];
//	gets(ch_arr);
//	char* p = ch_arr;
//	char* q = ch_arr;
//	while (*p != '\0') 
//	{
//		if (*p != ' ')
//		{
//			*q = *p; q++; p++;
//		}
//		else if (*p = ' ' && *(p + 1) != ' ')
//		{
//			*q = ' '; q++; p++;
//		}
//		else p++;
//	}
//	*q = '\0';
//	printf("%s", ch_arr);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	getchar();
//	char a[1005], b[1005];
//	while (n--)
//	{
//		gets(a);
//		int j = 0;
//		for (int i = 0; i < strlen(a); i++)
//		{
//			if (a[i] != ' ')
//			{
//				b[j++] = a[i];
//			}
//		}
//		for (int k = 0; k < j; k++)
//			printf("%c", b[k]);
//		memset(b, 0, sizeof(b));
//		printf("\n");
//	}
//	return 0;
//}




//谁在说谎
//#include<stdio.h>
//
//int TF[4] = { 0 };//0初始化不知道  1没偷  2偷   甲0乙1丙2丁3
//
//Zhengci(int i)//执行这个人的真话
//{
//	if (i == 0)
//	{
//		TF[1] = 1;
//		TF[3] = 2;
//	}
//	if(i == 1)
//	{
//		TF[1] = 1;
//		TF[2] = 2;
//	}
//	if(i == 2)
//	{
//		TF[0] = 1;
//		TF[1] = 2;
//	}
//	if(i == 3)
//	{
//		TF[3] = 1;
//	}
//}
//Fanzheng(int i)//这人撒谎
//{
//	if (i == 0)
//	{
//		TF[1] = 2;
//		TF[3] = 1;
//	}
//	if (i == 1)
//	{
//		TF[1] = 2;
//		TF[2] = 1;
//	}
//	if (i == 2)
//	{
//		TF[0] = 2;
//		TF[1] = 1;
//	}
//	if (i == 3)
//	{
//		TF[3] = 2;
//	}
//}
//
//int Pan()
//{
//	int count = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		if (TF[i] == 2)
//		{
//			count++;
//		}
//	}
//	if (count > 1)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (i = 0)
//		{
//			Zhengci(i); Fanzheng(1); Fanzheng(2); Fanzheng(3);
//		}
//		if (i = 1)
//		{
//			Zhengci(i); Fanzheng(0); Fanzheng(2); Fanzheng(3);
//		}
//		if (i = 2)
//		{
//			Zhengci(i); Fanzheng(1); Fanzheng(0); Fanzheng(3);
//		}
//		if (i = 3)
//		{
//			Zhengci(i); Fanzheng(1); Fanzheng(2); Fanzheng(0);
//		}
//		if (Pan())
//		{
//			for (int n = 0; n < 4; n++)
//			{
//				if (TF[n] == 2)
//				{
//					printf("%d", n);
//					return 0;
//				}
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i+1; j < 4; j++)
//		{
//			Zhengci(i);
//			Zhengci(j);
//			if (Pan())
//			{
//				for (int n = 0; n < 4; n++)
//				{
//					if (TF[n] == 2)
//					{
//						printf("%d", n);
//						return 0;
//					}
//				}
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		if (i == 0)
//		{
//			Zhengci(1); Zhengci(2); Zhengci(3); Fanzheng(i);
//		}
//		if (i == 1)
//		{
//			Zhengci(0); Zhengci(2); Zhengci(3); Fanzheng(i);
//		}
//		if (i == 2)
//		{
//			Zhengci(1); Zhengci(0); Zhengci(3); Fanzheng(i);
//		}
//		if (i == 3)
//		{
//			Zhengci(1); Zhengci(2); Zhengci(0); Fanzheng(i);
//		}
//		if (Pan())
//		{
//			for (int n = 0; n < 4; n++)
//			{
//				if (TF[n] == 2)
//				{
//					printf("%d", n);
//					return 0;
//				}
//			}
//		}
//	}
//	return 0;
//}