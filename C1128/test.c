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
	//ѡ��LEDλ��
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
	//	//ѡ��LED6, ���ӦY5��Ҳ����CBA = 101
	//	P24 = 1;
	//	P23 = 0;
	//	P22 = 1;
	//	//ѡ��LED3, ���ӦY2��Ҳ����CBA = 010
	//	P24 = 0;
	//	P23 = 1;
	//	P22 = 0;
	//	//ѡ�ж������ʾ6
	//	P0 = 0x7D;
		//while(1)
	Nixie(7, 6);
	return 0;
}