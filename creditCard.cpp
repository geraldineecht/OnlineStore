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

void creditCard::discount(int i)
{
	Inventory inventory;
	if (inventory.getProducts(i).getPrice() < _balance)
	{
		_balance -= inventory.getProducts(i).getPrice();
		cout << _balance << endl << "Thanks for your purchase" << endl;
	}
	else if (inventory.getProducts(i).getPrice() > _balance)
	{
		cout << "Credit Card Declined";
	}
	
}

