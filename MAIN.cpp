// MAIN.cpp

#include<iostream>
#include<algorithm>

using namespace::std;

#include"Brisca.h"
#include"Deck.h"

/*		File Name: MAIN.cpp
		Author: Edwin Y. Melendez Lopez #89139
		Description: A program that displays a deck of 40 cards each with they're type, card number
					 and value by using a composition of two classes called Brisca and Deck and 
					 arrays. Also, it uses method's to shuffle, reset and to display every 10 cards
					 of the deck.

		History:
			04/22/2017 - Program Created. EML
			04/22/2017 - Briscas.h file Created. EML
			04/22/2017 - Briscas.cpp file Created. EML
			04/22/2017 - Deck.h Created. EML
			04/22/2017 - Deck.cpp Created. EML
			04/22/2017 - MAIN.cpp Created. EML
			04/27/2017 - Tested the shuffle method, it works. EML
			04/27/2017 - Tested the reset methos, it works. EML
			05/01/2017 - Tested the methods of displaying sets of 10 cards, it works. EML
			05/05/2017 - Final testing and program is Successful. EML*/



int main()
{

	int option;
	Deck d1;

	// Program won't terminate until the user enters 4.
	do

	{

		cout << "MENU:" << endl;

		cout << "1) Display every 10 cards" << endl;

		cout << "2) Shuffle cards" << endl;

		cout << "3) Reset deck" << endl;

		cout << "4) Exit" << endl;

		cout << "Your choice:";
		cin >> option;

		switch (option)
		{

		case 1:
			
			cout << "Displaying first ten cards...\n";
			d1.firstTenCards();

			system("pause");

			cout << "\n";

			cout << "Displaying second set of ten cards...\n";
			d1.secondTenCards();

			system("pause");

			cout << "\n";

			cout << "Displaying third set of ten cards...\n";
			d1.thirdTenCards();
			
			system("pause");

			cout << "\n";

			cout << "Displaying four set of ten cards...\n";
			d1.fourthTenCards();

			system("pause");

			cout << "\n";
			break;

		case 2:
			d1.shuffle();
			cout << d1;
			cout << "\n";
			break;

		case 3:
			d1.reset(d1);
			cout << d1;
			cout << "\n";
			break;

		case 4:
			cout << "Terminating program..." << endl;
			exit(1);

		default:
			cout << "Invalid Entry..." << endl;
			break;
		}

	} while (option != 4);


	system("pause");
	return 0;

} // end main. 22 de abril de 2017 - Successful!