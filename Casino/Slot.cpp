#include "Slot.h"

void Slot_Machine(int &coins)
{
	system("cls");

	int wheel[3][9] = 
	{
		{1,2,3,4,5,6,7,8,9},
		{3,4,5,6,7,8,9,1,2},
		{5,6,7,8,9,1,2,3,4}
	 
	};

	int key = 0;
	int Slot1 = 0;
	int Slot2 = 0;
	int Slot3 = 0;
	//int screen[3][3];

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
				if (Slot1 == 10)
				{
					Slot1 = 0;
				}

			}
			if (key < 6)
			{
				Slot2++;
				if (Slot2 == 10)
				{
					Slot2 = 0;
				}
			}
			if (key < 8)
			{
				Slot3++;
				if (Slot3 == 10)
				{
					Slot3 = 0;
				}
			}
		}
	}
}