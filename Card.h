#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class Card{
	private:
		string name;
		int health;
		int mana;
		int attack;
	public:
		Card();
		Card(string,int,int,int);
		
		void setName(string);
		string getName();

		void setHealth(int);
		int getHealth();

		void setMana(int);
		int getMana();

		void setAttack(int);
		int getAttack();		
};
#endif