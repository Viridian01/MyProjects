#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item
{
	public:
		Item();
		Item(string setName);
		virtual void Hello();
		string name;
};

#endif