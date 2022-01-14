#include "Card.h"
#include "Hand.h"
using namespace std;

int main() {
	Card c1(Card:: TWO, Card::CLUBS);
	c1.printCard();
	Hand h1;
	h1.addCard(c1);
	h1.printHand();
	h1.getTotal();
	cout << h1.getScore() << endl;
	return 0;
}