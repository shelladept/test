#include "Card.h"

Card::Card(){
	name = "Andrew Ryan";
	health = 15;
	mana = 25;
	attack = 12;
}
Card::Card(string n, int h, int m, int a){
	name = n;
	health = h;
	mana = m;
	attack = a;
}
void Card::setName(string n){
	name = n;
}
string Card::getName(){
	return name;
}
void Card::setHealth(int h){
	health = h;
}
int Card::getHealth(){
	return health;
}
void Card::setMana(int m){
	mana = m;
}
int Card::getMana(){
	return mana;
}
void Card::setAttack(int a){
	attack = a;
}
int Card::getAttack(){
	return attack;
}