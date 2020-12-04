#include "Store.h"

#include "Store.h"
#include "Client.h"
#include <iostream>
using namespace std;

Store::Store()
{
}

Store::Store(Client client)
{
	_client = client;
}

void Store::start(Client client)
{
	_client = client;
	Inventory inventory;
	int i;
	int j;
	string choice;

	std::cout << "           ANN TAYLOR           " << endl
			  << endl;

	for (i = 0, j = 1; i <= 9; i++, j++)
	{
		std::cout << j << ". " << inventory.getProducts(i).getName() << "     " << inventory.getProducts(i).getPrice() << endl;
	}

	std::cout << "Press 'N' if you want to get out of the store" << endl;
	std::cout << "Choose a product to add to cart: ";
	std::cin >> choice;
	std::cout << endl;

	while (choice != "N")
	{
		Product selectedProduct = inventory.getProducts(stoi(choice) - 1);
		std::cout << "Selected " << selectedProduct.getName() << endl
				  << selectedProduct.getStock() << " in stock." << endl
				  << endl;

		if (selectedProduct.getStock() > 0)
		{
			string selectedPayment;
			std::cout << "PAYMENT METHOD" << endl
					  << endl;
			std::cout << "1. Credit Card" << endl
					  << "2. Gift Card" << endl
					  << endl;
			std::cin >> selectedPayment;
			std::cout << endl;

			float productPrice = selectedProduct.getPrice();

			if (selectedPayment == "1")
			{
				if (_client.getCreditCard().discount(productPrice))
				{
					inventory.reduceStock(stoi(choice) - 1);
				}
				break;
			}
			else if (selectedPayment == "2")
			{
				if (_client.getgiftCard().discount(productPrice))
				{
					inventory.reduceStock(stoi(choice) - 1);
				}
				break;
			}
		}
		else
		{
			std::cout << "Sorry, it seems that we are out of stock!" << endl;
		}

		std::cout
			<< endl
			<< "Press 'N' if you want to finish the purchase" << endl;
		std::cout << "Choose other product to add to cart: ";
		choice;
		std::cin >> choice;
		std::cout << endl;
	}
}
