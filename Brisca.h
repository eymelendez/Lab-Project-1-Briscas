#pragma once

// Brisca.h

#include<iostream>
#include<cstdio>

using namespace::std;

class Brisca
{
public:

	Brisca(); // Constructor
	Brisca(char aCardType, int aCard, int aValue); // Parameter Constructor
	Brisca(const Brisca & aBrisca); // Copy Constructor
	~Brisca(); // Destructor

	// Setters
	void setCardType(char aCardType);
	void setCard(int aCard);
	void setValue(int aValue);

	// Getters
	char getCardType();
	int getCard();
	int getValue();

	// Operators
	friend ostream & operator << (ostream & output, const Brisca &aBrisca);


private:

	char cardType;	// ('O' - oro, 'E' - Espada, 'C' - copa, 'B' basto)
	int card;		// (1..7, 10, 11, 12)
	int value;		// (1 = 11, 3 = 10, 10 = 2, 11 = 3, 12 = 4, the rest = 0)

};