#pragma once
#include <string>
#include "creditCard.h"
#include "giftCard.h"

using namespace std;

class Client
{
private:
	string _name;
	string _lastName;
	int _phone;
	creditCard _creditCard;
	giftCard _giftCard;


public:
	Client();
	Client(string, string, int, creditCard, giftCard);
	Client(string, string, int, float, float);
	Client(string, string, int);

	creditCard getCreditCard();
	giftCard getgiftCard();

	void setName(string);
	void setLastName(string);
	void setPhone(int);

	void setCreditCard(float);
	void setGiftCard(float);
};

