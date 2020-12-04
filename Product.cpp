#include "Product.h"

Product::Product()
{
}

Product::Product(string name, float price, int stock)
{
	_name = name;
	_price = price;
	_stock = stock;
}

string Product::getName()
{
	return _name;
}

float Product::getPrice()
{
	return _price;
}

int Product::getStock()
{
	return _stock;
}

void Product::setName(string name)
{
	_name = name;
}

void Product::setPrice(float price)
{
	_price = price;
}

void Product::setStock(int stock)
{
	_stock = stock;
}

void Product::remove()
{

}

