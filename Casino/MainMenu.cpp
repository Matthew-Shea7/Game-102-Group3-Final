#include "MainMenu.h"
#include "BlackJack.h"
#include "Slot.h"

enum MenuOptions
{
	BlackJack = 1,
	SlotMachine,
	Roulette,
	Credits,
	Exit,
};
int Player_Coins = 1000;


void credits()
{
	system("CLS");
	cout << "This Game is programed by:" << endl;
	cout << "Bhavay Sharma" << endl;
	cout << "Korben Rowe-Lamarche" << endl;
	cout << "Matthew Shea" << endl;
	Sleep(5500);


}






int main()
{
	int x = 0;
	while (x == 0)
	{
		cout << "Casino" << endl;
		cout << Player_Coins << endl;
		// menu output
		int MenuOptions = 5;
		cout << "[1] Black Jack" << endl;
		cout << "[2] Slot Machine" << endl;
		cout << "[3] Roulette" << endl;
		cout << "[4] Credits" << endl;
		cout << "[5] Exit" << endl;

		//user choice

		cin >> MenuOptions;

		switch (MenuOptions)
		{
		case BlackJack:
		{
			Black_Jack(Player_Coins);
			break;
		}
		case SlotMachine:
		{
			Slot_Machine(Player_Coins);
			break;
		}
		case Roulette:
		{
			//call Roulette
			break;
		}
		case Credits:
		{
			credits();
			system("CLS");
			return main();
			break;
		}
		case Exit:
		{
			cout << "Thanks for playing!!" << endl;
			Sleep(2000);
			return 0;
		}
		}
	}
	system ("PAUSE");
	return 0;
}
