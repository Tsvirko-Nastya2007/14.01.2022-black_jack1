#pragma once
#include <iostream>
class Card {
public:
	enum CardRang {TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
		NINE, TEN, JACK, QUEEN, KING, ACE, MAX_RANG};
	enum CardSuit {
		CLUBS,//kreste
		DIAMONDS,//bubni
		HEARTS,//chirvi
		SPADES,//piki
		MAX_SUIT
	};
	Card(CardRang rang, CardSuit suit):m_rang{rang}, m_suit{suit}
	{}
	CardRang getRang() { return m_rang; }
	int getScore() {
		if (m_rang == TWO)		return 2;
		else if		(m_rang == THREE)	return 3;
		else if		(m_rang == FOUR)	return 4;
		else if		(m_rang == FIVE)	return 5;
		else if		(m_rang == SIX)		return 6;
		else if		(m_rang == SEVEN)	return 7;
		else if		(m_rang == EIGHT)	return 8;
		else if		(m_rang == NINE)	return 9;
		else if		(m_rang == TEN)		return 10;
		else if		(m_rang == JACK)	return 10;
		else if		(m_rang == QUEEN)	return 10;
		else if		(m_rang == KING)	return 10;
		else if		(m_rang == ACE)		return 1;
		else							return 0;
	}
	void printCard() {
		if		(m_rang == TWO)		std::cout<< '2';
		else if (m_rang == THREE)	std::cout<< '3';
		else if (m_rang == FOUR)	std::cout<< '4';
		else if (m_rang == FIVE)	std::cout<< '5';
		else if (m_rang == SIX)		std::cout<< '6';
		else if (m_rang == SEVEN)	std::cout<< '7';
		else if (m_rang == EIGHT)	std::cout<< '8';
		else if (m_rang == NINE)	std::cout<< '9';
		else if (m_rang == TEN)		std::cout<< "10";
		else if (m_rang == JACK)	std::cout<< 'J';
		else if (m_rang == QUEEN)	std::cout<< 'Q';
		else if (m_rang == KING)	std::cout<< 'K';
		else if (m_rang == ACE)		std::cout<< 'A';
		else						std::cout<< '0';

		if (m_suit == CLUBS) std::cout << 'C' << ' ';
		else if (m_suit == DIAMONDS) std::cout << 'D' << ' ';
		else if (m_suit == HEARTS) std::cout << 'H' << ' ';
		else if (m_suit == SPADES) std::cout << 'S' << ' ';
	}
private:
	CardRang m_rang;
	CardSuit m_suit;
};