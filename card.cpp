#include "card.h"


card::card(){
	//nothing goes here
}

card::card(string cardFace, string cardSuit){
	face = cardFace;
	suit = cardSuit;
}

string card::print(){
	return(face + suit);
}

deckOfCards::deckOfCards(){
	string faces[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    string suits[] = {"\xe2\x99\xa5", "\xe2\x99\xa6", "\xe2\x99\xa3", "\xe2\x99\xa0"};
    deck = new card[SIZE];
    currentCard = 0;
    for(int count = 0; count < SIZE; count++){
    	deck[count] = card(faces[count % 13], suits[count / 13]);
    }
}

void deckOfCards::shuffle(){
	currentCard = 0;
	for(int first = 0; first < SIZE; first++){
		int second = (rand()+time(0))%SIZE;
		card temp = deck[first];
		deck[first] = deck[second];
		deck[second] = temp;
	}
}

card deckOfCards::dealCard(){
    if(currentCard > SIZE) {
    	shuffle();
    } 
    return deck[currentCard++];
}


int main(){
	deckOfCards deck;
	card currentCard;
	deck.shuffle();
	for(int i = 0; i < SIZE; i++){
		currentCard = deck.dealCard();
		cout<<currentCard.print() << endl;
	}

	string heart = "\xe2\x99\xa5";
    std::cout << heart << '\4' << '\3' << '\6' <<'\5'<< '\n';
    return 0;

}








