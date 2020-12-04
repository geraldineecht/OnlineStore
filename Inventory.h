#pragma once
#include "Product.h"

class Inventory
{
private:
	Product products[10];

public:
	Inventory();
	Product getProducts(int);
};

