#pragma once
#include "Product.h"
#include "Client.h"
#include "Inventory.h"

using namespace std;

class Store
{
private:
	Client	_client;
public:
	Store();
	Store(Client);

	void start(Client);

};

