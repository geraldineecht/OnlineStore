#include "Inventory.h"

Inventory::Inventory() :
	products
{
Product(" Mini Wrap Sundres", 300, 10),
Product(" Floral Midi Dress", 400, 10),
Product(" T-Shirt Dress    ", 100, 10),
Product(" Polo Skater Dress", 300, 10),
Product(" Mini Shirt Dress ", 200, 10),
Product(" Mock Neck Sweater", 150, 10),
Product(" Sherpa Peacoat   ", 270, 10),
Product(" Chesterfield Coat", 280, 10),
Product(" The Straight Pant", 115, 10),
Product("The Ankle Pant   ", 110, 0),
}
{
}

Product Inventory::getProducts(int i)
{
	return products[i];
}

