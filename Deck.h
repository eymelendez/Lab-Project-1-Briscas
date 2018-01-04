#pragma once

// Deck.h

#include<iostream>
#include<algorithm> 

using namespace::std;

#include"Brisca.h"

const int MAX = 40;

// Composition of Brisca

class Deck
{
public:
	Deck(); // Constructor
	Deck(const Brisca & aBrisca); // Copy Constructor
	~Deck(); // Destructor

	// Setters
	void setDeck(const Brisca & aBrisca);


	// Getters
	Brisca *getBrisca(const Brisca &aBrisca);

	// Operators
	Brisca operator [](int MAX);

	friend ostream & operator << (ostream &output, const Deck & aDeck); // Prints the deck of cards

	// Methods

	// Shuffles the cards every time the user enters option 2 on the MAIN.cpp part of the program.
	void shuffle();

	// Method to Reset the deck to it's original state.
	void reset(const Deck & aDeck);

	// Method to display a set of 10 cards of the Deck.
	void firstTenCards();
	void secondTenCards();
	void thirdTenCards();
	void fourthTenCards();


private:

	// This is the whole deck of cards with there cardType, number and value.

	Brisca deck[MAX] = { Brisca('O',1,11), Brisca('O',2,0),Brisca('O',3,10),Brisca('O',4,0),
		Brisca('O',5,0), Brisca('O',6,0), Brisca('O',7,0), Brisca('O',10,2),
		Brisca('O',11,3), Brisca('O',12,4), Brisca('E',1,11),Brisca('E',2,0),
		Brisca('E',3,10),Brisca('E',4,0), Brisca('E',5,0),Brisca('E',6,0),
		Brisca('E',7,0),Brisca('E',10,2), Brisca('E',11,3), Brisca('E',12,4),
		Brisca('C',1,11), Brisca('C',2,0), Brisca('C', 3,10), Brisca('C',4,0),
		Brisca('C',5,0), Brisca('C', 6,0), Brisca('C', 7, 0), Brisca('C', 10, 2),
		Brisca('C', 11, 3), Brisca('C', 12, 4), Brisca('B',1,11), Brisca('B',2,0),
		Brisca('B',3,10), Brisca('B',4,0),Brisca('B',5,0), Brisca('B',6,0),
		Brisca('B',7,0), Brisca('B', 10, 2), Brisca('B',11,3), Brisca('B',12,4) };

	// Another array to be used when calling the reset method.

	Brisca deckReset[MAX] = { Brisca('O',1,11), Brisca('O',2,0),Brisca('O',3,10),Brisca('O',4,0),
		Brisca('O',5,0), Brisca('O',6,0), Brisca('O',7,0), Brisca('O',10,2),
		Brisca('O',11,3), Brisca('O',12,4), Brisca('E',1,11),Brisca('E',2,0),
		Brisca('E',3,10),Brisca('E',4,0), Brisca('E',5,0),Brisca('E',6,0),
		Brisca('E',7,0),Brisca('E',10,2), Brisca('E',11,3), Brisca('E',12,4),
		Brisca('C',1,11), Brisca('C',2,0), Brisca('C', 3,10), Brisca('C',4,0),
		Brisca('C',5,0), Brisca('C', 6,0), Brisca('C', 7, 0), Brisca('C', 10, 2),
		Brisca('C', 11, 3), Brisca('C', 12, 4), Brisca('B',1,11), Brisca('B',2,0),
		Brisca('B',3,10), Brisca('B',4,0),Brisca('B',5,0), Brisca('B',6,0),
		Brisca('B',7,0), Brisca('B', 10, 2), Brisca('B',11,3), Brisca('B',12,4) };


};

