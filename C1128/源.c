//#pragma once
//
//
////Ԥ����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<cstdio>
//#include<Windows.h>
//#include<conio.h>
//#include<time.h>
//
////�궨��
////����Ŀ�͸�
//#define WIDTH 40
//#define HEIGHT 150
//
//
////�ҵ�����
//#define ME_BLOOD 80
//#define ME_MP 80
//#define ME_STRONG 10
//#define ME_I 8//8
//#define ME_J 9//9
//#define ME_FOV 5
//
//
//
////��ͼ�Ŀ�͸�
//#define MAP_I 26
//#define MAP_J 26
//
////�������
//#define NAMESIZE 20
//#define BAGSIZE 100
//#define BAG_PAGE_SIZE 10
//#define TYPE 4
//
////��������
//void gotoxy(int x, int y);
//void menu();//������˵����Ϳ��ܣ�
//void color(int x);
//void game();//��Ϸ���壨�Ϳ��ܣ�
////void gameintroduce();//��Ϸ���ܣ��Ϳ��ܣ�
//
//
//void gameinit();//��Ϸ�ĳ�ʼ�����Ϳ��ܡ���������
//void game_mapinit(int map[MAP_I][MAP_J]);//��ʼ����ͼ����Ҫ���ص�ͼ�����������濡����
//
//
//void game_print(struct roletag* ME, int textmap[MAP_I][MAP_J]);//��ӡѪ���͵�ǰ��ɫλ�ú͸���9�����ӵĳ�������Ҫע���������ǽ�ڲ��ܴ���ǽ�ڲ鿴���Ϳ��ܣ�¬Զ��
//void game_move(struct roletag* ME, int map[MAP_I][MAP_J]);//��ȡ���̵����ò��޸Ĳ������Ϳ��ܣ�
//void game_event(struct roletag* ME, int map[MAP_I][MAP_J], int ORI, int ORJ);//��������¼�������¼����¼��������������޽��ж�ս���������䣨������Ұ����Ѫ���˺����ӣ�������������HP���٣�����������������ͣ�������λ��˳��λ�ƣ���һ��������
//
//
//
////void rolestate_print();//��ɫ״̬��ӡ����������
////void game_eventscene();//��ӡ��ǰ�¼��ĵĻ��棨¬Զ��
////void event_explain_print();//�����ض��¼��������Ҫ���ض��ı��������������������濡����
//
//
//void gameover(struct roletag* ME);//��Ϸ�������Ϳ��ܣ�
//
//
//
//void state(int damage1, int negmp1, int damage2, int negmp2);
//void attack();
//void jiaohu(struct roletag* ME1, int* mondeHP1, int* mondeMP1, int* OKflag1, int bossflag);
//
//void smash();
//
//
////��������
//void Bag_data(void);
//void Bag(struct roletag* ME);
//void bag_second(int, struct roletag* ME);
//void Bag_loading(int, int, int*, int*);
//void Bag_printf1(void);
//void Bag_printf2(int, int);
//void Item_bag_printf(int, int, int);
//void Item_description_printf(int, int);
//void Item_get(int, int, int, int*, int*);
//void Item_get_printf(int, int, int);
//void USE_ITEM(int, int*, int*, int, int, struct roletag* ME);
//void Item_use(int, struct roletag* ME);
//void ITEMUSE1(int*);
//
////void NAME(int*);			//��ɫ���ı�
////void rolestate_print(struct roletag* ME);	//��ɫ״̬��ӡ����������
//void boundary_printf(int);	//��/�·ֽ���
//void Clear_screen(struct roletag* ME);
//
//void Text(int x, struct roletag* ME);
//void rolestate_print_minjun(struct roletag* ME);
//
//
//
//
//int main()
//
//{
//	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
//	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//���ع��
//	SetConsoleTitle("��ð��");
//	system("mode con lines=40 cols=170");//40  150
//	menu();
//	while (1)
//	{
//		//char key = _getch();
//		//switch (key)
//		//{
//		//case :
//		//	game();
//		//	break;
//		//case 0x62:
//		//	gameintroduce();
//		//	break;
//		//case 0x60:
//		//	return 0;
//		//	break;
//		//default:
//		//	printf("ѡ�����������ѡ��");
//		//	break;
//		//}
//		if (GetAsyncKeyState(0x61) || GetAsyncKeyState(VK_SPACE))
//		{
//			game();
//			break;
//		}
//		if (GetAsyncKeyState(0x60) || GetAsyncKeyState('0'))
//		{
//			break;
//		}
//	}
//	return 0;
//}
//
//
//
//
//
//char Your_Name[10];
//int FHP = 100, FMP = 10;
////�������ȫ�ֱ��������ʼ��
//int BAG[TYPE][BAGSIZE] = { 0 }, BAG_amount[TYPE][BAGSIZE] = { 0 };
//int A[TYPE][BAG_PAGE_SIZE] = { 0 }, B[TYPE][BAG_PAGE_SIZE] = { 0 };
//char item[TYPE][BAGSIZE][50];
//char item_description[TYPE][BAGSIZE][100];
//
////˫����
////����̨��Ļ���������
//HANDLE hOutput, hOutBuf;
//COORD coord = { 0,0 };//COORD�Ǹ��ṹ���������typedef struct _COORD{SHORT X;SHORT Y;}COORD;
////˫���崦����ʾ
//DWORD bytes = 0;
//
//void double_buff_init()
//{
//	//�����µĿ���̨������
//	hOutBuf = CreateConsoleScreenBuffer(
//		GENERIC_WRITE,//������̿�����������д����
//		FILE_SHARE_WRITE,//���建�����ɹ���дȨ��
//		NULL,
//		CONSOLE_TEXTMODE_BUFFER,
//		NULL
//	);
//	hOutput = CreateConsoleScreenBuffer(
//		GENERIC_WRITE,//������̿�����������д����
//		FILE_SHARE_WRITE,//���建�����ɹ���дȨ��
//		NULL,
//		CONSOLE_TEXTMODE_BUFFER,
//		NULL
//	);
//	//���������������Ĺ��
//	CONSOLE_CURSOR_INFO cci;
//	cci.bVisible = 0;
//	cci.dwSize = 1;
//	SetConsoleCursorInfo(hOutput, &cci);
//	SetConsoleCursorInfo(hOutBuf, &cci);
//}
//
//struct roletag
//{
//	//char name[20];
//	int blood;//Ѫ��
//	int Mp;
//	int strong;
//	int rolei;
//	int rolej;//����
//	int FOV;//��Ұ��Χ,��ʼ��Ϊ3����˼���ܿ���3*3��Χ����Ұ
//	int fool1, fool2, fool3, fool4;
//	int aoding; int winflag;
//};
//
//
//enum EVENT
//{
//	NOTHING = 0,//���·���
//	MONSTER = 3,//����
//	BLOODCOME = 4,//ѪȪ
//	TREASURE = 5,//����
//	FIRE = 6,//��
//	F1 = 7,//�����¼�1--
//	F2 = 8,//�����¼�2--
//	F3 = 9,//�����¼�3--
//	F4 = 10,//�����¼�4--
//	BOSS = 11//BOSS
//};
//
//enum text
//{
//	START = 100,//���¿���
//	NAME,//�������ֺ���ı�
//
//
//	text1,//·���ϵ�һ���Ʒ�
//	text2,//��ɫ�����ԱߵĻƷ�
//	//F1=7,//��Ȧ
//	text3 = 105,//·���ϵڶ����Ʒ�
//	//F2=8,//��Ȧ
//	text4 = 107,//��ͼ���½ǲ���·���ϵĻƷ�(�ڴ���EXPECIAL_EVENT1֮ǰ�޷�����)
//	text5,//����Сboss��ĻƷ�
//	//F3=9,//��Ȧ(����Сboss����ܴ���)
//	text6 = 110,//���һ���Ʒ�
//	//F4=10,//��Ȧ
//
//
//	END1 = 111,//սʤboss����δ����text4
//	END2,//����text4��սʤboss����δ����EXPECIAL_EVENT1��2��3��4
//	END3,//����text4������EXPECIAL_EVENT1��2��3��4��սʤboss
//	END3_F,//����END3��ѡ�����Ӱ¶�
//	TE//����END3��ѡ��Υ��¶�
//};
//
//
//void gotoxy(int x, int y)//xΪ������,yΪ������
//{
//	COORD pos = { x,y };
//	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleCursorPosition(hOut, pos);
//}
//
//
//void color(int x)
//{
//	if (x >= 0 && x <= 15)
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x); //
//	else
//		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //7ΪĬ�ϰ�ɫ
//	//0 = ��ɫ
////1 = ��ɫ
////2 = ��ɫ
////3 = ����ɫ
////4 = ��ɫ
////5 = ��ɫ
////6 = ��ɫ
////7 = ��ɫ
////8 = ��ɫ
////9 = ����ɫ
////10 = ����ɫ
////11 = ��ǳ��ɫ
////12 = ����ɫ
////13 = ����ɫ
////14 = ����ɫ
////15 = ����ɫ
//}
//
//
//
//
//void menu()
//{
//	gotoxy(58, 15); color(12);
//	printf("**********************************\n");
//	gotoxy(58, 16);
//	printf("**********���ո�ʼ��Ϸ**********\n");
//	gotoxy(58, 17);
//	printf("**********************************\n");
//	gotoxy(58, 18);
//	printf("************0.�˳���Ϸ************\n");
//	gotoxy(58, 19);
//	printf("**********************************\n");
//}
//
//
//void gameintroduce()
//{
//	printf("��Ϸ����");
//}
//
//
//void game()
//{
//	struct roletag me = { ME_BLOOD, ME_MP, ME_STRONG, ME_I, ME_J ,ME_FOV , 0,0,0,0,0,0 };//��ʼ���ҵ�����
//
//	int map[26][26] = {
//	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//	{1, F1, 1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},
//	{1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1},
//	{1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1},
//	{1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
//	{1, 0, 1, 5, 1, 0, 0, 0, 1, 0, 0, 0, text1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
//	{1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1},
//	{1, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1},
//	{1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, text2, 0, 0, 0, 1, 0, 1, 1, 1 },
//	{1, 5, 1, 0, 1, 5, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, BLOODCOME, 1},
//	{1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, text4, 1, text5, 0, 0, 0, 1, 5, 1, 0, 1, 0, 1, 1, 1},
//	{1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, F4, 1},
//	{1, 0, 0, text2, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
//	{1, 0, 1, 1, 1, 3, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1},
//	{1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
//	{1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 5, 1, 0, 1, 0, 1, 0, 1, 0, 1},
//	{1, 5, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, 1, 0, 1, 0, 0, 0, 1},
//	{1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1},
//	{1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, text6, 1, 0, 0, 0, 3, 5, 1},
//	{1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1},
//	{1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, 1, 0, F3, 1, 0, 0, 0, 1, 0, 1},
//	{1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1},
//	{1, 0, 0, 3, 1, 0, 0, 0, 0, 0, 0, F2, 1, 0, 0, 0, 3, 5, 1, 0, 3, 1, 0, 0, 0, 1},
//	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, BOSS, 1, 1, 1}
//	};
//
//	int ori = 0, orj = 0;
//	double_buff_init();
//	Bag_data();
//	//Item_get(0, 1, 1, BAG[0], BAG_amount[0]);
//	system("cls");
//	color(15);
//	Text(START, &me);
//
//
//	srand((unsigned int)time(NULL));//ʱ������
//	while (1)
//	{
//		game_print(&me, map);//��ǰ��ɫλ�ú͸���9�����ӵĳ�������Ҫע���������ǽ�ڲ��ܴ���ǽ�ڲ鿴
//		ori = me.rolei;
//		orj = me.rolej;
//		game_move(&me, map);//��ȡ���̵����ò��޸Ĳ���
//		game_event(&me, map, ori, orj);//��������¼�������¼����¼��������������޽��ж�ս���������䣨������Ұ����Ѫ���˺����ӣ�������������HP���٣�����������������ͣ�������λ��˳��λ��
//		//�ж��Ƿ�����ѭ����Ѫ��Ϊ0���ߵ����յ�������ѭ����
//		if (me.blood <= 0) break;
//		if (me.winflag == 1)
//		{
//			break;
//		}
//
//		//Sleep(1);//��ֹ����ģ��,��Ҫ����systemclsǰ��
//		system("cls");//�������
//	}
//	gameover(&me);//�ж�ͨ��������ʧ��������������Ϸ����
//	system("cls");
//}
//
//
//
//
//void game_print(struct roletag* ME, int textmap[MAP_I][MAP_J])
//{
//	//rolestate_print();//��ӡ��ɫ������״̬����Ѫ������������Ұ״̬�ȣ������ϽǴ�ӡ
//	//Ϊ��ͼ����ȫͼ��Ұä��
//	int outmap[MAP_I + 2][MAP_J + 2] = { 0 };
//	//int len = strlen(outmap);
//	//memset(outmap, 1, len);
//	int i = 0, j = 0;
//
//	int feedli = 0, feedlj = 0, feedri = 0, feedrj = 0;
//
//
//	for (i = 0; i < MAP_I + 2; i++)
//	{
//		for (j = 0; j < MAP_J + 2; j++)
//		{
//			outmap[i][j] = 6;
//		}
//	}
//	for (i = 1; i < MAP_I + 1; i++)
//	{
//		for (j = 1; j < MAP_J + 1; j++)
//		{
//			outmap[i][j] = 0;
//		}
//	}
//	//Ϊ��ɫ��Χ��ͼ��ä��
//
//	if (ME->rolei - ME->FOV / 2 <= 0)
//	{
//		feedli = -(ME->rolei - ME->FOV / 2);
//	}
//	if (ME->rolej - ME->FOV / 2 <= 0)
//	{
//		feedlj = -(ME->rolej - ME->FOV / 2);
//	}
//	if (ME->rolei + ME->FOV / 2 >= MAP_I)
//	{
//		feedri = -(MAP_I - ME->rolei - ME->FOV / 2 + ME->FOV - 4);
//	}
//	if (ME->rolej + ME->FOV / 2 >= MAP_J)
//	{
//		feedrj = -(MAP_J - ME->rolej - ME->FOV / 2 + ME->FOV - 4);
//	}
//	for (i = ME->rolei - ME->FOV / 2 + feedli; i < ((ME->rolei - ME->FOV / 2) + ME->FOV) + feedri; i++)
//	{
//		for (j = ME->rolej - ME->FOV / 2 + feedlj; j < ((ME->rolej - ME->FOV / 2) + ME->FOV) + feedrj; j++)
//		{
//			//if (i <= 0)i = 0;
//			//if (j <= 0)j = 0;
//			//smash(ME);
//			outmap[i + 1][j + 1] = textmap[i][j];//�˴�����Ҫע���������⣬��ײ���⻹�п���̨�ı߽�����
//		}
//	}
//	outmap[ME->rolei + 1][ME->rolej + 1] = 2;
//	//��ʼ��ӡ���µ�ͼ
//	for (i = 0; i < MAP_I + 2; i++)
//	{
//		for (j = 0; j < MAP_J + 2; j++)
//		{
//			switch (outmap[i][j])
//			{
//			case 0:
//				printf("  "); //0����յ�
//				break;
//			case 1:
//				printf("��"); //1����ǽ��
//				break;
//			case 2:
//				printf("��"); //2�������(��)
//				break;
//			case 3:
//				printf("��"); //3�������
//				break;
//			case 4:
//				printf("��"); //4����ѪȪ
//				break;
//			case 5:
//				printf("��"); //5������
//				break;
//			case 6:
//				printf("##"); //��Χ
//				break;
//			default:
//				printf("  ");
//				break;
//			}
//		}
//		printf("\n");
//	}
//
//
//	printf("\n\n");
//	printf("WASD�����ƶ���B�鿴״̬�ͱ���������ǽ�壬���޷�ͨ��  ���������  �����ѪȪ(������ͼֻ��һ��)  �������(���Ի������)\n\n");
//
//	/*˫buff�л���ʾ*/
//	static switchover = 0;
//	if (switchover) {
//		for (int i = 0; i < MAP_I+2; i++) {
//			coord.Y = i;
//			WriteConsoleOutputCharacterA(hOutBuf, outmap[i], MAP_I+2, coord, &bytes);//�ú�������������ֱ�Ϊ�������Ҫ������ַ�����������ȡ���ʼλ�á���д����
//		}
//		SetConsoleActiveScreenBuffer(hOutBuf);//�����µĻ�����Ϊ���ʾ����
//	}
//	else {
//		for (int i = 0; i < MAP_I+2; i++) {
//			coord.Y = i;
//			WriteConsoleOutputCharacterA(hOutBuf, outmap[i], MAP_I+2, coord, &bytes);
//		}
//		SetConsoleActiveScreenBuffer(hOutBuf);//�����µĻ�����Ϊ���ʾ����
//	}
//	switchover = !switchover;
//}
//
//
//void game_event(struct roletag* ME, int map[MAP_I][MAP_J], int ORI, int ORJ)
//{
//	int a = 0;
//	char ch;
//
//	int OKflag = 0;//�ж��Ƿ������¼�
//	int mondeHP = 0;
//	int mondeMP = 0;
//	Text(map[ME->rolei][ME->rolej], ME);
//	switch (map[ME->rolei][ME->rolej])
//	{
//	case NOTHING:
//		return;
//		break;
//	case MONSTER:
//	{
//
//		while (1)
//		{
//			system("cls");
//			state(ME_BLOOD - ME->blood, ME_MP - ME->Mp, mondeHP, mondeMP);
//			attack();
//			jiaohu(ME, &mondeHP, &mondeMP, &OKflag, 0);
//			if (OKflag == 1)   break;
//			if (mondeHP >= 80)
//			{
//				ME->strong += 10;
//				break;
//			}
//			if (ME->blood <= 0) break;
//		}
//
//		//event_explain_print();//�����ض��¼��������Ҫ���ض��ı�
//		/*ME->blood = HP - ME->blood;*/
//		if (mondeHP >= 80) map[ME->rolei][ME->rolej] = 0;//���ﱻɱ��
//		if (OKflag == 1)
//		{
//			ME->rolei = ORI;
//			ME->rolej = ORJ;
//		}//��ֹһֱ��������¼�
//		/*if (ME->blood <= 0) *///���Լ���Ѫ��������
//
//		color(15);//�ָ���ͼ��ɫ
//		break;
//	}
//	case BLOODCOME:
//		ME->blood = 80;
//		break;
//	case TREASURE:
//		//�����ı���
//		printf("ѡ���������\n");
//		printf("1.�����Ұ���ӣ�����Ϊ7��\n");
//		printf("2.MP�ָ�\n");
//		printf("3.HP�ָ�\n");
//		printf("4.����������\n");
//		printf("���س�ȷ������\n");
//
//		while (_kbhit())//�����Ϊ�ƶ������ļ�������
//		{
//			_getch();
//		}
//		while (1)
//		{
//			scanf("%d", &a);
//			switch (a)
//			{
//			case 1:
//				if (ME->FOV == 5)
//				{
//					printf("�����Ұ����");
//					printf("\n");
//					system("pause");
//					ME->FOV = 7;
//					map[ME->rolei][ME->rolej] = 0;
//				}
//				break;
//			case 2:
//				if (ME->Mp != 80)
//				{
//					printf("MP�ָ���80");
//					printf("\n");
//					system("pause");
//					ME->Mp = 80;
//					map[ME->rolei][ME->rolej] = 0;
//				}
//				else
//				{
//					printf("MPǿ���������240");
//					printf("\n");
//					system("pause");
//					ME->Mp = 240;
//					map[ME->rolei][ME->rolej] = 0;
//				}
//				break;
//			case 3:
//				if (ME->blood != 80)
//				{
//					printf("HP�ָ���80");
//					printf("\n");
//					system("pause");
//					ME->blood = 80;
//					map[ME->rolei][ME->rolej] = 0;
//				}
//				else
//				{
//					printf("MPǿ���������320");
//					printf("\n");
//					system("pause");
//					ME->blood = 320;
//					map[ME->rolei][ME->rolej] = 0;
//				}
//				break;
//			case 4:
//				printf("����������");
//				printf("\n");
//				system("pause");
//				ME->strong += 10;
//				map[ME->rolei][ME->rolej] = 0;
//			}
//			break;
//		}
//		break;
//	case FIRE:
//	{
//		int i = 0;
//		for (i = 5; i >= 0; --i)
//		{
//			ME->blood -= 2;
//			printf("���յ��������˺���Ѫ��-2");
//		}
//		break;
//	}
//	case F1:
//	{
//		//�¼�һ�ı�
//		if (ME->fool1 == 0)//����һ��λ��
//		{
//			ME->fool1 = 1;
//		}
//		break;
//	}
//	case F2:
//	{
//		//�¼����ı�
//		if (ME->fool2 == 0)//���߶���λ��
//		{
//			ME->fool2 = 1;
//		}
//		break;
//	}
//	case F3:
//	{	//�������ı�
//		if (ME->fool3 == 0)//��������λ��
//		{
//			ME->fool3 = 1;
//		}
//		break;
//	}
//	case F4:
//	{	//�¼����ı�
//		if (ME->fool4 == 0)//�����ĵ�λ��
//		{
//			ME->fool4 = 1;
//		}
//		break;
//	}
//	case BOSS:
//	{
//		printf("��������BOSS�أ��޷����ܣ��Ƿ���룿\n");
//		printf("����Y����N��̽��һ��\n");
//		while (_kbhit())
//		{
//			_getch();
//		}
//
//		do
//		{
//			scanf("%c", &ch);
//			while (_kbhit())
//			{
//				_getch();
//			}
//			switch (ch)
//			{
//			case 'Y':
//			case 'y':
//			{
//				//int OKflag = 0;//�ж��Ƿ������¼�
//				//int mondeHP = 0;
//				//int mondeMP = 0;
//				while (1)
//				{
//					system("cls");
//					state(ME_BLOOD - ME->blood, ME_MP - ME->Mp, mondeHP, mondeMP);
//					attack();
//					jiaohu(ME, &mondeHP, &mondeMP, &OKflag, 1);
//					if (OKflag == 1)   break;
//					if (mondeHP >= 80)
//					{
//						ME->strong += 100;
//						break;
//					}
//					if (ME->blood <= 0) break;
//				}
//
//				//event_explain_print();//�����ض��¼��������Ҫ���ض��ı�
//				/*ME->blood = HP - ME->blood;*/
//				if (mondeHP >= 80) map[ME->rolei][ME->rolej] = 0;//���ﱻɱ��
//				if (OKflag == 1) ME->rolei += 1;//��ֹһֱ��������¼�
//				/*if (ME->blood <= 0) *///���Լ���Ѫ��������
//				ME->winflag = 1;
//				color(15);//�ָ���ͼ��ɫ
//				return;
//				break;
//			}
//			case 'N':
//			case 'n':
//				ME->rolei = ORI;
//				ME->rolej = ORJ;
//				return;
//				break;
//			default:
//				printf("ֻ����ѡ��Y��N��\n");
//				break;
//			}
//		} while (ch);
//	}
//	default: break;
//	}
//
//}
//
//
//
//void game_move(struct roletag* ME, int map[MAP_I][MAP_J])
//{
//	if (GetAsyncKeyState('W') && map[ME->rolei - 1][ME->rolej] != 1)
//	{
//		ME->rolei -= 1;
//	}
//	if (GetAsyncKeyState('S') && map[ME->rolei + 1][ME->rolej] != 1)
//	{
//		ME->rolei += 1;
//	}
//	if (GetAsyncKeyState('A') && map[ME->rolei][ME->rolej - 1] != 1)
//	{
//		ME->rolej -= 1;
//	}
//	if (GetAsyncKeyState('D') && map[ME->rolei][ME->rolej + 1] != 1)
//	{
//		ME->rolej += 1;
//	}
//	if (GetAsyncKeyState('B'))
//	{
//		Bag(ME);
//	}
//}
//
//
//void gameover(struct roletag* ME)
//{
//	int a = 0; int b = 0;
//	//char isok1 = 0; char isok2 = 0; char OP;
//	int isok1 = 0; int isok2 = 0; char OP;
//	system("cls");
//	printf("��Ϸ������������Ϸ���㣬����������\n");
//	//HWND hnd = NULL;
//	while (_kbhit())
//	{
//		_getch();
//	}
//	if (ME->winflag == 1 && ME->aoding == 1)
//	{
//		/*int isok = MessageBox(hnd, "�������", "��Ϸ����", MB_OK);*/
//		if (ME->fool1 == 1 && ME->fool2 == 1 && ME->fool3 == 1 && ME->fool4 == 1)
//		{
//			Text(END3, ME);
//			printf("���Ӱ¶�ѡY,�ܾ��¶�ѡN\n");
//
//			while (1)
//			{
//				scanf("%c", &OP);
//				switch (OP)
//				{
//				case 'N':
//				case 'n':
//					Text(TE, ME);
//					while (_kbhit())
//					{
//						_getch();
//					}
//					b = 1;
//					break;
//				case 'Y':
//				case'y':
//					Text(END3_F, ME);
//					while (_kbhit())
//					{
//						_getch();
//					}
//					break;
//				default:
//					printf("ֻ��ѡY����N�ܾ���\n");
//					while (_kbhit())
//					{
//						_getch();
//					}
//					continue;
//					break;
//				}
//				break;
//			}
//		}
//		if (!(ME->fool1 == 1 && ME->fool2 == 1 && ME->fool3 == 1 && ME->fool4 == 1)) { Text(END2, ME); }
//		a = 1;
//	}
//	if (ME->winflag == 1 && ME->aoding == 0)
//	{
//		//isok1 = MessageBox(NULL, "Ӯ��", "��Ϸ����", MB_OK);
//		Text(END1, ME); a = 1;
//	}
//	if (ME->winflag == 0)
//	{
//		//isok2 = MessageBox(NULL, "����", "��Ϸ����", MB_OK);
//		printf("��Ϸʧ��"); a = 1;
//	}
//	gotoxy(68, 27);
//	if (b == 0) printf("��ͽ�������");
//	gotoxy(68, 28);
//	system("pause");
//
//	if (a == 1)
//	{
//		isok2 = MessageBox(NULL, "Ҫ������һ����", "ѡ��", MB_OKCANCEL);
//		if (isok2 == 1)
//		{
//			game();
//		}
//		else
//		{
//			isok1 = MessageBox(NULL, "��������:\n�Ϳ���\n¬Զ��\n������\n������\n�濡��\n\nף����Ϸ���", "��Ϸ��������", MB_OK);
//		}
//	}
//	//while (_kbhit())
//	//{
//	//	_getch();
//	//}
//	//printf("Ҫ������һ����Y�ؿ�,����������˳���Ϸ\n");
//	//isok2 = _getch();
//	//if (isok2 == 'Y' || isok2 == 'y')
//	//{
//	//	game();
//	//}
//	//else
//	//{
//	//	return;
//	//	//isok1 = MessageBox(NULL, "��������:\n�Ϳ���\n¬Զ��\n������\n������\n�濡��\n\nף����Ϸ���", "��Ϸ��������", MB_OK);
//	//}
//
//
//
//}
//
//
//void state(int damage1, int negmp1, int damage2, int negmp2)
//{
//	char hp[171] = "HP "; 	char mp[171] = "MP ";
//	int i = 0, j = 0;
//	if (damage1 < 0)
//	{
//		for (i = 3; i < 170; i++)
//		{
//			if (i < 83)
//			{
//				hp[i] = '#';
//			}
//			if (i >= 83 && i <= (86 + damage2))
//			{
//				hp[i] = ' ';
//			}
//			if (i > (86 + damage2) && i < 167)
//			{
//				hp[i] = '#';
//			}
//		}
//	}
//	if (damage2 < 0)
//		for (i = 3; i < 170; i++)
//		{
//			if (i < (83 - damage1))
//			{
//				hp[i] = '#';
//			}
//			if (i >= 83 - damage1 && i <= 86)
//			{
//				hp[i] = ' ';
//			}
//			if (i > 86 && i < 167)
//			{
//				hp[i] = '#';
//			}
//		}
//	if (damage1 >= 0 && damage2 >= 0)
//	{
//		for (i = 3; i < 170; i++)
//		{
//			if (i < (83 - damage1))
//			{
//				hp[i] = '#';
//			}
//			if (i >= 83 - damage1 && i <= (86 + damage2))
//			{
//				hp[i] = ' ';
//			}
//			if (i > (86 + damage2) && i < 167)
//			{
//				hp[i] = '#';
//			}
//		}
//	}
//	hp[167] = ' ';
//	hp[168] = 'H';
//	hp[169] = 'P';
//	hp[170] = '\0';
//	color(4);
//	printf("%s\n", hp);
//
//	if (negmp2 < 0)
//	{
//		for (i = 3; i < 170; i++)
//		{
//			if (i < (83 - negmp1))
//			{
//				if (i < 83)
//				{
//					mp[i] = '#';
//				}
//			}
//			if (i >= 83 - negmp1 && i <= 86)
//			{
//				mp[i] = ' ';
//			}
//			if (i > 86 && i < 167)
//			{
//				mp[i] = '#';
//			}
//		}
//
//	}
//	if (negmp1 < 0)
//	{
//		for (i = 3; i < 170; i++)
//		{
//			if (i < 83)
//			{
//				if (i < 83)
//				{
//					mp[i] = '#';
//				}
//			}
//			if (i >= 83 && i <= (86 + negmp2))
//			{
//				mp[i] = ' ';
//			}
//			if (i > (86 + negmp2) && i < 167)
//			{
//				mp[i] = '#';
//			}
//		}
//	}
//	if (negmp1 >= 0 && negmp2 >= 0)
//	{
//		for (i = 3; i < 170; i++)
//		{
//			if (i < (83 - negmp1))
//			{
//				if (i < 83)
//				{
//					mp[i] = '#';
//				}
//			}
//			if (i >= 83 - negmp1 && i <= (86 + negmp2))
//			{
//				mp[i] = ' ';
//			}
//			if (i > (86 + negmp2) && i < 167)
//			{
//				mp[i] = '#';
//			}
//		}
//	}
//
//	mp[167] = ' ';
//	mp[168] = 'M';
//	mp[169] = 'P';
//	mp[170] = '\0';
//	color(9);
//	printf("%s\n", mp);
//}
//void attack()
//{
//	color(7);
//	printf("                                                      F                                                                       &3z &   \n");
//	printf("                                                     J    JF                                                         .n$@@#$&@    #\n");
//	printf("                                                    FJ   <JF                                                     .#&       3~     & #@\n");
//	printf("                                                    J<  <JF9                                               #  &8            $; a!  . .@v\n");
//	printf("                                                      J  <<JF                                             i +1 .                    o; .@v\n");
//	printf("                                                   JJ   J  <J                                             -#@    $+<>@@ &^              u.%#.\n");
//	printf("                                                  JrJ  J   <JF                                           +#   ;~.        !-               .#^ \n");
//	printf("                                                  <<<jjjjj<JJ                                        - ^8   @             @                 ^.#\n");
//	printf("                                               J   J  JJ   <<JF                                        @-@   &z@@@@@~     n.                 &\n");
//	printf("                                               JJJ  < JJ    <JJ                                      n@^.-@ ^@@@@@@@z    **                 i\n");
//	printf("             @@                                      J J  <  <                                          &i u !@@@@@@@    $                   #\n");
//	printf("          @     @@                             J  J9J      <<JF                                         . @o  n##@@#&    i.        ~          @\n");
//	printf("         @         @                           J  JJJ     <<<rF                                            @    6@i.   o$                    .#\n");
//	printf("         @         @                     JJ   J         <<<<JF                                              @                        +         1\n");
//	printf("            @    @                       J JFJ<         <<<<JF                                             @    @@##$%%^.                       1o\n");
//	printf("           @@   @@                       J  J<        <<<<<<J9                                  j@#$%^&@@@.@@@#$$@#@@3#!@@@@@@#              8.\n");
//	printf("          @@    @   @                    JJ           <<<<<<JJ                               <<<<<<<#@!#@#@*@# @@#2@@#4~%% !.*!              @.\n");
//	printf("          @     @     @                    J           <<<<<J                                   ~@!###@$!@###1@%@@@@##&&3+@!%@@@    @#<     & - &.\n");
//	printf("            @   @      @                   J           <<<<<J                                              !@3     . a@i              8@     v@+\n");
//	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< <<   <<<rJF<<<<                                                  !i&         $#            !i       #\n");
//	printf("              @       @                 J   <<<<<<<<<<JJjj                                                   ;$       .7o              ;$     .8o\n");
//	printf("             @          @               J  <<<<<<<<rJJJ                                                      8@     . a@i              8@     v@+ \n");
//	printf("           @              @            J< <<rJJJrJJJF                                                         8@     v@+               8@     v@+\n");
//	printf("                                                                                                                 l_j                      l_j   \n");
//}
//
//
//void jiaohu(struct roletag* ME1, int* mondeHP1, int* mondeMP1, int* OKflag1, int bossflag)
//{
//	int step = 3; int strong = 0;
//	char ch; int a = 0;
//	int monrand = 0;
//
//	if (ME1->fool1 == 1)
//	{
//		strong = ME1->strong + 10;//���˺�
//	}
//	if (ME1->fool3 == 1)//������
//	{
//		ME1->Mp = 160;
//	}
//	else strong = ME1->strong;//û���߾ͳ�ʼ��������Ϊ10
//
//
//	if (step % 2 == 1)//�������
//	{
//		//�������
//		color(12);
//		if (bossflag == 1)
//		{
//			printf("���վ�ս\n");
//		}
//		printf("��J/1ʹ���չ�\n��K/2˫��\n");
//		if (bossflag == 0)
//		{
//			printf("��L/0����\n");
//		}
//
//		//printf("%d\n", *mondeHP1);//������
//		ch = _getch();
//		if (ch == '1' || ch == 'J' || ch == 'j')
//		{
//			printf("��ʹ�����չ����Թ������%d���˺�", ME1->strong);
//			Sleep(500);
//			*mondeHP1 += strong;
//			step++;
//		}
//		else if (ch == '2' || ch == 'K' || ch == 'k')
//		{
//			if (ME1->Mp < 20)
//			{
//				printf("û������");
//			}
//			if (ME1->Mp >= 20)
//			{
//				a = rand() % 2;
//				if (a == 0)
//				{
//					printf("�Է���������Ĺ���");
//				}
//				if (a == 1)
//				{
//					printf("��ʹ�����չ����Թ������%d���˺�,Ч����Ⱥ", 2 * ME1->strong);
//					*mondeHP1 += 2 * strong;
//				}
//				if (a == 2)
//				{
//					printf("��ʹ������Ѫ�������ָ�һ��Ѫ��");
//					*mondeHP1 += strong / 2;
//					ME1->blood += strong / 2;
//				}
//				ME1->Mp -= 20;
//				step++;
//			}
//			Sleep(500);
//		}
//		else if ((ch == '0' || ch == 'L' || ch == 'l') && bossflag == 0)
//		{
//			printf("�򲻹�\n��������");
//			Sleep(500);
//			*OKflag1 = 1;
//			return;
//		}
//	}
//
//
//	printf("\n\n\n\n");
//	//����ģ��
//	if (bossflag == 0)
//	{
//		if (step % 2 == 0)//������
//		{
//			monrand;
//			if (ME1->fool4 == 1) monrand = rand() % 4;//����4��ʹ�����ܹ���Ĺ���
//			else monrand = rand() % 3;
//			if (monrand == 0)
//			{
//				printf("���﹥�����㣬���%d�˺�", ME1->fool2 ? 10 : 5);
//				if (ME1->fool2 == 0) ME1->blood -= 10;
//				else ME1->blood -= 5;
//			}
//			if (monrand == 1)
//			{
//				printf("����ʹ�����㣬���%d���˺�", ME1->fool2 ? 20 : 10);
//				if (ME1->fool2 == 0) ME1->blood -= 20;
//				else ME1->blood -= 10;
//			}
//			if (monrand == 2)
//			{
//				printf("�����������Ѫ�����5���˺�����Ѫ");
//				ME1->blood -= 5;
//				*mondeHP1 -= 5;
//			}
//			if (monrand == 3)
//			{
//				printf("���﹥�����㣬���������㿪��");
//			}
//			Sleep(500);
//		}
//	}
//	if (bossflag == 1)
//	{
//		if (step % 2 == 0)//������
//		{
//			monrand;
//			if (ME1->fool4 == 1) monrand = rand() % 4;//����4��ʹ�����ܹ���Ĺ���
//			else monrand = rand() % 3;
//			if (monrand == 0)
//			{
//				printf("���﹥�����㣬���%d�˺�", ME1->fool2 ? 15 : 10);
//				if (ME1->fool2 == 0) ME1->blood -= 15;
//				else ME1->blood -= 10;
//			}
//			if (monrand == 1)
//			{
//				printf("����ʹ�����㣬���%d���˺�", ME1->fool2 ? 25 : 15);
//				if (ME1->fool2 == 0) ME1->blood -= 25;
//				else ME1->blood -= 15;
//			}
//			if (monrand == 2)
//			{
//				printf("�����������Ѫ�����10���˺�����Ѫ");
//				ME1->blood -= 10;
//				*mondeHP1 -= 10;
//			}
//			if (monrand == 3)
//			{
//				printf("���﹥�����㣬���������㿪��");
//			}
//			Sleep(500);
//		}
//	}
//
//	return;
//}
//
//void smash(struct roletag* ME)
//{
//	if (ME->rolei <= 0)
//	{
//		ME->rolei = 0;
//	}
//	if (ME->rolej <= 0)
//	{
//		ME->rolej = 0;
//	}
//}
//
//
//
////�������ݳ�ʼ����������������ͷ��
//void Bag_data(void)
//{
//
//	strcpy(item[0][1], "[ע����]");
//
//	strcpy(item_description[0][1], "ʹ��ɫ�ظ�20��HP��");
//}
//
////������һ����
//void Bag(struct roletag* ME)
//{
//	char order1 = -1;
//
//	Clear_screen(ME);
//	Bag_printf1();
//	printf("\n");
//	for (;;)
//	{
//		order1 = _getch();
//		if (order1 == 'x' || order1 == 'X')
//			return;
//		else
//			switch (order1)
//			{
//			case '0':
//				bag_second(0, ME);
//				break;
//			case '1':
//				bag_second(1, ME);
//				break;
//			case '2':
//				bag_second(2, ME);
//				break;
//			case '3':
//				bag_second(3, ME);
//				break;
//			}
//	}
//}
//
////�����ڶ�����
//void bag_second(int type, struct roletag* ME)
//{
//	int Bag_page = 1;
//	char order2 = -1;
//
//	Bag_loading(type, Bag_page, A[type], B[type]);
//	Clear_screen(ME);
//	Bag_printf2(type, Bag_page);
//	printf("\n");
//	for (;;)
//	{
//		order2 = _getch();
//		if (order2 == 'x' || order2 == 'X')
//		{
//			Clear_screen(ME);
//			Bag_printf1();
//			return;
//		}
//		else if (order2 == 'z' || order2 == 'Z' && Bag_page > 1)
//		{
//			Bag_page--;
//			Bag_loading(type, Bag_page, A[type], B[type]);
//			Clear_screen(ME);
//			Bag_printf2(type, Bag_page);
//		}
//		else if (order2 == 'c' || order2 == 'C' && Bag_page < BAG_PAGE_SIZE)
//		{
//			Bag_page++;
//			Bag_loading(type, Bag_page, A[type], B[type]);
//			Clear_screen(ME);
//			Bag_printf2(type, Bag_page);
//		}
//		else
//			switch (order2)
//			{
//			case '0':
//				USE_ITEM(type, &BAG[type][A[type][0]], &BAG_amount[type][B[type][0]], A[type][0], B[type][0], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			case '1':
//				USE_ITEM(type, &BAG[type][A[type][1]], &BAG_amount[type][B[type][1]], A[type][1], B[type][1], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			case '2':
//				USE_ITEM(type, &BAG[type][A[type][2]], &BAG_amount[type][B[type][2]], A[type][2], B[type][2], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			case '3':
//				USE_ITEM(type, &BAG[type][A[type][3]], &BAG_amount[type][B[type][3]], A[type][3], B[type][3], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			case '4':
//				USE_ITEM(type, &BAG[type][A[type][4]], &BAG_amount[type][B[type][4]], A[type][4], B[type][4], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			case '5':
//				USE_ITEM(type, &BAG[type][A[type][5]], &BAG_amount[type][B[type][5]], A[type][5], B[type][5], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			case '6':
//				USE_ITEM(type, &BAG[type][A[type][6]], &BAG_amount[type][B[type][6]], A[type][6], B[type][6], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			case '7':
//				USE_ITEM(type, &BAG[type][A[type][7]], &BAG_amount[type][B[type][7]], A[type][7], B[type][7], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			case '8':
//				USE_ITEM(type, &BAG[type][A[type][8]], &BAG_amount[type][B[type][8]], A[type][8], B[type][8], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			case '9':
//				USE_ITEM(type, &BAG[type][A[type][9]], &BAG_amount[type][B[type][9]], A[type][9], B[type][9], ME);
//				Bag_loading(type, Bag_page, A[type], B[type]);
//				Clear_screen(ME);
//				Bag_printf2(type, Bag_page);
//				break;
//			}
//	}
//}
//
//
////������һ�����ӡ
//void Bag_printf1(void)
//{
//	boundary_printf(0);
//	printf("\n[0]���ĵ���\n[1]װ��\n[2]�ز�\n[3]��Ҫ��Ʒ\n");
//	printf("[x]�ر�\n");
//	boundary_printf(1);
//}
//
////�����ڶ������ӡ
//void Bag_printf2(int type, int page)
//{
//	int i = 0;
//	boundary_printf(0);
//
//	printf("\n��Ʒ����:");
//	switch (type)
//	{
//	case 0:
//		printf("���ĵ���\n");
//		break;
//	case 1:
//		printf("װ��\n");
//		break;
//	case 2:
//		printf("�ز�\n");
//		break;
//	case 3:
//		printf("��Ҫ��Ʒ\n");
//		break;
//	}
//	for (i = 0; i < BAG_PAGE_SIZE; i++)
//	{
//		printf("[%d]", i);
//		Item_bag_printf(type, A[type][i], B[type][i]);
//		if (i % 2 == 1)
//			printf("\n");
//	}
//
//	printf("ҳ�� %d/10  [z]��һҳ   [c]��һҳ   [x]������һ��", page);
//
//	boundary_printf(1);
//}
//
////�����ڶ���������Ʒ��ش�ӡ
//void Item_bag_printf(int type, int x, int y)
//{
//	printf("%-14s%3d  ", item[type][x], y);
//}
//
////��Ʒ������ӡ
//void Item_description_printf(int type, int x)
//{
//	printf("%s\n", item_description[type][x]);
//}
//
////ˢ�±���״̬�ĺ���
//void Bag_loading(int type, int page, int* A, int* B)
//{
//	int i = 0;
//	for (i = 0; i <= BAG_PAGE_SIZE; i++)
//	{
//		A += i;
//		*A = BAG[type][(page - 1) * 10 + i];
//		B += i;
//		*B = BAG_amount[type][(page - 1) * 10 + i];
//	}
//}
//
////��Ʒ��ȡ
//void Item_get(int type, int x, int y, int* X, int* Y)
//{
//	int i = 0;
//	for (i = 0; i < BAGSIZE; i++)
//		if (x == BAG[type][i])
//		{
//			Y += i;
//			*Y += y;
//			Item_get_printf(type, x, y);
//			if (BAG_amount[type][i] == 0)
//			{
//				X += i;
//				*X = -1;
//			}
//			Item_get_printf(type, x, y);
//			return;
//		}
//	for (i = 0; i < BAGSIZE; i++)
//	{
//		if (BAG[type][i] == 0)
//		{
//			X += i;
//			*X = x;
//			Y += i;
//			*Y += y;
//			Item_get_printf(type, x, y);
//			return;
//		}
//	}
//}
//
////��Ʒ��ȡʱ����Ϣ��ӡ
//void Item_get_printf(int type, int x, int y)
//{
//	color(15);
//	if (y > 0)
//		printf("�����");
//	else
//		printf("ʧȥ��");
//	puts(item[type][x]);
//	printf("* %d\n", abs(y));
//	color(7);
//}
//
////���뱳������Ʒʹ��ʱ����ĺ���
//void USE_ITEM(int type, int* x, int* y, int X, int Y, struct roletag* ME)
//{
//	char order3 = -1;
//
//	if (type == 0 && Y != 0)
//	{
//		boundary_printf(0);
//		printf("\n");
//		puts(item[type][X]);
//		Item_description_printf(type, X);
//		printf("[z]ʹ��  /  [x]ȡ��");
//		boundary_printf(1);
//	}
//	else if (Y != 0)
//	{
//		boundary_printf(0);
//		printf("\n");
//		puts(item[type][X]);
//		Item_description_printf(type, X);
//		printf("[x]�ر�");
//		boundary_printf(1);
//	}
//	else
//		return;
//
//	for (;;)
//	{
//		order3 = _getch();
//		if (order3 == 'x' || order3 == 'X')
//			return;
//		else if (order3 == 'z' || order3 == 'Z')
//		{
//			y -= 1;
//			*y -= 1;
//			Item_use(X, ME);
//			if (*y == 0)
//				x -= 1;
//			*x = 0;
//			return;
//		}
//	}
//}
//
////������Ʒʱ�ĺ���
//void Item_use(int x, struct roletag* ME)
//{
//	switch (x)
//	{
//	case 1:
//		ITEMUSE1(&ME->blood);
//		break;
//	}
//}
//
////ִ��������Ʒ1
//void ITEMUSE1(int* x)
//{
//	*x += 20;
//	if (*x >= FHP)
//		*x = FHP;
//}
//
////void NAME(int* name, struct roletag* ME)
////{
////	printf("����������");
////	scanf("%s", ME->name);
////}
//
//void rolestate_print(struct roletag* ME)
//{
//	color(7);
//	boundary_printf(0);
//
//	color(13);
//	printf("NAME: %s\n", Your_Name);
//	printf("HP: (%d / %d)\n", ME->blood, FHP);
//	printf("MP: (%d)\n", FMP);
//
//	color(7);
//	boundary_printf(1);
//}
//
//void boundary_printf(int x)
//{
//	int i = 0;
//	if (x == 0) {
//		for (i = 0; i < 50; i++)
//			printf("*");
//		printf("\n");
//	}
//
//	else
//		printf("\n");
//	for (i = 0; i < 50; i++)
//		printf("*");
//}
//
//void Clear_screen(struct roletag* ME)
//{
//	int i = 0;
//	system("cls");
//	rolestate_print_minjun(ME);
//	for (i = 1; i <= 25; i++)
//		printf("\n");
//}
//
//
//void Text(int x, struct roletag* ME)
//{
//	switch (x)
//	{
//	case START://���¿���
//		color(15); gotoxy(58, 15);
//		printf("������Ϊ");
//		color(14);
//		printf("���ƻ衱");
//		color(15);
//		printf("�Ĺ��¡�\n");
//		color(3); gotoxy(58, 16);
//		printf("�k��");
//		color(15);
//		printf("���ִ������Լ����սᣬ�����ھ��������Ļ\n\n");
//		color(7); gotoxy(58, 17);
//		printf("��սʿ");
//		color(15);
//		printf("��������������λ���µ�ʱ�����������������......\n");
//		color(7);
//		gotoxy(68, 28);
//		system("pause");
//		break;
//	case NAME://�������ֺ���ı�
//		color(15);
//		printf("����һ��սʿ�����ܹ��ı��ѣ�ս��ɳ����\n");
//		printf("��Ĵ͸���սʿ�������д��أ��������֣���������\n");
//		color(7);
//		//system("pause");
//		break;
//	case text1://·���ϵ�һ���Ʒ�
//		color(3);
//		printf("��......�����ܹ�ͨ���ⳡ�������ҽ���ŵ��ĸ�������\n");
//		color(7);
//		printf("���ұ���......����ȥ����\n");
//		//system("pause");
//		break;
//	case text2://��ɫ�����ԱߵĻƷ�
//		color(3);
//		printf("������������ȥ֮ǰ������������ٶ�ӵ��ǰ������������\n");
//		color(7);
//		//system("pause");
//		break;
//	case F1://��Ȧ
//		color(15);
//		printf("սʿ�ӵ��µĹ���������˼�Ƭ���������׹�Ĳ��Ƶ�ֽ������ǰʰ��ȴ���ְ׹�ӿ�����Լ������ڡ�\n����Ĳ�Ƭ���Ժ���һ��������\n\n");
//		color(3);
//		printf("��");
//		color(7);
//		printf("����");
//		color(3);
//		printf("�л���ȥ������......����������ҵ��k��\n�����Ǳ����ҳ��k����ϻ������������ɱ���k��ɱ��......���¶�����\n��������ڡ��ƻ衯֮ǰ����\n���ǵģ����ƻ衯֮ǰ......��\n");
//		color(7);
//		//system("pause");
//		break;
//	case text3://·���ϵڶ����Ʒ�
//		color(3);
//		printf("��ÿһ��̽����ս�������������ǿ��������η����������\n");
//		color(7);
//		printf("������һ����Ȼͨ������������\n");
//		color(3);
//		printf("��������������**����֮ǰ�����������\n�����ߣ����ҷ�����\n");
//		color(7);
//		//system("pause");
//		break;
//	case F2://��Ȧ
//		color(15);
//		printf("����һ��ʤ����սʿ��·�ľ�ͷ��һ����ɫ������Ϯ���ˡ�\n����ֵ��ǣ���ɵ����ڽӴ���սʿ������󣬱���ͬʯ����һ����ʧ�ú����ټ���");
//		color(7);
//		printf("�����ܸ��ܵõ��������ޡ��������ڣ�������......���޷�Ӧ����\n");
//		//system("pause");
//		break;
//	case text4://��ͼ���½ǲ���·���ϵĻƷ�(�ڴ�����Ȧ�¼�֮ǰ�޷�����)
//		if (ME->fool1 == 1)
//		{
//			ME->aoding = 1;
//			color(15);
//			printf("̽���е�սʿ������һ��һ����̳��ķ��䣬���е������ע�ӡ�ͻȻ��ʧ�ˡ�\n��̳�����븡�ֳ�һ�Ž�ɫ�Ĺ��ţ�һ��ǿ�ҵ�������սʿ���ɵñ������۾�����һ����������");
//			color(6);
//			printf("�k");
//			color(15);
//			printf("��\n");
//			color(7);
//			printf("�����ԣ��k��Ҫɱ���㣿���¶�������\n");
//			color(6);
//			printf("���ǣ���֪���k�ǲ�����ֶ���ĳ�ŵ����\n");
//			color(7);
//			printf("����ֻ����Ҫ����ȥ����\n");
//			color(6);
//			printf("��ȥ������Ӣ����������ҽ�������Ҳ�������뿪�����\n������һ�����ף���֪�������ѡ�񡣡�\n");
//			color(7);
//			//system("pause");
//		}
//		break;
//	case text5://����Сboss��ĻƷ�
//		color(3);
//		printf("���������ǰ��֮ǰ���ȷ���һ�α���֮�ء���\n���ҽ��ָ����������������һ�ν��д͸�����\n");
//		color(7);
//		system("pause");
//		break;
//	case F3://��Ȧ(����Сboss����ܴ���)
//		color(15);
//		printf("սʿ�ص�����֮����ȴ�ڴ˵ص�̽���з�����һ�����صķ��䡣\n������ѻ��Ź����ǵ�ʬ��������һ�����ϱ鲼�˺ۣ�ģ�����Լ��ո�ɱ����һ��ǿ��һģһ����\n");
//		color(3);
//		printf("���������������ﻯ������������߰ɣ����ﲻ�������ĳ�������");
//		color(7);
//		printf("��սʿ��ϸ�����ʬ�����ս�ȭͷվ������\n����......��\n�����ⲻ����ɱ������һֻ......��ֹ���������������\n");
//		//system("pause");
//		break;
//	case text6://���һ���Ʒ�
//		color(3);
//		printf("�������յ���ڸ�����׼���׵��������վ֡�\n");
//		color(7);
//		//system("pause");
//		break;
//	case F4://��Ȧ
//		color(15);
//		printf("սʿ���յ㸽��ͣ����ǰ���ĽŲ���\n��һ��������������������֮��ķ��֡�\n");
//		color(7);
//		printf("��������֮ǹ��......��\n");
//		//system("pause");
//		break;
//	case END1://սʤ����boss��δ�������¶��¼���
//		color(15);
//		printf("ս��������սʿ�������񣬴ݻ��˹����������ļ�״���塣\n���롱���ѵ�һ˲�䣬սʿ����������Ĳ����ӻ�ͻȻ��ʧ�ˡ�\nһ��ǿ�ҵĹ�â������սʿ�������ھ����зֱ�����......\n\n");
//		system("pause");
//		color(3);
//		printf("����һ�Σ���\n���ǵģ�������һ�������ʱ��ʧȥ����ϵ����\n��......��\n������һ�������ȥ�����ǻ��л��ᡣ��\n");
//		color(7);
//		system("pause");
//		break;
//	case END2://սʤ����boss�󣨴������¶��¼���
//		color(15);
//		printf("ս��������սʿ����������Ĳ����ӻ�ͻȻ��ʧ�ˡ������Ժ���ͻȻ���ֳ�һ�仰��\n");
//		color(6);
//		printf("�������Ǹ��롣��\n");
//		color(15);
//		printf("սʿ�����ˡ�\n��������ɴ�������һ�̣����롱ͻȻ����һ�ֲ��ɶ��Ƶ����ȳ���ӿ����սʿ���������ڼ��С�\nһ�����ҵ��������󣬷����ع�ƽ����ֻ������ͬ����һ��ġ��롱����ɫ�����������......\n\n");
//		system("pause");
//		color(6);
//		printf("���ҽ����������������ڣ��㽫�뿪���������Ϊ�ҵ�һ����һͬ�뿪......��\n");
//		color(7);
//		system("pause");
//		break;
//	case END3://սʤ����boss�󣨴������¶��¼������Ҵ����ĸ������¼���
//		color(3);
//		printf("���ܺá����ڣ��ݻ��Ǹ����롯����\n���㽫+-*/<{}><......\n");
//		color(6);
//		printf("�����ڣ������Ǹ����롯��������ǵĽ��ס���\n");
//		color(7);
//		//system("pause");
//		break;
//	case END3_F://���ѡ�����Ӱ¶�
//		color(15);
//		printf("սʿ�����ˡ�\n��������ɴ�������һ�̣����롱ͻȻ����һ�ֲ��ɶ��Ƶ����ȳ���ӿ����սʿ���������ڼ��С�\nһ�����ҵ��������󣬷����ع�ƽ����ֻ������ͬ����һ��ġ��롱����ɫ�����������......\n\n");
//		system("pause");
//		color(6);
//		printf("���ҽ����������������ڣ��㽫�뿪���������Ϊ�ҵ�һ����һͬ�뿪......��\n");
//		color(7);
//		system("pause");
//		break;
//	case TE://���ѡ��Υ���¶�
//		printf("���㲻ֹ����˵����仰�ɣ��¶�����\n�ҽ�ʣ�������һ�������ڡ�����֮ǹ��֮�ϣ����š��롱Ͷ���˾�����һ����\n������ǿ��;��ҵı�ը�����롱�е����ﱻһ���ݻ��ˣ��Ҹ��ܵ����м����ż��������������ӿ�������ڳ��ŵġ����硱�ڴ˿�ͻȻ��Ծ����������������һ�̸�����ˮ�档\n");
//		printf("���¶�����͵k��һ������ƭ��......�����������ĳ�޽����Ҽ̳С���\n���ҽ���k��......���������ǣ����»ƻ裡��\n");
//		gotoxy(68, 27);
//		printf("���Ѵ���������");
//	}
//}
//
//
//void rolestate_print_minjun(struct roletag* ME) //p1=hp ,p2=mp,p3=strong,p4=x,p5=y
//{
//	char arrblood[83];
//	char arrmp[83];
//	int i = 0; int j = 0;
//	arrblood[0] = 'h';
//	arrblood[1] = 'p';
//	arrblood[2] = ' ';
//	arrmp[0] = 'm';
//	arrmp[1] = 'p';
//	arrmp[2] = ' ';
//	system("cls");
//	color(4);
//	printf("HP:");
//	for (i = 3; i <= ME->blood; i++)
//	{
//		arrblood[i] = '#';
//		printf("%c", arrblood[i]);
//		color(4);
//	}
//	printf("%d", ME->blood);
//	//��ӡ����
//	printf("\n");
//	color(9);
//	printf("MP:");
//	for (j = 3; j <= ME->Mp; j++)
//	{
//		arrmp[j] = '#';
//		printf("%c", arrmp[j]);
//		color(9);
//	}
//	printf("%d", ME->Mp);
//	printf("\n");
//	color(5);
//	printf("��������%d\n", ME->strong);//��ӡ����
//	printf("λ�ã�x=%d y=%d\n", ME->rolei, ME->rolej); //��ӡλ������
//	color(15);
//}
