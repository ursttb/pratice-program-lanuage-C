#include<stdio.h>

void Trans(unsigned char Loc, char CBA[3])
{
	char i = 2;
	while (Loc - 1)
	{
		CBA[i] = (Loc - 1) % 2;
		Loc = (Loc - 1) / 2 + 1;
		i--;
	}
	if (Loc - 1 == 1)
	{
		CBA[i] = 1;
	}
}

void Nixie(unsigned char Loc, char num)
{
	char CBA[3] = { 0 };
	//选中LED位置
	Trans(Loc, CBA);
	char P24 = CBA[0];
	char P23 = CBA[1];
	char P22 = CBA[2];
	if (num == 6)
	{
		char P0 = 0x7D;
	}
}

int main()
{
	//	//选中LED6, 其对应Y5口也就是CBA = 101
	//	P24 = 1;
	//	P23 = 0;
	//	P22 = 1;
	//	//选中LED3, 其对应Y2口也就是CBA = 010
	//	P24 = 0;
	//	P23 = 1;
	//	P22 = 0;
	//	//选中段码端显示6
	//	P0 = 0x7D;
		//while(1)
	Nixie(7, 6);
	return 0;
}