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

bool giftCard::discount(float price)
{
	if (price <= _balance)
	{
		_balance -= price;
		cout << _balance << endl
			 << "Thanks for your purchase" << endl;
		return true;
	}
	else
	{
		cout << "Gift Card Declined";
		return false;
	}
}
