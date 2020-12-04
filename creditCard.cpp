#include "creditCard.h"

creditCard::creditCard()
{
}

creditCard::creditCard(float balance)
{
	_balance = balance;
}

void creditCard::setCardNumber(int cardNumber)
{
	_cardNumber = cardNumber;
}

void creditCard::setCardHolder(string cardHolder)
{
	_cardHolder = cardHolder;
}

void creditCard::setCardBalance(float balance)
{
	_balance = balance;
}

float creditCard::getBalance()
{
	return _balance;
}

bool creditCard::discount(float price)
{
	Inventory inventory;
	if (price <= _balance)
	{
		_balance -= price;
		cout << _balance << endl
			 << "Thanks for your purchase" << endl;
		return true;
	}
	else
	{
		cout << "Credit Card Declined";
		return false;
	}
}
