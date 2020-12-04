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

	cout << "           ANN TAYLOR           " << endl << endl;

	for (i = 0, j = 1; i <= 9; i++, j++)
	{
		cout << j << ". " << inventory.getProducts(i).getName() << "     " << inventory.getProducts(i).getPrice() << endl;
	}

	cout << "Press 'N' if you want to get out of the store" << endl;
	cout << "Choose a product to add to cart: ";
	cin >> choice;
	cout << endl;

	while (choice != "N")
	{
		if (choice == "1")
		{
			if (inventory.getProducts(0).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(0);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(0);
					break;
				}
			}
			else 
			{
				cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}

		else if (choice == "2")
		{
			if (inventory.getProducts(1).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(1);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(1);
					break;
				}
			}
			else if (inventory.getProducts(1).getStock() <= 0)
			{
				cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}

		else if (choice == "3")
		{
			if (inventory.getProducts(2).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(2);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(2);
					break;
				}
			}
			else if (inventory.getProducts(2).getStock() <= 0)
			{
				cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}
		else if (choice == "4")
		{
			if (inventory.getProducts(3).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(3);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(3);
					break;
				}
			}
			else if (inventory.getProducts(3).getStock() <= 0)
			{
				cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}
		else if (choice == "5")
		{
			if (inventory.getProducts(4).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(4);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(4);
					break;
				}
			}
			else if (inventory.getProducts(4).getStock() <= 0)
			{
			cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}
		else if (choice == "6")
		{
			if (inventory.getProducts(5).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(5);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(5);
					break;
				}
			}
			else if (inventory.getProducts(5).getStock() <= 0)
			{
				cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}

		else if (choice == "7")
		{
			if (inventory.getProducts(6).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(6);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(6);
					break;
				}
			}
			else if (inventory.getProducts(6).getStock() <= 0)
			{
				cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}

		else if (choice == "8")
		{
			if (inventory.getProducts(7).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(7);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(7);
					break;
				}
			}
			else if (inventory.getProducts(7).getStock() <= 0)
			{
				cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}

		else if (choice == "9")
		{
			if (inventory.getProducts(8).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(8);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(8);
					break;
				}
			}
			else if (inventory.getProducts(8).getStock() <= 0)
			{
				cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}

		else if (choice == "10")
		{
			if (inventory.getProducts(9).getStock() > 0)
			{
				string option;
				cout << "PAYMENT METHOD" << endl << endl;
				cout << "1. Credit Card" << endl << "2. Gift Card" << endl << endl;
				cin >> option;
				cout << endl;

				if (option == "1")
				{
					_client.getCreditCard().discount(9);
					break;
				}
				else if (option == "2")
				{
					_client.getgiftCard().discount(9);
					break;
				}
			}
			else if (inventory.getProducts(9).getStock() <= 0)
			{
				cout << "Sorry, it seems that we are out of stock!" << endl;
			}
		}
		cout << endl << "Press 'N' if you want to finish the purchase" << endl;
		cout << "Choose other product to add to cart: ";
		choice;
		cin >> choice;
		cout << endl;
	}


}

