// Briscas.cpp

#include<iostream>

using namespace::std;

#include"Brisca.h"
#include"Deck.h"

// Constructor
Brisca::Brisca()
{
	cardType = NULL;
	card = 0;
	value = 0;
}

// Parameter Constructor
Brisca::Brisca(char aCardType, int aCard, int aValue)
{
	setCardType(aCardType);
	setCard(aCard);
	setValue(aValue);
}

// Copy Constructor
Brisca::Brisca(const Brisca & aBrisca)
{
	setCardType(aBrisca.cardType);
	setCard(aBrisca.card);
	setValue(aBrisca.value);
}

// Destructor
Brisca::~Brisca()
{
	// cout << "Destroying Objectos... " << endl;
}

// Setters
void Brisca::setCardType(char aCardType)
{
	cardType = aCardType;
}

void Brisca::setCard(int aCard)
{
	card = aCard;
}

void Brisca::setValue(int aValue)
{
	value = aValue;
}

// Getters
char Brisca::getCardType()
{
	return cardType;
}

int Brisca::getCard()
{
	return card;
}

int Brisca::getValue()
{
	return value;
}

// Operator
ostream & operator<<(ostream & output, const Brisca & aBrisca)
{
	output << aBrisca.cardType << "--" << aBrisca.card << "--" << aBrisca.value;
	return output;
}
