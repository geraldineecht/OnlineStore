#pragma once
#include <string>

using namespace std;

class Product
{
private:
	string _name;
	int _stock;
	float _price;

public:
	Product();
	Product(string, float, int);

	string getName();
	float getPrice();
	int getStock();

	void setName(string);
	void setStock(int);
	void setPrice(float);

	void remove();

};

