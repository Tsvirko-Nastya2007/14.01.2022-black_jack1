#pragma once
#include "Card.h"
#include <vector>

class Hand {
protected:
	std::vector<Card> m_hand;
	int m_score;
public:
	Hand() : m_score{ 0 } { m_hand.reserve(8); }
	void addCard(Card card) { m_hand.push_back(card); }
	int getScore() { return m_score; }
	void getTotal() {
		m_score = 0;
		int size = m_hand.size();
		for (int i = 0; i < size; i++) {
			if (m_hand[i].getRang() == Card::ACE) {
				m_score += m_hand[i].getScore()+10;
				if (m_score > 21) m_score -= 10;
			}
			else m_score += m_hand[i].getScore();
		}
	}
	void printHand() {
		int size = m_hand.size();
		for (int i = 0; i < size; i++) {
			m_hand[i].printCard();
		}
		std::cout << std::endl;
	}
};