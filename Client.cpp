#include "Client.h"

Client::Client()
{
}

Client::Client(string name, string lastName, int phone, creditCard creditCard1, giftCard giftCard1)
{
	_name = name;
	_lastName = lastName;
	_phone = phone;
	_creditCard = creditCard1;
	_giftCard = giftCard1;
}

Client::Client(string name, string lastName, int phone, float creditCard1, float giftCard1)
{
	_name = name;
	_lastName = lastName;
	_phone = phone;

	creditCard clientCreditCard;
	clientCreditCard.setCardBalance(creditCard1);
	_creditCard = clientCreditCard;

	giftCard clientGiftCard;
	clientGiftCard.setCardBalance(giftCard1);
	_giftCard = clientGiftCard;
}

Client::Client(string name, string lastName, int phone)
{
	_name = name;
	_lastName = lastName;
	_phone = phone;
}

creditCard Client::getCreditCard()
{
	return _creditCard;
}

giftCard Client::getgiftCard()
{
	return _giftCard;
}

void Client::setName(string name)
{
	_name = name;
}

void Client::setLastName(string lastName)
{
	_lastName = lastName;
}

void Client::setPhone(int phone)
{
	_phone = phone;
}

void Client::setCreditCard(float creditCard1)
{
	creditCard clientCreditCard;
	clientCreditCard.setCardBalance(creditCard1);
	_creditCard = clientCreditCard;
}

void Client::setGiftCard(float giftCard1)
{
	giftCard clientGiftCard;
	clientGiftCard.setCardBalance(giftCard1);
	_giftCard = clientGiftCard;
}

