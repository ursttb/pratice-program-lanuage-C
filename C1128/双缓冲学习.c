////#include <stdio.h>
////#include <Windows.h>
////
////int main() {
////    //��ȡĬ�ϱ�׼��ʾ���������
////    HANDLE hOutput;
////    COORD coord = { 0,0 };
////    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
////
////    //�����µĻ�����
////    HANDLE hOutBuf = CreateConsoleScreenBuffer(
////        GENERIC_READ | GENERIC_WRITE,
////        FILE_SHARE_READ | FILE_SHARE_WRITE,
////        NULL,
////        CONSOLE_TEXTMODE_BUFFER,
////        NULL
////    );
////
////    //�����µĻ�����Ϊ���ʾ����
////    SetConsoleActiveScreenBuffer(hOutBuf);
////
////    //���������������Ĺ��
////    CONSOLE_CURSOR_INFO cci;
////    cci.bVisible = 0;
////    cci.dwSize = 1;
////    SetConsoleCursorInfo(hOutput, &cci);
////    SetConsoleCursorInfo(hOutBuf, &cci);
////
////    //˫���崦����ʾ
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
////HANDLE hOutput, hOutBuf;  //����̨��Ļ���������
////HANDLE houtpoint;
////COORD coord = { 0,0 };//��ʼ���λ�� 
////DWORD bytes = 0;
////int hop_flag = 0;  //ͨ��ָ������ָ��������������ʵ��˫���� 
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
////	//���������������Ĺ��
////	CONSOLE_CURSOR_INFO cci;
////	cci.bVisible = 0; // �ɼ���
////	cci.dwSize = 1;// ��С
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
////		char score_char1[] = "����һ����������ʾ���ݣ�11111111";
////		coord.Y = 1;//��һ��λ�����
////		WriteConsoleOutputCharacter(hOutBuf, score_char1, strlen(score_char1), coord, &bytes);
////		SetConsoleActiveScreenBuffer(hOutBuf);
////	}
////	else {
////		char score_char2[] = "������һ����������ʾ���ݣ�22222222";
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
//HANDLE hOutput, hOutBuf;  //����̨��Ļ���������
//HANDLE houtpoint;
//COORD coord = { 0,0 };//��ʼ���λ�� 
//DWORD bytes = 0;
//int hop_flag = 0;  //ͨ��ָ������ָ��������������ʵ��˫���� 
//#define _Y 15  //15�� 
//#define _X 20  // 20�� 
//
//char data[_Y][_X];//����ȫ�ֱ���������ַ�����
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
//	//���������������Ĺ��
//	CONSOLE_CURSOR_INFO cci;
//	cci.bVisible = 0; // �ɼ���
//	cci.dwSize = 1;// ��С
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
////��ӡ����һ
//void printPic() {
//	int i, j;
//	hop_flag = !hop_flag;
//	if (!hop_flag) {    //������ÿ�ν��棬ֱ�Ӱ�hOutput��hOutBuf����houtpoint 
//		houtpoint = hOutput;
//	}
//	else {
//		houtpoint = hOutBuf;
//	}
//
//	for (i = 0; i < _Y; i++) {    //��ӡ����Ҫ�Ķ�ά����ͼ��
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
//	for (i = 0; i < _Y; i++) {    //ѭ����ӡÿһ��
//		coord.Y++;    //ÿ�ζ���ӡ����һ��
//		WriteConsoleOutputCharacter(houtpoint, data[i], _X, coord, &bytes);
//	}    //data[i]��ÿ�еĵ�ַ�� _X: ÿ�еĳ���
//
//	SetConsoleActiveScreenBuffer(houtpoint);
//}
//
////��ӡ���ݶ�
////int key = 0;//������
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
////	itoa(key, score_char2, 10);//������keyת�����ַ���������score_char2��10Ϊʮ����ת��
////	strcat(score_char1, score_char2);//�ϲ������ַ�����
////
////	coord.Y = 1;
////	for (int i = 0; i < 20; i++) {//����ѭ��ֻ��Ϊ�ô���ܿ�����Ĳ�����
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
////    //��ȡĬ�ϱ�׼��ʾ���������
////    HANDLE hOutput;
////    COORD coord = { 0,0 };
////    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
////
////    //�����µĻ�����
////    HANDLE hOutBuf = CreateConsoleScreenBuffer(
////        GENERIC_READ | GENERIC_WRITE,
////        FILE_SHARE_READ | FILE_SHARE_WRITE,
////        NULL,
////        CONSOLE_TEXTMODE_BUFFER,
////        NULL
////    );
////
////    //�����µĻ�����Ϊ���ʾ����
////    SetConsoleActiveScreenBuffer(hOutBuf);
////
////    //���������������Ĺ��
////    CONSOLE_CURSOR_INFO cci;
////    cci.bVisible = 0;
////    cci.dwSize = 1;
////    SetConsoleCursorInfo(hOutput, &cci);
////    SetConsoleCursorInfo(hOutBuf, &cci);
////
////    //˫���崦����ʾ
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