#include "giftCard.h"

giftCard::giftCard()
{
}

giftCard::giftCard(float balance)
{
	_balance = balance;
}

void giftCard::setCardNumber(string cardNumber)
{
	_cardNumber = cardNumber;
}

void giftCard::setCardPin(int cardPin)
{
	_cardPin = cardPin;
}

void giftCard::setCardBalance(float balance)
{
	_balance = balance;
}

float giftCard::getBalance()
{
	return _balance;
}

void giftCard::discount(int i)
{
	Inventory inventory;
	if (inventory.getProducts(i).getPrice() < _balance)
	{
		_balance -= inventory.getProducts(i).getPrice();
		cout << _balance << endl << "Thanks for your purchase" << endl;
	}
	else if (inventory.getProducts(i).getPrice() > _balance)
	{
		cout << "Gift Card Declined";
	}
}

