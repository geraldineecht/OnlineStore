#pragma once
#include <iostream>
#include <string>
#include "Inventory.h"

using namespace std;

class giftCard
{
private:
	string _cardNumber;
	int _cardPin;
	float _balance;

public:
	giftCard();
	giftCard(float);

	void setCardNumber(string);
	void setCardPin(int);
	void setCardBalance(float);

	float getBalance();

	bool discount(float);
};
