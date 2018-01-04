// Deck.cpp

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace::std;

#include"Brisca.h"
#include"Deck.h"

// Constructor
Deck::Deck()
{
}

// Copy Constructor
Deck::Deck(const Brisca & aBrisca)
{
	setDeck(aBrisca);
}

// Destructor
Deck::~Deck()
{
	// cout << "Destroying objects... << endl;
}

// Setter
void Deck::setDeck(const Brisca & aBrisca)
{
	for (int i = 0; i < MAX; i++)
	{
		deck[i] = aBrisca;

	}
}

// Getter
Brisca * Deck::getBrisca(const Brisca &aBrisca)
{
	return deck;
}

Brisca Deck::operator[](int MAX)
{
	if (MAX > 0)
	{
		return deck[MAX];
	}

	
}

// Methos to shuffle the cards
void Deck::shuffle()
{
	int i = 0;
	int j = 1;


	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{

			while (i < 40 && j < 40)
			{
				swap(deck[i], deck[j]);
				i += 2;
				j += 3;

			} // end while

		}// end for.


	} // end for.


} // end for.


// Methos to reset the deck to it's original state.
void Deck::reset(const Deck & aDeck)
{

	for (int i = 0; i < MAX; i++)
	{
		deck[i] = deckReset[i];

	}
}

// Displays the first set of 10 cards in the deck
void Deck::firstTenCards()
{

	for (int i = 0; i < 10; i++)
	{
		cout << "Cards# " << i + 1 << " --- " << deck[i] << endl;
	}

}

// Displays the second set
void Deck::secondTenCards()
{
	
	for (int i = 10; i < 20; i++)
	{
		cout << "Cards# " << i + 1 << " --- " << deck[i] << endl;
	}
}

// Displays the third set
void Deck::thirdTenCards()
{

	for (int i = 20; i < 30; i++)
	{
		cout << "Cards# " << i + 1 << " --- " << deck[i] << endl;
	}
}

// Displays the fourth set
void Deck::fourthTenCards()
{
	
	for (int i = 30; i < 40; i++)
	{
		cout << "Cards# " << i + 1 << " --- " << deck[i] << endl;
	}

}

// Operator
ostream & operator << (ostream & output, const Deck & aDeck)
{
	int count = 0;

	for (int i = 0; i < 40; i++)
	{
		output << "Card#" << i + 1 << " --- " << aDeck.deck[i] << endl;
		count = i;
	}


	return output;


}

