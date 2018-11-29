#include "BlackJack.h"

void Black_Jack(int &Coins)
{
	struct Deck
	{
		bool cards[4][13] = { false };
	};
	Deck dealer; 
	Deck player1;
	Deck player2;
	Deck Master;
	DeckTrue(Master.cards);
	DeckFalse(dealer.cards);
	DeckFalse(player1.cards);
	DeckFalse(player2.cards);
	cout << Coins << endl;
	cout << dealer.cards[2][2] << endl;
	cout << player1.cards[2][2] << endl;
	cout << player2.cards[2][2] << endl;
	cout << Master.cards[0][0] << endl;
};

void DeckTrue(bool Deck[][13])
{
	for (int i = 0; i < 13; i++)
	{
		for (int x = 0; x < 4; x++)
		{
			Deck[x][i] = true;
		}
	}
}
void DeckFalse(bool Deck[][13])
{
	for (int i = 0; i < 13; i++)
	{
		for (int x = 0; x < 4; x++)
		{
			Deck[x][i] = false;
		}
	}
}