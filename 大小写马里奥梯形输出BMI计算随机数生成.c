//////#include<stdio.h>
//////
//////void main()
//////{
////// printf("此程序的主要作用是将字母的大小写互相转换\n");
//////
////// char ch = 0;
////// int ret = 0;
////// while (ret <= 4) 
////// {
//////  while (getchar() != '\n') {
//////
//////  }
//////  printf("请输入一个字母：\n");
//////
//////
//////  scanf_s("%c", &ch);
//////  if (ch <= 90)
//////   ch = ch + 32;
//////  else
//////   ch = ch - 32;
//////  printf("转换结果为：%c", ch);
//////  putchar(ch);
//////
//////  ret++;
////// }
////// 
//////}

//
//#include<stdio.h>
//int main()
//{
// printf("此程序的主要作用是将字母的大小写互相转换\n");
// char ch=0;
// int ret=0;
// while(ret<=4)
// {
//  printf("请输入一个字母：\n");
//  scanf("%c",&ch);
//  if(ch<=90)
//   ch=ch+32;
//  else
//   ch=ch-32;
//  printf("转换结果为：%c\n",ch);
//  getchar();
//  ret++;
// }
// return 0;
//}


//大小写切换代码
//#include<stdio.h>
//
//int main()
//
//{   
//	int a=0;
//	int b=0;
//	while(a<=4)
//	{
//		scanf("%c",&b);
//		if(b<=90)
//			b=b+32;
//		else
//			b=b-32;
//		printf("%c",b);
//	getchar();
//	a++;
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{   
//  printf("
//                ********\n
//               ************\n
//               ####....#.\n
//             #..###.....##....\n
//             ###.......######              ###            ###\n
//                ...........               #...#          #...#\n
//               ##*#######                 #.#.#          #.#.#\n
//            ####*******######             #.#.#          #.#.#\n
//           ...#***.****.*###....          #...#          #...#\n
//           ....**********##.....           ###            ###\n
//           ....****    *****....\n
//             ####        ####\n
//           ######        ######\n
//##############################################################\n
//#...#......#.##...#......#.##...#......#.##------------------#\n
//###########################################------------------#\n
//#..#....#....##..#....#....##..#....#....#####################\n
//##########################################    #----------#\n
//#.....#......##.....#......##.....#......#    #----------#\n
//##########################################    #----------#\n
//#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n
//##########################################    ############");
//  return 0;
//}
//
//
//
//#include<stdio.h>
//int main()
//{   
//  printf("
//                ********\n
//               ************\n
//               ####....#.\n
//             #..###.....##....\n
//             ###.......######              ###            ###\n
//                ...........               #...#          #...#\n
//               ##*#######                 #.#.#          #.#.#\n
//            ####*******######             #.#.#          #.#.#\n
//           ...#***.****.*###....          #...#          #...#\n
//           ....**********##.....           ###            ###\n
//           ....****    *****....\n
//             ####        ####\n
//           ######        ######\n
//##############################################################\n
//#...#......#.##...#......#.##...#......#.##------------------#\n
//###########################################------------------#\n
//#..#....#....##..#....#....##..#....#....#####################\n
//##########################################    #----------#\n
//#.....#......##.....#......##.....#......#    #----------#\n
//##########################################    #----------#\n
//#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n
//##########################################    ############");
//  return 0;
//}
////
//#include<stdio.h>
//
//int main() {
//  printf(
//        "                ********\n"
//        "               ************\n"
//        "               ####....#.\n"
//        "             #..###.....##....\n"
//        "             ###.......######              ###            ###\n"
//        "                ...........               #...#          #...#\n"
//        "               ##*#######                 #.#.#          #.#.#\n"
//        "            ####*******######             #.#.#          #.#.#\n"
//        "           ...#***.****.*###....          #...#          #...#\n"
//        "           ....**********##.....           ###            ###\n"
//        "           ....****    *****....\n"
//        "             ####        ####\n"
//        "           ######        ######\n"
//        "##############################################################\n"
//        "#...#......#.##...#......#.##...#......#.##------------------#\n"
//        "###########################################------------------#\n"
//        "#..#....#....##..#....#....##..#....#....#####################\n"
//        "##########################################    #----------#\n"
//        "#.....#......##.....#......##.....#......#    #----------#\n"
//        "##########################################    #----------#\n"
//        "#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n"
//        "##########################################    ############\n"
//        );
//    return 0;
//}

////
//#include<iostream>
//using namespace std;
//int main() {
//    cout << (
//        "                ********\n"
//        "               ************\n"
//        "               ####....#.\n"
//        "             #..###.....##....\n"
//        "             ###.......######              ###            ###\n"
//        "                ...........               #...#          #...#\n"
//        "               ##*#######                 #.#.#          #.#.#\n"
//        "            ####*******######             #.#.#          #.#.#\n"
//        "           ...#***.****.*###....          #...#          #...#\n"
//        "           ....**********##.....           ###            ###\n"
//        "           ....****    *****....\n"
//        "             ####        ####\n"
//        "           ######        ######\n"
//        "##############################################################\n"
//        "#...#......#.##...#......#.##...#......#.##------------------#\n"
//        "###########################################------------------#\n"
//        "#..#....#....##..#....#....##..#....#....#####################\n"
//        "##########################################    #----------#\n"
//        "#.....#......##.....#......##.....#......#    #----------#\n"
//        "##########################################    #----------#\n"
//        "#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n"
//        "##########################################    ############\n"
//        );
//    return 0;
//}
//
//
//#include<stdio.h>
//
//int main()
//
//{   
//    printf(
////        "***"
////        "****"
////        "*****"
////        "******"
////        "*******");
////    return 0;
////}
//
//
//#include<stdio.h>
//
//int main()
//
//{   
//    printf(
//        "***\n"
//        "****\n"
//        "*****\n"
//        "******\n"
//        "*******");
//    return 0;
//}
////
//#include<stdio.h>
//int main()
//{
//	char ch = '0';
//	scanf("%c", &ch);
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < i + 3; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{   
//    printf("***\n****\n*****\n******\n*******\n");
//	return 0;
//}

//
////网络答案 
//#include<stdio.h>
//int main()
//{
//    int i,j,k;
//    for(i=1;i<=5;i++)
//	{
//        for(j=1;j<=5-i;j++)
//			printf(" ");
//        for(k=1;k<=2*i-1;k++){
//			printf("*"); 
//			printf("\n");
//		}
//    }
//    for(int a=1;a<=5;a++)
//	{
//        for(int b=1;b<=a;b++)
//			printf(" ");
//        for(int c=1;c<=9-2*a;c++)
//			printf("*");
//			printf("\n");
//    } 
//	return 0;
//// } 




//计算标准BMI
//#include<stdio.h>
//int main()
//{
// double h,w;
//printf("输入你的身高(m)\n");
//scanf("%lf",&h);
// w=22.2*h*h;
//printf("你的标准体重应为%lfkg\n",w);
//getchar();
// getchar();
// return 0;
//}




//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main()
//
//{
//	srand((unsigned int)time(NULL));
//	for(int i = 0; i<10; i++)
//	{
//		printf("%d\n", rand());
//	}
//	return 0;
//}

//超大数随机
// 方案一
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main()
//
//{
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d%d\n", rand(), rand());
//	}
//	return 0;
//}


//方案二
//#include<stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include<math.h>
//
//int main()
//
//{
//	int num;
//	int totalNum;
//	srand((unsigned int)(time(NULL)));
//	for (int i = 0; i < 10; i++) 
//	{
//		totalNum = 0;
//		for (int j = 0; j < 6; j++) 
//		{
//			num = rand() % 10;
//			totalNum += num * pow(10, j);
//		}
//		printf("%d\n", totalNum);
//	}
//	return 0;
//}
#pragma once


//预处理
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>

//宏定义
//界面的宽和高
#define WIDTH 40
#define HEIGHT 150


//我的数据
#define ME_BLOOD 80
#define ME_MP 80
#define ME_STRONG 10
#define ME_I 8//8
#define ME_J 9//9
#define ME_FOV 5



//地图的宽和高
#define MAP_I 26
#define MAP_J 26

//背包设计
#define NAMESIZE 20
#define BAGSIZE 100
#define BAG_PAGE_SIZE 10
#define TYPE 4

//函数声明
void gotoxy(int x, int y);
void menu();//主界面菜单（劳俊杰）
void color(int x);
void game();//游戏主体（劳俊杰）
//void gameintroduce();//游戏介绍（劳俊杰）


void gameinit();//游戏的初始化（劳俊杰、林泓安）
void game_mapinit(int map[MAP_I][MAP_J]);//初始化地图，需要加载地图（伍铭俊、骆俊熙）


void game_print(struct roletag* ME, int textmap[MAP_I][MAP_J]);//打印血条和当前角色位置和附近9个格子的场景，需要注意如果碰到墙壁不能穿过墙壁查看（劳俊杰，卢远金）
void game_move(struct roletag* ME, int map[MAP_I][MAP_J]);//读取键盘的设置并修改参数（劳俊杰）
void game_event(struct roletag* ME, int map[MAP_I][MAP_J]);//如果碰到事件则进入事件，事件类型有遭遇怪兽进行对战，遇到宝箱（增加视野、加血、伤害增加），遇到火灼烧HP减少，遇到传送门随机传送，遇到冰位移顺便位移（进一步商量）


//void rolestate_print();//角色状态打印（林泓安）
//void game_eventscene();//打印当前事件的的画面（卢远金）
//void event_explain_print();//进入特定事件输出所需要的特定文本（林泓安、伍铭俊、骆俊熙）


void gameover(struct roletag* ME);//游戏结束（劳俊杰）



void state(int damage1, int negmp1, int damage2, int negmp2);
void attack();
void jiaohu(struct roletag* ME1, int* mondeHP1, int* mondeMP1, int* OKflag1, int bossflag);

void smash();


//背包函数
void Bag_data(void);
void Bag(struct roletag* ME);
void bag_second(int, struct roletag* ME);
void Bag_loading(int, int, int*, int*);
void Bag_printf1(void);
void Bag_printf2(int, int);
void Item_bag_printf(int, int, int);
void Item_description_printf(int, int);
void Item_get(int, int, int, int*, int*);
void Item_get_printf(int, int, int);
void USE_ITEM(int, int*, int*, int, int, struct roletag* ME);
void Item_use(int, struct roletag* ME);
void ITEMUSE1(int*);

//void NAME(int*);			//角色名改变
//void rolestate_print(struct roletag* ME);	//角色状态打印（不完整）
void boundary_printf(int);	//上/下分界线
void Clear_screen(struct roletag* ME);

void Text(int x, struct roletag* ME);
void rolestate_print_minjun(struct roletag* ME);




int main()

{
	system("mode con lines=40 cols=170");//40  150
	SetConsoleTitle("大冒险");
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//隐藏光标
	menu();
	while (1)
	{
		//char key = _getch();
		//switch (key)
		//{
		//case :
		//	game();
		//	break;
		//case 0x62:
		//	gameintroduce();
		//	break;
		//case 0x60:
		//	return 0;
		//	break;
		//default:
		//	printf("选择错误，请重新选择");
		//	break;
		//}
		if (GetAsyncKeyState(0x61) || GetAsyncKeyState(VK_SPACE))
		{
			game();
			break;
		}
		if (GetAsyncKeyState(0x60) || GetAsyncKeyState('0'))
		{
			break;
		}
	}
	return 0;
}





char Your_Name[10];
int FHP = 100, FMP = 10;
//背包相关全局变量及其初始化
int BAG[TYPE][BAGSIZE] = { 0 }, BAG_amount[TYPE][BAGSIZE] = { 0 };
int A[TYPE][BAG_PAGE_SIZE] = { 0 }, B[TYPE][BAG_PAGE_SIZE] = { 0 };
char item[TYPE][BAGSIZE][50];
char item_description[TYPE][BAGSIZE][100];

typedef struct roletag
{
	//char name[20];
	int blood;//血量
	int Mp;
	int strong;
	int rolei;
	int rolej;//坐标
	int FOV;//视野范围,初始化为3，意思是能看见3*3范围的视野
	int fool1, fool2, fool3, fool4;
	int aoding; int winflag;
}role;


enum EVENT
{
	NOTHING = 0,//无事发生
	MONSTER = 3,//怪物
	BLOODCOME = 4,//血泉
	TREASURE = 5,//宝箱
	FIRE = 6,//火
	F1 = 7,//特殊事件1--
	F2 = 8,//特殊事件2--
	F3 = 9,//特殊事件3--
	F4 = 10,//特殊事件4--
	BOSS = 11//BOSS
};

enum text
{
	START = 100,//故事开端
	NAME,//输入名字后的文本


	text1,//路线上第一个黄方
	text2,//白色区域旁边的黄方
	//F1=7,//黄圈
	text3 = 105,//路线上第二个黄方
	//F2=8,//蓝圈
	text4 = 107,//地图右下角不在路线上的黄方(在触发EXPECIAL_EVENT1之前无法触发)
	text5,//打完小boss后的黄方
	//F3=9,//红圈(打完小boss后才能触发)
	text6 = 110,//最后一个黄方
	//F4=10,//绿圈


	END1 = 111,//战胜boss，但未触发text4
	END2,//触发text4后，战胜boss，但未触发EXPECIAL_EVENT1、2、3、4
	END3,//触发text4，触发EXPECIAL_EVENT1、2、3、4后，战胜boss
	END3_F,//触发END3，选择听从奥丁
	TE//触发END3，选择违逆奥丁
};


void gotoxy(int x, int y)//x为列坐标,y为行坐标
{
	COORD pos = { x,y };
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}


void color(int x)
{
	if (x >= 0 && x <= 15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x); //
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //7为默认白色
	//0 = 黑色
//1 = 蓝色
//2 = 绿色
//3 = 湖蓝色
//4 = 红色
//5 = 紫色
//6 = 黄色
//7 = 白色
//8 = 灰色
//9 = 淡蓝色
//10 = 淡绿色
//11 = 淡浅绿色
//12 = 淡红色
//13 = 淡紫色
//14 = 淡黄色
//15 = 亮白色
}




void menu()
{
	gotoxy(58, 15); color(12);
	printf("**********************************\n");
	gotoxy(58, 16);
	printf("**********按空格开始游戏**********\n");
	gotoxy(58, 17);
	printf("**********************************\n");
	gotoxy(58, 18);
	printf("************0.退出游戏************\n");
	gotoxy(58, 19);
	printf("**********************************\n");
}


void gameintroduce()
{
	printf("游戏介绍");
}


void game()
{
	//gameinit();//初始化角色位置并初始化各个参数
	system("cls");
	color(15);

	role me = { ME_BLOOD, ME_MP, ME_STRONG, ME_I, ME_J ,ME_FOV , 1,1,1,1,1,1 };//初始化我的数据
	//	int map[MAP_I][MAP_J] = {
	//1,1,1,1,1,1,1,1,1,1,
	//1,0,0,0,0,0,0,0,0,1,
	//1,0,0,0,0,0,0,0,0,1,
	//1,0,0,0,0,0,0,0,0,1,
	//1,0,0,0,0,0,0,0,0,1,
	//1,0,0,0,0,0,0,0,0,1,
	//1,0,0,0,0,0,0,0,0,1,
	//1,0,0,0,0,0,3,0,0,1,
	//1,0,0,0,0,0,0,0,0,1,
	//1,1,1,1,1,1,1,1,1,1
	//	};//加载地图
		//int map[MAP_I][MAP_J] = {
		//	 {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		//	 {1,5,1,0,0,0,0,0,0,3,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1},
		//	 {1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,0,0,0,1},
		//	 {1,0,1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1},
		//	 {1,0,1,0,1,0,1,1,1,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
		//	 {1,0,1,5,1,0,0,0,1,0,0,0,0,1,0,1,0,1,0,1,1,1,0,1,0,1},
		//	 {1,0,1,1,1,1,1,0,1,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1},
		//	 {1,0,0,0,0,0,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,1,0,1,0,1},
		//	 {1,1,1,0,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1},
		//	 {1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,1},
		//	 {1,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,0,1,1,1},
		//	 {1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,1,0,1,0,1},
		//	 {1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,1},
		//	 {1,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1,0,1,1,1,0,1,0,1,0,1},
		//	 {1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,1,1,1,0,1,0,1,0,1,0,1},
		//	 {1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1,0,1,0,1,0,1,0,1},
		//	 {1,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1},
		//	 {1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1},
		//	 {1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
		//	 {1,0,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1},
		//	 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1},
		//	 {1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1,1,1,0,1},
		//	 {1,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,0,1,0,1},
		//	 {1,0,1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,1,1,1,0,1,1,1,0,1},
		//	 {1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1},
		//	 {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}
		//};
	int map[26][26] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, F1, 1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1},
	{1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
	{1, 0, 1, 5, 1, 0, 0, 0, 1, 0, 0, 0, text1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
	{1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1},
	{1, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1},
	{1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, text2, 0, 0, 0, 1, 0, 1, 1, 1 },
	{1, 5, 1, 0, 1, 5, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, BLOODCOME, 1},
	{1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, text4, 1, text5, 0, 0, 0, 1, 5, 1, 0, 1, 0, 1, 1, 1},
	{1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, F4, 1},
	{1, 0, 0, text2, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
	{1, 0, 1, 1, 1, 3, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1},
	{1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
	{1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 5, 1, 0, 1, 0, 1, 0, 1, 0, 1},
	{1, 5, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, 1, 0, 1, 0, 0, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1},
	{1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, text6, 1, 0, 0, 0, 3, 5, 1},
	{1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1},
	{1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, 1, 0, F3, 1, 0, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1},
	{1, 0, 0, 3, 1, 0, 0, 0, 0, 0, 0, F2, 1, 0, 0, 0, 3, 5, 1, 0, 3, 1, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, BOSS, 1, 1, 1}
	};

	//int map[MAP_I][MAP_J] = {
	// {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	// {1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1},
	// {1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,0,0,0,1},
	// {1,0,1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1},
	// {1,0,1,0,1,0,1,1,1,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
	// {1,0,1,0,1,0,0,0,1,0,0,0,0,1,0,1,0,1,0,1,1,1,0,1,0,1},
	// {1,0,1,1,1,1,1,0,1,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1},
	// {1,0,0,0,0,0,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,1,0,1,0,1},
	// {1,1,1,0,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1},
	// {1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,1},
	// {1,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,0,1,1,1},
	// {1,0,1,0,1,0,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,1,0,1,0,1},
	// {1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,1},
	// {1,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1,0,1,1,1,0,1,0,1,0,1},
	// {1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,1,1,1,0,1,0,1,0,1,0,1},
	// {1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1,0,1,0,1,0,1,0,1},
	// {1,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1},
	// {1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1},
	// {1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
	// {1,0,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1},
	// {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1},
	// {1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1,1,1,0,1},
	// {1,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,0,1,0,1},
	// {1,0,1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,1,1,1,0,1,1,1,0,1},
	// {1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1},
	// {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1}
	//};
	int ori = 0, orj = 0;
	me.winflag = 0; me.aoding = 1;
	char ORDER;
	Bag_data();
	//Item_get(0, 1, 1, BAG[0], BAG_amount[0]);
	Text(START, &me);

	srand((unsigned int)time(NULL));//时间种子
	while (1)
	{
		//rolestateprint();
		game_print(&me, map);//当前角色位置和附近9个格子的场景，需要注意如果碰到墙壁不能穿过墙壁查看
		ori = me.rolei;
		orj = me.rolej;
		game_move(&me, map);//读取键盘的设置并修改参数
		game_event(&me, map, ori, orj);//如果碰到事件则进入事件，事件类型有遭遇怪兽进行对战，遇到宝箱（增加视野、加血、伤害增加），遇到火灼烧HP减少，遇到传送门随机传送，遇到冰位移顺便位移
		//判断是否跳出循环（血量为0或者到达终点则跳出循环）
		if (me.blood <= 0) break;
		if (me.winflag == 1)
		{
			break;
		}
		Sleep(10);//防止画面模糊,需要放在systemcls前面
		system("cls");//清除画面
	}
	gameover(&me);//判断通关条件或失败条件并进行游戏结算
	system("cls");
}


//void gameinit()
//{
//	system("cls");
//	printf("游戏初始化\n");
//	role me = { "♂", ME_BLOOD, ME_I, ME_J ,ME_FOV };//初始化我的数据
//	game_mapinit();//初始化地图，需要加载地图
//}


void game_print(struct roletag* ME, int textmap[MAP_I][MAP_J])
{
	//rolestate_print();//打印角色的所有状态包括血量和蓝条、视野状态等，在左上角打印
	//为地图附上全图视野盲区
	int outmap[MAP_I + 2][MAP_J + 2];
	//int len = strlen(outmap);
	//memset(outmap, 1, len);
	int i = 0, j = 0;
	for (i = 0; i < MAP_I + 2; i++)
	{
		for (j = 0; j < MAP_J + 2; j++)
		{
			outmap[i][j] = 6;
		}
	}
	for (i = 1; i < MAP_I + 1; i++)
	{
		for (j = 1; j < MAP_J + 1; j++)
		{
			outmap[i][j] = 0;
		}
	}
	//为角色周围地图打开盲区
	int feedli = 0, feedlj = 0, feedri = 0, feedrj = 0;
	if (ME->rolei - ME->FOV / 2 <= 0)
	{
		feedli = -(ME->rolei - ME->FOV / 2);
	}
	if (ME->rolej - ME->FOV / 2 <= 0)
	{
		feedlj = -(ME->rolej - ME->FOV / 2);
	}
	if (ME->rolei + ME->FOV / 2 >= MAP_I)
	{
		feedri = -(MAP_I - ME->rolei - ME->FOV / 2 + ME->FOV - 4);
	}
	if (ME->rolej + ME->FOV / 2 >= MAP_J)
	{
		feedrj = -(MAP_J - ME->rolej - ME->FOV / 2 + ME->FOV - 4);
	}
	for (i = ME->rolei - ME->FOV / 2 + feedli; i < ((ME->rolei - ME->FOV / 2) + ME->FOV) + feedri; i++)
	{
		for (j = ME->rolej - ME->FOV / 2 + feedlj; j < ((ME->rolej - ME->FOV / 2) + ME->FOV) + feedrj; j++)
		{
			//if (i <= 0)i = 0;
			//if (j <= 0)j = 0;
			//smash(ME);
			outmap[i + 1][j + 1] = textmap[i][j];//此处还需要注意两个问题，碰撞问题还有控制台的边界问题
		}
	}
	outmap[ME->rolei + 1][ME->rolej + 1] = 2;
	//开始打印最新地图
	for (i = 0; i < MAP_I + 2; i++)
	{
		for (j = 0; j < MAP_J + 2; j++)
		{
			switch (outmap[i][j])
			{
			case 0:
				printf("  "); //0代表空地
				break;
			case 1:
				printf("■"); //1代表墙体
				break;
			case 2:
				printf("♀"); //2代表玩家(人)
				break;
			case 3:
				printf("◆"); //3代表怪物
				break;
			case 4:
				printf("●"); //4代表血泉
				break;
			case 5:
				printf("★"); //5代表宝箱
				break;
			case 6:
				printf("##"); //外围
				break;
			default:
				printf("  ");
				break;
			}
		}
		printf("\n");
	}


	printf("\n\n");
	printf("WASD控制移动，B查看状态和背包，■是墙体，你无法通过  ◆代表怪物  ●代表血泉(整个地图只有一处)  ★代表宝箱(可以获得增幅)\n\n");
}


void game_event(struct roletag* ME, int map[MAP_I][MAP_J], int ORI, int ORJ)
{
	Text(map[ME->rolei][ME->rolej], ME);
	switch (map[ME->rolei][ME->rolej])
	{
	case NOTHING:
		return;
		break;
	case MONSTER:
	{
		int OKflag = 0;//判断是否跳出事件
		int mondeHP = 0;
		int mondeMP = 0;
		while (1)
		{
			system("cls");
			state(ME_BLOOD - ME->blood, ME_MP - ME->Mp, mondeHP, mondeMP);
			attack();
			jiaohu(ME, &mondeHP, &mondeMP, &OKflag, 0);
			if (OKflag == 1)   break;
			if (mondeHP >= 80)
			{
				ME->strong += 10;
				break;
			}
			if (ME->blood <= 0) break;
		}

		//event_explain_print();//进入特定事件输出所需要的特定文本
		/*ME->blood = HP - ME->blood;*/
		if (mondeHP >= 80) map[ME->rolei][ME->rolej] = 0;//怪物被杀死
		if (OKflag == 1)
		{
			ME->rolei = ORI;
			ME->rolej = ORJ;
		}//防止一直进入怪物事件
		/*if (ME->blood <= 0) *///让自己的血量不至于

		color(15);//恢复地图颜色
		break;
	}
	case BLOODCOME:
		ME->blood = 80;
		break;
	case TREASURE:
		//宝箱文本：
		printf("选择你的增幅\n");
		printf("1.获得视野增加（上限为7）\n");
		printf("2.MP恢复\n");
		printf("3.HP恢复\n");
		printf("4.攻击力增加\n");
		printf("按回车确定增幅\n");
		int a = 0;
		while (_kbhit())//清除因为移动产生的键盘输入
		{
			_getch();
		}
		while (1)
		{
			scanf("%d", &a);
			switch (a)
			{
			case 1:
				if (ME->FOV == 5)
				{
					printf("获得视野增加");
					printf("\n");
					system("pause");
					ME->FOV = 7;
					map[ME->rolei][ME->rolej] = 0;
				}
				break;
			case 2:
				if (ME->Mp != 80)
				{
					printf("MP恢复成80");
					printf("\n");
					system("pause");
					ME->Mp = 80;
					map[ME->rolei][ME->rolej] = 0;
				}
				else
				{
					printf("MP强化最高限制240");
					printf("\n");
					system("pause");
					ME->Mp = 240;
					map[ME->rolei][ME->rolej] = 0;
				}
				break;
			case 3:
				if (ME->blood != 80)
				{
					printf("HP恢复成80");
					printf("\n");
					system("pause");
					ME->blood = 80;
					map[ME->rolei][ME->rolej] = 0;
				}
				else
				{
					printf("MP强化最高限制320");
					printf("\n");
					system("pause");
					ME->blood = 320;
					map[ME->rolei][ME->rolej] = 0;
				}
				break;
			case 4:
				printf("攻击力增加");
				printf("\n");
				system("pause");
				ME->strong += 10;
				map[ME->rolei][ME->rolej] = 0;
			}
			break;
		}
		break;
	case FIRE:
	{
		int i = 0;
		for (i = 5; i >= 0; --i)
		{
			ME->blood -= 2;
			printf("你收到了灼伤伤害，血量-2");
		}
		break;
	}
	case F1:
	{
		//事件一文本
		if (ME->fool1 == 0)//道具一的位置
		{
			ME->fool1 = 1;
		}
		break;
	}
	case F2:
	{
		//事件二文本
		if (ME->fool2 == 0)//道具二的位置
		{
			ME->fool2 = 1;
		}
		break;
	}
	case F3:
	{	//道具三文本
		if (ME->fool3 == 0)//道具三的位置
		{
			ME->fool3 = 1;
		}
		break;
	}
	case F4:
	{	//事件四文本
		if (ME->fool4 == 0)//道具四的位置
		{
			ME->fool4 = 1;
		}
		break;
	}
	case BOSS:
	{
		printf("即将进入BOSS关，无法逃跑，是否进入？\n");
		printf("输入Y进入N再探索一下\n");
		while (_kbhit())
		{
			_getch();
		}
		char ch;
		do
		{
			scanf("%c", &ch);
			while (_kbhit())
			{
				_getch();
			}
			switch (ch)
			{
			case 'Y':
			case 'y':
			{
				int OKflag = 0;//判断是否跳出事件
				int mondeHP = 0;
				int mondeMP = 0;
				while (1)
				{
					system("cls");
					state(ME_BLOOD - ME->blood, ME_MP - ME->Mp, mondeHP, mondeMP);
					attack();
					jiaohu(ME, &mondeHP, &mondeMP, &OKflag, 1);
					if (OKflag == 1)   break;
					if (mondeHP >= 80)
					{
						ME->strong += 100;
						break;
					}
					if (ME->blood <= 0) break;
				}

				//event_explain_print();//进入特定事件输出所需要的特定文本
				/*ME->blood = HP - ME->blood;*/
				if (mondeHP >= 80) map[ME->rolei][ME->rolej] = 0;//怪物被杀死
				if (OKflag == 1) ME->rolei += 1;//防止一直进入怪物事件
				/*if (ME->blood <= 0) *///让自己的血量不至于
				ME->winflag = 1;
				color(15);//恢复地图颜色
				return;
				break;
			}
			case 'N':
			case 'n':
				ME->rolei = ORI;
				ME->rolej = ORJ;
				return;
				break;
			default:
				printf("只可以选择Y或N噢\n");
				break;
			}
		} while (ch);
	}
	default: break;
	}

}



void game_move(struct roletag* ME, int map[MAP_I][MAP_J])
{
	if (GetAsyncKeyState('W') && map[ME->rolei - 1][ME->rolej] != 1)
	{
		ME->rolei -= 1;
	}
	if (GetAsyncKeyState('S') && map[ME->rolei + 1][ME->rolej] != 1)
	{
		ME->rolei += 1;
	}
	if (GetAsyncKeyState('A') && map[ME->rolei][ME->rolej - 1] != 1)
	{
		ME->rolej -= 1;
	}
	if (GetAsyncKeyState('D') && map[ME->rolei][ME->rolej + 1] != 1)
	{
		ME->rolej += 1;
	}
	if (GetAsyncKeyState('B'))
	{
		Bag(ME);
	}
}


void gameover(role* ME)
{
	system("cls");
	printf("游戏结束，进入游戏结算，返回主界面\n");
	HWND hnd = NULL;

	int a = 0; int b = 0;
	while (_kbhit())
	{
		_getch();
	}
	if (ME->winflag == 1 && ME->aoding == 1)
	{
		/*int isok = MessageBox(hnd, "完美结局", "游戏结算", MB_OK);*/
		if (ME->fool1 == 1 && ME->fool2 == 1 && ME->fool3 == 1 && ME->fool4 == 1)
		{
			Text(END3, ME);
			printf("听从奥丁选Y,拒绝奥丁选N\n");
			char OP;
			while (1)
			{
				scanf("%c", &OP);
				switch (OP)
				{
				case 'N':
					Text(TE, ME);
					while (_kbhit())
					{
						_getch();
					}
					b = 1;
					break;
				case 'Y':
					Text(END3_F, ME);
					while (_kbhit())
					{
						_getch();
					}
					break;
				default:
					printf("只能选Y听从N拒绝噢\n");
					while (_kbhit())
					{
						_getch();
					}
					continue;
					break;
				}
				break;
			}
		}
		if (!(ME->fool1 == 1 && ME->fool2 == 1 && ME->fool3 == 1 && ME->fool4 == 1)) { Text(END2, ME); }
		a = 1;
	}
	if (ME->winflag == 1 && ME->aoding == 0)
	{
		/*int isok = MessageBox(hnd, "赢了", "游戏结算", MB_OK);*/
		Text(END1, ME); a = 1;
	}
	if (ME->winflag == 0)
	{
		/*int isok = MessageBox(hnd, "输了", "游戏结算", MB_OK);*/
		printf("游戏失败"); a = 1;
	}
	gotoxy(68, 27);
	if(b==0) printf("这就结束了吗？");
	gotoxy(68, 28);
	system("pause");
	if (a == 1)
	{
		int isok2 = MessageBox(NULL, "要重新来一次吗？", "选择", MB_OKCANCEL);
		if (isok2 == 1)
		{
			game();
		}
		else
		{
			int isok1 = MessageBox(NULL, "制作名单:\n劳俊杰\n卢远金\n伍铭俊\n林泓安\n骆俊熙\n\n祝你游戏愉快", "游戏制作名单", MB_OK);
		}
	}
}


void state(int damage1, int negmp1, int damage2, int negmp2)
{
	char hp[171] = "HP ";
	if (damage1 < 0)
	{
		for (int i = 3; i < 170; i++)
		{
			if (i < 83)
			{
				hp[i] = '#';
			}
			if (i >= 83 && i <= (86 + damage2))
			{
				hp[i] = ' ';
			}
			if (i > (86 + damage2) && i < 167)
			{
				hp[i] = '#';
			}
		}
	}
	if (damage2 < 0)
		for (int i = 3; i < 170; i++)
		{
			if (i < (83 - damage1))
			{
				hp[i] = '#';
			}
			if (i >= 83 - damage1 && i <= 86)
			{
				hp[i] = ' ';
			}
			if (i > 86 && i < 167)
			{
				hp[i] = '#';
			}
		}
	if (damage1 >= 0 && damage2 >= 0)
	{
		for (int i = 3; i < 170; i++)
		{
			if (i < (83 - damage1))
			{
				hp[i] = '#';
			}
			if (i >= 83 - damage1 && i <= (86 + damage2))
			{
				hp[i] = ' ';
			}
			if (i > (86 + damage2) && i < 167)
			{
				hp[i] = '#';
			}
		}
	}
	hp[167] = ' ';
	hp[168] = 'H';
	hp[169] = 'P';
	hp[170] = '\0';
	color(4);
	printf("%s\n", hp);
	char mp[171] = "MP ";
	if (negmp2 < 0)
	{
		for (int i = 3; i < 170; i++)
		{
			if (i < (83 - negmp1))
			{
				if (i < 83)
				{
					mp[i] = '#';
				}
			}
			if (i >= 83 - negmp1 && i <= 86)
			{
				mp[i] = ' ';
			}
			if (i > 86 && i < 167)
			{
				mp[i] = '#';
			}
		}

	}
	if (negmp1 < 0)
	{
		for (int i = 3; i < 170; i++)
		{
			if (i < 83)
			{
				if (i < 83)
				{
					mp[i] = '#';
				}
			}
			if (i >= 83 && i <= (86 + negmp2))
			{
				mp[i] = ' ';
			}
			if (i > (86 + negmp2) && i < 167)
			{
				mp[i] = '#';
			}
		}
	}
	if (negmp1 >= 0 && negmp2 >= 0)
	{
		for (int i = 3; i < 170; i++)
		{
			if (i < (83 - negmp1))
			{
				if (i < 83)
				{
					mp[i] = '#';
				}
			}
			if (i >= 83 - negmp1 && i <= (86 + negmp2))
			{
				mp[i] = ' ';
			}
			if (i > (86 + negmp2) && i < 167)
			{
				mp[i] = '#';
			}
		}
	}

	mp[167] = ' ';
	mp[168] = 'M';
	mp[169] = 'P';
	mp[170] = '\0';
	color(9);
	printf("%s\n", mp);
}
void attack()
{
	color(7);
	printf("                                                      F                                                                       &3z &   \n");
	printf("                                                     J    JF                                                         .n$@@#$&@    #\n");
	printf("                                                    FJ   <JF                                                     .#&       3~     & #@\n");
	printf("                                                    J<  <JF9                                               #  &8            $; a!  . .@v\n");
	printf("                                                      J  <<JF                                             i +1 .                    o; .@v\n");
	printf("                                                   JJ   J  <J                                             -#@    $+<>@@ &^              u.%#.\n");
	printf("                                                  JrJ  J   <JF                                           +#   ;~.        !-               .#^ \n");
	printf("                                                  <<<jjjjj<JJ                                        - ^8   @             @                 ^.#\n");
	printf("                                               J   J  JJ   <<JF                                        @-@   &z@@@@@~     n.                 &\n");
	printf("                                               JJJ  < JJ    <JJ                                      n@^.-@ ^@@@@@@@z    **                 i\n");
	printf("             @@                                      J J  <  <                                          &i u !@@@@@@@    $                   #\n");
	printf("          @     @@                             J  J9J      <<JF                                         . @o  n##@@#&    i.        ~          @\n");
	printf("         @         @                           J  JJJ     <<<rF                                            @    6@i.   o$                    .#\n");
	printf("         @         @                     JJ   J         <<<<JF                                              @                        +         1\n");
	printf("            @    @                       J JFJ<         <<<<JF                                             @    @@##$%%^.                       1o\n");
	printf("           @@   @@                       J  J<        <<<<<<J9                                  j@#$%^&@@@.@@@#$$@#@@3#!@@@@@@#              8.\n");
	printf("          @@    @   @                    JJ           <<<<<<JJ                               <<<<<<<#@!#@#@*@# @@#2@@#4~%% !.*!              @.\n");
	printf("          @     @     @                    J           <<<<<J                                   ~@!###@$!@###1@%@@@@##&&3+@!%@@@    @#<     & - &.\n");
	printf("            @   @      @                   J           <<<<<J                                              !@3     . a@i              8@     v@+\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< <<   <<<rJF<<<<                                                  !i&         $#            !i       #\n");
	printf("              @       @                 J   <<<<<<<<<<JJjj                                                   ;$       .7o              ;$     .8o\n");
	printf("             @          @               J  <<<<<<<<rJJJ                                                      8@     . a@i              8@     v@+ \n");
	printf("           @              @            J< <<rJJJrJJJF                                                         8@     v@+               8@     v@+\n");
	printf("                                                                                                                 l_j                      l_j   \n");
}


void jiaohu(struct roletag* ME1, int* mondeHP1, int* mondeMP1, int* OKflag1, int bossflag)
{
	int step = 3; int strong = 0;

	if (ME1->fool1 == 1)
	{
		strong = ME1->strong + 10;//加伤害
	}
	if (ME1->fool3 == 1)//加蓝条
	{
		ME1->Mp = 160;
	}
	else strong = ME1->strong;//没道具就初始化攻击力为10


	if (step % 2 == 1)//玩家先走
	{
		//情况描述
		color(12);
		if (bossflag == 1)
		{
			printf("最终决战\n");
		}
		printf("按J/1使用普攻\n按K/2双击\n");
		if (bossflag == 0)
		{
			printf("按L/0逃跑\n");
		}

		//printf("%d\n", *mondeHP1);//解引用
		char ch = _getch();
		if (ch == '1' || ch == 'J' || ch == 'j')
		{
			printf("你使用了普攻，对怪物造成%d点伤害", ME1->strong);
			Sleep(500);
			*mondeHP1 += strong;
			step++;
		}
		else if (ch == '2' || ch == 'K' || ch == 'k')
		{
			if (ME1->Mp < 20)
			{
				printf("没有蓝了");
			}
			if (ME1->Mp >= 20)
			{
				int a = rand() % 2;
				if (a == 0)
				{
					printf("对方闪避了你的攻击");
				}
				if (a == 1)
				{
					printf("你使用了普攻，对怪物造成%d点伤害,效果拔群", 2 * ME1->strong);
					*mondeHP1 += 2 * strong;
				}
				if (a == 2)
				{
					printf("你使用了吸血攻击，恢复一定血量");
					*mondeHP1 += strong / 2;
					ME1->blood += strong / 2;
				}
				ME1->Mp -= 20;
				step++;
			}
			Sleep(500);
		}
		else if ((ch == '0' || ch == 'L' || ch == 'l') && bossflag == 0)
		{
			printf("打不过\n润了润了");
			Sleep(500);
			*OKflag1 = 1;
			return;
		}
	}


	printf("\n\n\n\n");
	//怪兽模块
	if (bossflag == 0)
	{
		if (step % 2 == 0)//怪物走
		{
			int monrand;
			if (ME1->fool4 == 1) monrand = rand() % 4;//道具4能使我闪避怪物的攻击
			else monrand = rand() % 3;
			if (monrand == 0)
			{
				printf("怪物攻击了你，造成%d伤害", ME1->fool2 ? 10 : 5);
				if (ME1->fool2 == 0) ME1->blood -= 10;
				else ME1->blood -= 5;
			}
			if (monrand == 1)
			{
				printf("怪物痛击了你，造成%d点伤害", ME1->fool2 ? 20 : 10);
				if (ME1->fool2 == 0) ME1->blood -= 20;
				else ME1->blood -= 10;
			}
			if (monrand == 2)
			{
				printf("怪物吸了你的血，造成5点伤害并回血");
				ME1->blood -= 5;
				*mondeHP1 -= 5;
			}
			if (monrand == 3)
			{
				printf("怪物攻击了你，但你灵敏躲开了");
			}
			Sleep(500);
		}
	}
	if (bossflag == 1)
	{
		if (step % 2 == 0)//怪物走
		{
			int monrand;
			if (ME1->fool4 == 1) monrand = rand() % 4;//道具4能使我闪避怪物的攻击
			else monrand = rand() % 3;
			if (monrand == 0)
			{
				printf("怪物攻击了你，造成%d伤害", ME1->fool2 ? 15 : 10);
				if (ME1->fool2 == 0) ME1->blood -= 15;
				else ME1->blood -= 10;
			}
			if (monrand == 1)
			{
				printf("怪物痛击了你，造成%d点伤害", ME1->fool2 ? 25 : 15);
				if (ME1->fool2 == 0) ME1->blood -= 25;
				else ME1->blood -= 15;
			}
			if (monrand == 2)
			{
				printf("怪物吸了你的血，造成10点伤害并回血");
				ME1->blood -= 10;
				*mondeHP1 -= 10;
			}
			if (monrand == 3)
			{
				printf("怪物攻击了你，但你灵敏躲开了");
			}
			Sleep(500);
		}
	}

	return;
}

void smash(struct roletag* ME)
{
	if (ME->rolei <= 0)
	{
		ME->rolei = 0;
	}
	if (ME->rolej <= 0)
	{
		ME->rolej = 0;
	}
}



//背包数据初始化（放在主函数开头）
void Bag_data(void)
{

	strcpy(item[0][1], "[注射器]");

	strcpy(item_description[0][1], "使角色回复20点HP。");
}

//背包第一界面
void Bag(struct roletag* ME)
{
	char order1 = -1;

	Clear_screen(ME);
	Bag_printf1();
	printf("\n");
	for (;;)
	{
		order1 = _getch();
		if (order1 == 'x' || order1 == 'X')
			return;
		else
			switch (order1)
			{
			case '0':
				bag_second(0, ME);
				break;
			case '1':
				bag_second(1, ME);
				break;
			case '2':
				bag_second(2, ME);
				break;
			case '3':
				bag_second(3, ME);
				break;
			}
	}
}

//背包第二界面
void bag_second(int type, struct roletag* ME)
{
	int Bag_page = 1;
	char order2 = -1;

	Bag_loading(type, Bag_page, A[type], B[type]);
	Clear_screen(ME);
	Bag_printf2(type, Bag_page);
	printf("\n");
	for (;;)
	{
		order2 = _getch();
		if (order2 == 'x' || order2 == 'X')
		{
			Clear_screen(ME);
			Bag_printf1();
			return;
		}
		else if (order2 == 'z' || order2 == 'Z' && Bag_page > 1)
		{
			Bag_page--;
			Bag_loading(type, Bag_page, A[type], B[type]);
			Clear_screen(ME);
			Bag_printf2(type, Bag_page);
		}
		else if (order2 == 'c' || order2 == 'C' && Bag_page < BAG_PAGE_SIZE)
		{
			Bag_page++;
			Bag_loading(type, Bag_page, A[type], B[type]);
			Clear_screen(ME);
			Bag_printf2(type, Bag_page);
		}
		else
			switch (order2)
			{
			case '0':
				USE_ITEM(type, &BAG[type][A[type][0]], &BAG_amount[type][B[type][0]], A[type][0], B[type][0], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			case '1':
				USE_ITEM(type, &BAG[type][A[type][1]], &BAG_amount[type][B[type][1]], A[type][1], B[type][1], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			case '2':
				USE_ITEM(type, &BAG[type][A[type][2]], &BAG_amount[type][B[type][2]], A[type][2], B[type][2], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			case '3':
				USE_ITEM(type, &BAG[type][A[type][3]], &BAG_amount[type][B[type][3]], A[type][3], B[type][3], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			case '4':
				USE_ITEM(type, &BAG[type][A[type][4]], &BAG_amount[type][B[type][4]], A[type][4], B[type][4], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			case '5':
				USE_ITEM(type, &BAG[type][A[type][5]], &BAG_amount[type][B[type][5]], A[type][5], B[type][5], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			case '6':
				USE_ITEM(type, &BAG[type][A[type][6]], &BAG_amount[type][B[type][6]], A[type][6], B[type][6], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			case '7':
				USE_ITEM(type, &BAG[type][A[type][7]], &BAG_amount[type][B[type][7]], A[type][7], B[type][7], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			case '8':
				USE_ITEM(type, &BAG[type][A[type][8]], &BAG_amount[type][B[type][8]], A[type][8], B[type][8], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			case '9':
				USE_ITEM(type, &BAG[type][A[type][9]], &BAG_amount[type][B[type][9]], A[type][9], B[type][9], ME);
				Bag_loading(type, Bag_page, A[type], B[type]);
				Clear_screen(ME);
				Bag_printf2(type, Bag_page);
				break;
			}
	}
}


//背包第一界面打印
void Bag_printf1(void)
{
	boundary_printf(0);
	printf("\n[0]消耗道具\n[1]装备\n[2]素材\n[3]重要物品\n");
	printf("[x]关闭\n");
	boundary_printf(1);
}

//背包第二界面打印
void Bag_printf2(int type, int page)
{
	boundary_printf(0);

	printf("\n物品种类:");
	switch (type)
	{
	case 0:
		printf("消耗道具\n");
		break;
	case 1:
		printf("装备\n");
		break;
	case 2:
		printf("素材\n");
		break;
	case 3:
		printf("重要物品\n");
		break;
	}
	for (int i = 0; i < BAG_PAGE_SIZE; i++)
	{
		printf("[%d]", i);
		Item_bag_printf(type, A[type][i], B[type][i]);
		if (i % 2 == 1)
			printf("\n");
	}

	printf("页数 %d/10  [z]上一页   [c]下一页   [x]返回上一级", page);

	boundary_printf(1);
}

//背包第二界面中物品相关打印
void Item_bag_printf(int type, int x, int y)
{
	printf("%-14s%3d  ", item[type][x], y);
}

//物品描述打印
void Item_description_printf(int type, int x)
{
	printf("%s\n", item_description[type][x]);
}

//刷新背包状态的函数
void Bag_loading(int type, int page, int* A, int* B)
{
	for (int i = 0; i <= BAG_PAGE_SIZE; i++)
	{
		A += i;
		*A = BAG[type][(page - 1) * 10 + i];
		B += i;
		*B = BAG_amount[type][(page - 1) * 10 + i];
	}
}

//物品获取
void Item_get(int type, int x, int y, int* X, int* Y)
{
	for (int i = 0; i < BAGSIZE; i++)
		if (x == BAG[type][i])
		{
			Y += i;
			*Y += y;
			Item_get_printf(type, x, y);
			if (BAG_amount[type][i] == 0)
			{
				X += i;
				*X = -1;
			}
			Item_get_printf(type, x, y);
			return;
		}
	for (int i = 0; i < BAGSIZE; i++)
	{
		if (BAG[type][i] == 0)
		{
			X += i;
			*X = x;
			Y += i;
			*Y += y;
			Item_get_printf(type, x, y);
			return;
		}
	}
}

//物品获取时的信息打印
void Item_get_printf(int type, int x, int y)
{
	color(15);
	if (y > 0)
		printf("获得了");
	else
		printf("失去了");
	puts(item[type][x]);
	printf("* %d\n", abs(y));
	color(7);
}

//进入背包中物品使用时界面的函数
void USE_ITEM(int type, int* x, int* y, int X, int Y, struct roletag* ME)
{
	char order3 = -1;

	if (type == 0 && Y != 0)
	{
		boundary_printf(0);
		printf("\n");
		puts(item[type][X]);
		Item_description_printf(type, X);
		printf("[z]使用  /  [x]取消");
		boundary_printf(1);
	}
	else if (Y != 0)
	{
		boundary_printf(0);
		printf("\n");
		puts(item[type][X]);
		Item_description_printf(type, X);
		printf("[x]关闭");
		boundary_printf(1);
	}
	else
		return;

	for (;;)
	{
		order3 = _getch();
		if (order3 == 'x' || order3 == 'X')
			return;
		else if (order3 == 'z' || order3 == 'Z')
		{
			y -= 1;
			*y -= 1;
			Item_use(X, ME);
			if (*y == 0)
				x -= 1;
			*x = 0;
			return;
		}
	}
}

//消耗物品时的函数
void Item_use(int x, struct roletag* ME)
{
	switch (x)
	{
	case 1:
		ITEMUSE1(ME->blood);
		break;
	}
}

//执行消耗物品1
void ITEMUSE1(int* x)
{
	*x += 20;
	if (*x >= FHP)
		*x = FHP;
}

//void NAME(int* name, struct roletag* ME)
//{
//	printf("请输入名字");
//	scanf("%s", ME->name);
//}

void rolestate_print(struct roletag* ME)
{
	color(7);
	boundary_printf(0);

	color(13);
	printf("NAME: %s\n", Your_Name);
	printf("HP: (%d / %d)\n", ME->blood, FHP);
	printf("MP: (%d)\n", FMP);

	color(7);
	boundary_printf(1);
}

void boundary_printf(int x)
{
	if (x == 0) {
		for (int i = 0; i < 50; i++)
			printf("*");
		printf("\n");
	}

	else
		printf("\n");
	for (int i = 0; i < 50; i++)
		printf("*");
}

void Clear_screen(struct roletag* ME)
{
	system("cls");
	rolestate_print_minjun(ME);
	for (int i = 1; i <= 25; i++)
		printf("\n");
}


void Text(int x, struct roletag* ME)
{
	switch (x)
	{
	case START://故事开端
		color(15); gotoxy(58, 15);
		printf("这是名为");
		color(14);
		printf("“黄昏”");
		color(15);
		printf("的故事。\n");
		color(3); gotoxy(58, 16);
		printf("祂们");
		color(15);
		printf("亲手带来了自己的终结，陨落于旧世界的终幕\n\n");
		color(7); gotoxy(58, 17);
		printf("而战士");
		color(15);
		printf("，将旧神踢下神位，新的时代不再是众神的棋盘......\n");
		color(7);
		gotoxy(68, 28);
		system("pause");
		break;
	case NAME://输入名字后的文本
		color(15);
		printf("他是一名战士，蒙受国的背叛，战死沙场。\n");
		printf("神的赐福将战士从死亡中带回，赋予名字，赐予试炼\n");
		color(7);
		//system("pause");
		break;
	case text1://路线上第一个黄方
		color(3);
		printf("“......你若能够通过这场试炼，我将许诺你的复生。”\n");
		color(7);
		printf("“我必须......活下去。”\n");
		//system("pause");
		break;
	case text2://白色区域旁边的黄方
		color(3);
		printf("“在你真正死去之前，这里会让你再度拥有前进的力量。”\n");
		color(7);
		//system("pause");
		break;
	case F1://黄圈
		color(15);
		printf("战士从倒下的怪物身后发现了几片发出淡淡白光的残破的纸，他上前拾起，却发现白光涌入了自己的体内。\n记忆的残片在脑海中一闪而过。\n\n");
		color(3);
		printf("“");
		color(7);
		printf("他们");
		color(3);
		printf("有活下去的理由......会帮助我们找到祂”\n“我们必须找出祂的命匣，才能真正地杀死祂！杀死......‘奥丁’”\n“必须赶在‘黄昏’之前。”\n“是的，‘黄昏’之前......”\n");
		color(7);
		//system("pause");
		break;
	case text3://路线上第二个黄方
		color(3);
		printf("“每一次探索与战斗都将让你更加强大，你无需畏惧死亡。”\n");
		color(7);
		printf("“这是一场必然通过的试炼？”\n");
		color(3);
		printf("“不，你必须赶在**到来之前完成试炼。”\n“或者，自我放弃”\n");
		color(7);
		//system("pause");
		break;
	case F2://蓝圈
		color(15);
		printf("在又一次胜利后，战士在路的尽头被一道金色的闪电袭击了。\n但奇怪的是，这股电流在接触到战士的身体后，便如同石沉大海一般消失得毫无踪迹。");
		color(7);
		printf("“我能感受得到它‘寄宿’在我体内，但对我......毫无反应？”\n");
		//system("pause");
		break;
	case text4://地图右下角不在路线上的黄方(在触发黄圈事件之前无法触发)
		if (ME->fool1 == 1)
		{
			ME->aoding = 1;
			color(15);
			printf("探索中的战士走入了一个一个祭坛般的房间，他感到“神的注视”突然消失了。\n祭坛的中央浮现出一团金色的光团，一阵强烈的闪光让战士不由得闭上了眼睛，那一刻他看到了");
			color(6);
			printf("祂");
			color(15);
			printf("。\n");
			color(7);
			printf("“所以，祂们要杀死你？‘奥丁’？”\n");
			color(6);
			printf("“是，你知道祂们不会兑现对你的承诺。”\n");
			color(7);
			printf("“我只是想要活下去。”\n");
			color(6);
			printf("“去这座‘英灵殿’的最深处，我将复生，也能让你离开这里。”\n“这是一场交易，你知道你别无选择。”\n");
			color(7);
			//system("pause");
		}
		break;
	case text5://打完小boss后的黄方
		color(3);
		printf("“在你继续前进之前，先返回一次庇佑之地。”\n“我将恢复你的力量，对你再一次进行赐福。”\n");
		color(7);
		system("pause");
		break;
	case F3://红圈(打完小boss后才能触发)
		color(15);
		printf("战士回到庇佑之所，却在此地的探索中发现了一个隐藏的房间。\n房间里堆积着怪物们的尸骸，其中一具身上遍布伤痕，模样和自己刚刚杀死的一个强敌一模一样。\n");
		color(3);
		printf("“它们死后将在这里化作你的力量。走吧，这里不是试炼的场所。”");
		color(7);
		printf("（战士仔细检查了尸骸，握紧拳头站起来）\n“好......”\n“（这不是我杀死的那一只......不止有我来到过这里）”\n");
		//system("pause");
		break;
	case text6://最后一个黄方
		color(3);
		printf("试炼的终点就在附近，准备妥当，奔赴终局。\n");
		color(7);
		//system("pause");
		break;
	case F4://绿圈
		color(15);
		printf("战士在终点附近停下了前进的脚步。\n在一阵搜索过后，他有了意料之外的发现。\n");
		color(7);
		printf("“‘永恒之枪’......”\n");
		//system("pause");
		break;
	case END1://战胜最终boss后（未触发过奥丁事件）
		color(15);
		printf("战斗结束，战士听命于神，摧毁了怪物守在身后的茧状物体。\n“茧”碎裂的一瞬间，战士发现神对他的不死加护突然消失了。\n一道强烈的光芒闪过，战士的身体在静谧中分崩离析......\n\n");
		system("pause");
		color(3);
		printf("“又一次？”\n“是的，我们又一次在最后时刻失去了联系。”\n“......”\n“再找一个亡魂过去，我们还有机会。”\n");
		color(7);
		system("pause");
		break;
	case END2://战胜最终boss后（触发过奥丁事件）
		color(15);
		printf("战斗结束，战士发现神对他的不死加护突然消失了。他的脑海中突然浮现出一句话：\n");
		color(6);
		printf("“触碰那个茧。”\n");
		color(15);
		printf("战士照做了。\n但在他完成触碰的那一刻，“茧”突然就以一种不可遏制的力度朝他涌来，战士反被包裹在茧中。\n一阵猛烈的挣扎过后，房间重归平静，只有那如同心脏一般的“茧”的颜色变得愈发鲜艳......\n\n");
		system("pause");
		color(6);
		printf("“我将复生，但不是现在；你将离开这里，但将成为我的一部分一同离开......”\n");
		color(7);
		system("pause");
		break;
	case END3://战胜最终boss后（触发过奥丁事件，并且触发四个特殊事件）
		color(3);
		printf("“很好。现在，摧毁那个‘茧’。”\n“你将+-*/<{}><......\n");
		color(6);
		printf("“现在，触碰那个‘茧’，完成我们的交易。”\n");
		color(7);
		//system("pause");
		break;
	case END3_F://结局选择听从奥丁
		color(15);
		printf("战士照做了。\n但在他完成触碰的那一刻，“茧”突然就以一种不可遏制的力度朝他涌来，战士反被包裹在茧中。\n一阵猛烈的挣扎过后，房间重归平静，只有那如同心脏一般的“茧”的颜色变得愈发鲜艳......\n\n");
		system("pause");
		color(6);
		printf("“我将复生，但不是现在；你将离开这里，但将成为我的一部分一同离开......”\n");
		color(7);
		system("pause");
		break;
	case TE://结局选择违背奥丁
		printf("“你不止对我说过这句话吧，奥丁。”\n我将剩余的力量一并加诸于“永恒之枪”之上，对着“茧”投出了决死的一击。\n伴随着强光和剧烈的爆炸，“茧”中的事物被一并摧毁了，我感受到其中夹杂着记忆的力量逐渐向我涌来，体内沉寂的“闪电”在此刻突然活跃了起来，真相在这一刻浮出了水面。\n");
		printf("“奥丁，你和祂们一样在欺骗我......你的神座、你的仇恨将由我继承。”\n“我将向祂们......不，向他们，降下黄昏！”\n");
		gotoxy(68, 27);
		printf("你已达成完美结局");
	}
}


void rolestate_print_minjun(struct roletag* ME) //p1=hp ,p2=mp,p3=strong,p4=x,p5=y
{
	color(4);
	char arrblood[83];
	char arrmp[83];
	arrblood[0] = 'h';
	arrblood[1] = 'p';
	arrblood[2] = ' ';
	arrmp[0] = 'm';
	arrmp[1] = 'p';
	arrmp[2] = ' ';
	printf("HP:");
	for (int i = 3; i <= ME->blood; i++)
	{
		arrblood[i] = '#';
		printf("%c", arrblood[i]);
		color(4);
	}
	printf("%d", ME->blood);
	//打印蓝量
	printf("\n");
	color(9);
	printf("MP:");
	for (int j = 3; j <= ME->Mp; j++)
	{
		arrmp[j] = '#';
		printf("%c", arrmp[j]);
		color(9);
	}
	printf("%d", ME->Mp);
	printf("\n");
	color(5);
	printf("攻击力：%d\n", ME->strong);//打印力量
	printf("位置：x=%d y=%d\n", ME->rolei, ME->rolej); //打印位置坐标
	color(15);
}
