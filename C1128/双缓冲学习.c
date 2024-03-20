////#include <stdio.h>
////#include <Windows.h>
////
////int main() {
////    //获取默认标准显示缓冲区句柄
////    HANDLE hOutput;
////    COORD coord = { 0,0 };
////    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
////
////    //创建新的缓冲区
////    HANDLE hOutBuf = CreateConsoleScreenBuffer(
////        GENERIC_READ | GENERIC_WRITE,
////        FILE_SHARE_READ | FILE_SHARE_WRITE,
////        NULL,
////        CONSOLE_TEXTMODE_BUFFER,
////        NULL
////    );
////
////    //设置新的缓冲区为活动显示缓冲
////    SetConsoleActiveScreenBuffer(hOutBuf);
////
////    //隐藏两个缓冲区的光标
////    CONSOLE_CURSOR_INFO cci;
////    cci.bVisible = 0;
////    cci.dwSize = 1;
////    SetConsoleCursorInfo(hOutput, &cci);
////    SetConsoleCursorInfo(hOutBuf, &cci);
////
////    //双缓冲处理显示
////    DWORD bytes = 0;
////    char data[800];
////    while (1)
////    {
////        for (char c = 'a'; c < 'z'; c++)
////        {
////            system("cls");
////            for (int i = 0; i < 800; i++)
////            {
////                printf("%c", c);
////            }
////            ReadConsoleOutputCharacterA(hOutput, data, 800, coord, &bytes);
////            WriteConsoleOutputCharacterA(hOutBuf, data, 800, coord, &bytes);
////        }
////    }
////    return 0;
////}
//
//
//
////#include<stdio.h>
////#include<Windows.h>
////
////HANDLE hOutput, hOutBuf;  //控制台屏幕缓冲区句柄
////HANDLE houtpoint;
////COORD coord = { 0,0 };//初始输出位置 
////DWORD bytes = 0;
////int hop_flag = 0;  //通过指针轮流指向两个缓冲区，实现双缓冲 
////
////void printPic();
////
////int main() {
////	hOutBuf = CreateConsoleScreenBuffer(
////		GENERIC_WRITE,
////		FILE_SHARE_WRITE,
////		NULL,
////		CONSOLE_TEXTMODE_BUFFER,
////		NULL
////	);
////	hOutput = CreateConsoleScreenBuffer(
////		GENERIC_WRITE,
////		FILE_SHARE_WRITE,
////		NULL,
////		CONSOLE_TEXTMODE_BUFFER,
////		NULL
////	);
////
////	//隐藏两个缓冲区的光标
////	CONSOLE_CURSOR_INFO cci;
////	cci.bVisible = 0; // 可见度
////	cci.dwSize = 1;// 大小
////	SetConsoleCursorInfo(hOutput, &cci);
////	SetConsoleCursorInfo(hOutBuf, &cci);
////
////	while (1) {
////		Sleep(1000);
////		printPic();
////		Sleep(600);
////	}
////}
////
////void printPic() {
////	hop_flag = !hop_flag;
////	if (!hop_flag) {
////		char score_char1[] = "这是一个缓存区显示内容！11111111";
////		coord.Y = 1;//第一行位置输出
////		WriteConsoleOutputCharacter(hOutBuf, score_char1, strlen(score_char1), coord, &bytes);
////		SetConsoleActiveScreenBuffer(hOutBuf);
////	}
////	else {
////		char score_char2[] = "这是另一个缓存区显示内容！22222222";
////		coord.Y = 1;
////		WriteConsoleOutputCharacter(hOutput, score_char2, strlen(score_char2), coord, &bytes);
////		SetConsoleActiveScreenBuffer(hOutput);
////	}
////
////}
//
//
//#include<stdio.h>
//#include<Windows.h>
//
//HANDLE hOutput, hOutBuf;  //控制台屏幕缓冲区句柄
//HANDLE houtpoint;
//COORD coord = { 0,0 };//初始输出位置 
//DWORD bytes = 0;
//int hop_flag = 0;  //通过指针轮流指向两个缓冲区，实现双缓冲 
//#define _Y 15  //15行 
//#define _X 20  // 20列 
//
//char data[_Y][_X];//这是全局变量定义的字符数组
//void printPic();
//
//int main() {
//	hOutBuf = CreateConsoleScreenBuffer(
//		GENERIC_WRITE,
//		FILE_SHARE_WRITE,
//		NULL,
//		CONSOLE_TEXTMODE_BUFFER,
//		NULL
//	);
//	hOutput = CreateConsoleScreenBuffer(
//		GENERIC_WRITE,
//		FILE_SHARE_WRITE,
//		NULL,
//		CONSOLE_TEXTMODE_BUFFER,
//		NULL
//	);
//
//	//隐藏两个缓冲区的光标
//	CONSOLE_CURSOR_INFO cci;
//	cci.bVisible = 0; // 可见度
//	cci.dwSize = 1;// 大小
//	SetConsoleCursorInfo(hOutput, &cci);
//	SetConsoleCursorInfo(hOutBuf, &cci);
//
//	while (1) {
//		Sleep(1000);
//		printPic();
//		Sleep(600);
//	}
//}
//
////打印内容一
//void printPic() {
//	int i, j;
//	hop_flag = !hop_flag;
//	if (!hop_flag) {    //这里是每次交替，直接把hOutput或hOutBuf赋给houtpoint 
//		houtpoint = hOutput;
//	}
//	else {
//		houtpoint = hOutBuf;
//	}
//
//	for (i = 0; i < _Y; i++) {    //打印你需要的二维数组图案
//		for (j = 0; j < _X; j++) {
//			if (i == 0 || i == _Y - 1 || j == 0 || j == _X - 1) {
//				data[i][j] = '*';
//			}
//			else {
//				data[i][j] = ' ';
//			}
//		}
//	}
//	coord.Y = 1;
//	for (i = 0; i < _Y; i++) {    //循环打印每一行
//		coord.Y++;    //每次都打印到下一行
//		WriteConsoleOutputCharacter(houtpoint, data[i], _X, coord, &bytes);
//	}    //data[i]：每行的地址。 _X: 每行的长度
//
//	SetConsoleActiveScreenBuffer(houtpoint);
//}
//
////打印内容二
////int key = 0;//计数器
////void printPic() {
////	hop_flag = !hop_flag;
////	if (!hop_flag) {
////		houtpoint = hOutBuf;
////	}
////	else {
////		houtpoint = hOutput;
////	}
////
////	key++;
////	char score_char1[] = "Score:";
////	char score_char2[10];
////	itoa(key, score_char2, 10);//将整型key转换成字符串，存入score_char2，10为十进制转换
////	strcat(score_char1, score_char2);//合并两个字符数组
////
////	coord.Y = 1;
////	for (int i = 0; i < 20; i++) {//这里循环只是为让大家能看出真的不闪屏
////		coord.Y++;
////		WriteConsoleOutputCharacter(houtpoint, score_char1, strlen(score_char1), coord, &bytes);
////	}
////	SetConsoleActiveScreenBuffer(houtpoint);
////
////}
//
//
//
////#include <stdio.h>
////#include <Windows.h>
////
////int main() {
////    //获取默认标准显示缓冲区句柄
////    HANDLE hOutput;
////    COORD coord = { 0,0 };
////    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
////
////    //创建新的缓冲区
////    HANDLE hOutBuf = CreateConsoleScreenBuffer(
////        GENERIC_READ | GENERIC_WRITE,
////        FILE_SHARE_READ | FILE_SHARE_WRITE,
////        NULL,
////        CONSOLE_TEXTMODE_BUFFER,
////        NULL
////    );
////
////    //设置新的缓冲区为活动显示缓冲
////    SetConsoleActiveScreenBuffer(hOutBuf);
////
////    //隐藏两个缓冲区的光标
////    CONSOLE_CURSOR_INFO cci;
////    cci.bVisible = 0;
////    cci.dwSize = 1;
////    SetConsoleCursorInfo(hOutput, &cci);
////    SetConsoleCursorInfo(hOutBuf, &cci);
////
////    //双缓冲处理显示
////    DWORD bytes = 0;
////    char data[800];
////    while (1)
////    {
////        for (char c = 'a'; c < 'z'; c++)
////        {
////            for (int i = 0; i < 800; i++)
////            {
////                printf("%c", c);
////            }
////
////        }
////        system("cls");
////        ReadConsoleOutputCharacterA(hOutput, data, 800, coord, &bytes);
////        WriteConsoleOutputCharacterA(hOutBuf, data, 800, coord, &bytes);
////    }
////    return 0;
////}