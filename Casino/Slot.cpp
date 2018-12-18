#include "Slot.h"

int key = 0;
int Slot1 = 0;
int Slot2 = 4;
int Slot3 = 6;
int Prize[5] = { 1, 5, 10, 20, 100 };
int PrizeMultiplier = 1;

void SlotMachineAI()
{
	if (Slot1 == Slot3 && Slot1 == Slot2)
	{
		cout << " Victory Royale" << endl;


		switch (Slot1)
		{
		case 1:


			cout << "You won this amount of money" << endl;
			break;

		case 2:


			cout << "You won this amount of money" << endl;
			break;

		case 3:

			cout << "You won this amount of money" << endl;
			break;

		case 4:


			cout << "You won this amount of money" << endl;
			break;

		case 5:


			cout << "You won this amount of money" << endl;
			break;

		case 6:


			cout << "You won this amount of money" << endl;
			break;

		case 7:


			cout << "You won this amount of money" << endl;
			break;

		case 8:


			cout << "You won this amount of money" << endl;
			break;

		case 9:


			cout << "You won this amount of money" << endl;
			break;

		}
	}
}
void Slot_Machine(int &coins)
{
	system("cls");

	int wheel[3][9] =
	{
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9}
	 
	};
	int BettingAmount;
	cout << " How much do you want to bet" << endl;
	cout << "[1] $1" << endl;
	cout << "[2] $5" << endl;
	cout << "[3] $10" << endl;
	cout << "[4] $20" << endl;
	cout << "[5] $100" << endl;
	cout << "[6] Exit" << endl;
	cin >> BettingAmount;

	switch (BettingAmount)
	{
	case 1:
	{
		BettingAmount --;
		PrizeMultiplier = Prize[BettingAmount];
		coins = coins - PrizeMultiplier;
		break;
	}
	case 2:
	{
		BettingAmount--;
		PrizeMultiplier = Prize[BettingAmount];
		coins = coins - PrizeMultiplier;
		break;
	}
	case 3:
	{
		BettingAmount--;
		PrizeMultiplier = Prize[BettingAmount];
		coins = coins - PrizeMultiplier;
		break;
	}
	case 4:
	{
		BettingAmount--;
		PrizeMultiplier = Prize[BettingAmount];
		coins = coins - PrizeMultiplier; 
		break;
	}
	case 5:
	{
		BettingAmount--;
		PrizeMultiplier = Prize[BettingAmount];
		coins = coins - PrizeMultiplier;
		break;
	}
	case 6:
	{
		return ;
		break;
	}
	}
	//int screen[3][3];
	key = 0;
	while (key < 9)
	{

		/*screen[3][3] =
		{
			{wheel[0][Slot1],wheel[1][Slot2],wheel[2][Slot3]},
			{wheel[0][Slot1 + 1],wheel[1][Slot2 + 1],wheel[2][Slot3 + 1]},
			{wheel[0][Slot1 + 2],wheel[1][Slot2 + 2],wheel[2][Slot3 + 2]}
		};*/
		/*
		cout << screen[0][0] << screen[0][1] << screen[0][2] << endl;
		cout << screen[1][0] << screen[1][1] << screen[1][2] << endl;
		cout << screen[2][0] << screen[2][1] << screen[2][2] << endl;
		*/
		
		cout << wheel[0][Slot1] << wheel[1][Slot2] << wheel[2][Slot3] << endl;
		cout << wheel[0][Slot1 + 1] << wheel[1][Slot2 +1] << wheel[2][Slot3+1] << endl;
		cout << wheel[0][Slot1 + 2] << wheel[1][Slot2+2] << wheel[2][Slot3+2] << endl;

		if (key == 0)
		{
			cout << "press any button to start" << endl;
		}
		if (_kbhit())
		{
			char delay = _getch();
			key++;
		}
		Sleep(100);
		system("cls");

		if (key > 0)
		{
			if (key < 4)
			{
				Slot1++;
				if (Slot1 == 7)
				{
					Slot1 = 0;
				}

			}
			if (key < 6)
			{
				Slot2++;
				if (Slot2 == 7)
				{
					Slot2 = 0;
				}
			}
			if (key < 8)
			{
				Slot3++;
				if (Slot3 == 7)
				{
					Slot3 = 0;
				}
			}
		}
	}

}