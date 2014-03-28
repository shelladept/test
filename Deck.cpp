#include "Deck.h"

Deck::Deck(){
	name = "NULL";
	description = "Null Deck";
	maxCardCnt = 0;
	currCardCnt = 0;
	isFull = false;
	isEmpty = false;
}
Deck::Deck(string n, string desc, int max, int curr, bool isF, bool isE){
	name = n;
	description = desc;
	maxCardCnt = max;
	currCardCnt = curr;
	isFull = isF;
	isEmpty = isE;
}
string Deck::getName(){
	return name;
}