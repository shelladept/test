#include <iostream>
using namespace std;

//Included Custom Classes
#include "Card.h"
#include "Deck.h"


int main(){
	Card Card0;
	cout << Card0.getName() << endl;
	Card Card1("Cardigan",12,23,34);
	cout << Card1.getName() << " " << Card1.getHealth() << endl;
	cout << "Cardigan was stricken by stage-fright! lose 1 hp." << endl;
	Card1.setHealth(11);
	cout << Card1.getHealth() << endl;	
	Deck NullDeck;
	cout << NullDeck.getName() << endl;
	return 0;
}