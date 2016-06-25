#include "Item.h"

Item::Item()
{
	name = "Default Name";
}

Item::Item(string setName)
{
	name = setName;
}

void Item::Hello() 
{
	cout << "Hello from Default Item." << endl;
}
