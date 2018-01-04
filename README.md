# Lab-Project-1-Briscas

Briscas 
 
Project #1 Objectives: 
 
To write a program that implements the following C++ concepts 

    1. Data Encapsulation 
    2. Composition Class 
    3. Instantiate classes
    4. Static Memory (arrays) 
 
 ______________                           ____________
 |   Brisca   |       ---------------->   |    Deck   |
 ______________                           ____________
 
 
1. Make a class call Brisca with his methods.  The methods should include 
   constructors, getters and setters.  Make an operator overloading of <<, >>.  
   Private attributes are: 
   
   a. char cardType // (‘O’ – oro, ‘E’ – espada, ‘C’ – copa, ‘B’ – basto  
   b. int card // (1..7, 10, 11, 12) 
   c. int value // (1 = 11, 3 = 10, 10 = 2, 11 = 3, 12 = 4, the rest = 0) 
 
2. Make a class call Deck that would be a composition of class Brisca.  The methods should include 
   default and copy constructor, getters and setters where this last will not receive arguments just
   initialize the suit.  
   
   The private attribute is deck[40] of type Brisca.  Make an operator overloading of [ ], <<, >>.  
   Make a method void shuffle(), that will shuffle all the cards of the deck.   
   
3. Make a program with the following menu:    

    MENU  
    
    1. Display every 10 cards 
    2. Shuffle deck 
    3. Reset deck 
    4. Exit 
 
Your choice:  
