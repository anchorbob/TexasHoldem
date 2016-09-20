#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Initilize constant variables
const int SIZE = 52;

//create a class called card
class card{
public:
	//default constructor
	card();
	//constructor with parameters
	card(string cardFace, string cardSuit);
	//print function;
	string print();

private:
	//create 2 card variables face and suit
	string face;
	string suit;
};

//create a class for deckOfCards
class deckOfCards{
public:
	//Default constructor: assigns teh 52 cards to deck
	deckOfCards();
	//shuffles the deck once all cards are assigned
	void shuffle();
    //deals out one card from the deck of 52, references class card
    card dealCard();
private:
	//variable card with a pointer to deck
	card* deck; //an array of cards of size 
	//keep track of what card you are dealing with
	int currentCard;
};