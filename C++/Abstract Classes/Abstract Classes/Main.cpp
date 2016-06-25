#include <iostream>
#include <string>
#include "Item.h"
#include "Hammer.h"
#include "Fake Arms.h"

using namespace std;

Item* hammer = new Hammer;
Item* fakearms = new FakeArms;

vector<Item*> Inventory;

void getName(string itemToFind) {
	for (unsigned int i = 0; i < Inventory.size(); i++) {
		if (Inventory[i]->name == itemToFind) {
			cout << "Found: " << Inventory[i]->name << endl;
		}
	}
}

void sayHello(string itemToSay) {
	for (unsigned int i = 0; i < Inventory.size(); i++) {
		if (Inventory[i]->name == itemToSay) {
			Inventory[i]->Hello();
		}
	}
}

int main() 
{
	string itemToFind;
	string itemToSay;
	bool inGame = true;
	Inventory.push_back(hammer);
	Inventory.push_back(fakearms);
	while (inGame) {
		cout << "Find what item?" << endl;
		getline(cin, itemToFind);
		getName(itemToFind);
		cout << "Say hello to which item?" << endl;
		getline(cin, itemToSay);
		sayHello(itemToSay);
	}
}