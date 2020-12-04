#pragma once
#include <iostream>
#include <string>
#include "Inventory.h"

using namespace std;

class creditCard
{
private:
	int _cardNumber;
	string _cardHolder;
	float _balance;

public:
	creditCard();
	creditCard(float);

	void setCardNumber(int);
	void setCardHolder(string);
	void setCardBalance(float);

	float getBalance();
	void discount(int);

	//void discount(Product);
};

