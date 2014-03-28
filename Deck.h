#ifndef DECK_H
#define DECK_H

#include <iostream>
using namespace std;

class Deck{
	private:
		string name;//deck name
		string description;//deck description
		int maxCardCnt;
		int currCardCnt;
		bool isFull;
		bool isEmpty;
	public:
		Deck();
		Deck(string,string,int,int,bool,bool);	
	
		string getName();	
	
		void shuffleDeck();
		void orderByManaLvl();
		int listcurrCardCnt();
		int listMaxCardCnt();
		void listCards();
		void addCard();
		void remCard();
};
#endif