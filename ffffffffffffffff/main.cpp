#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class InventoryItem {
private:

	int itemId;
	int quantity;
	double cost;

public:

	InventoryItem() {
		itemId = 0;
		quantity = 0;
		cost = 0;
	}

	InventoryItem(int itemId, int quantity, double cost) throw (int) {
		if (!setItemId(itemId)) throw -1;
		if (!setQuantity(quantity)) throw -1;
		if (!setCost(cost)) throw -1;
	}

	bool setItemId(int itemId) {
		if (itemId > 0) {
			this->itemId = itemId;
			return true;
		} else {
			return false;
		}
	}

	bool setQuantity(int quantity) {
		if (quantity > 0) {
			this->quantity = quantity;
			return true;
		} else {
			return false;
		}
	}

	bool setCost(double cost) {
		if (cost > 0) {
			this->cost = cost;
			return true;
		} else {
			return false;
		}
	}

	int getItemId() {
		return itemId;
	}

	int getQuantity() {
		return quantity;
	}

	double getCost() {
		return cost;
	}

	double getTotalCost() {
		return (quantity * cost);
	}
};

void clearScr()
{
    #ifdef _WIN32
        system("CLS");
    #else
        cout << "\033[2J\033[1;1H";
    #endif
}

void holdScr()
{
    cout << endl;
    cout << "Press any key to continue...";
   
    cin.sync();
    cin.clear();
    cin.get();
}

int getPositiveInt(string inputRequest) {
	cin.sync();
	cin.clear();

	int num;
	do {
		cout << inputRequest;
		cin >> num;
		if (num < 0)
			cout << "[Error] Invalid entry" << endl;
	} while (num < 0);

	return num;
}

double getPositiveDouble(string inputRequest) {
	cin.sync();
	cin.clear();

	double num;
	do {
		cout << inputRequest;
		cin >> num;
		if (num < 0)
			cout << "[Error] Invalid entry" << endl;
	} while (num < 0);

	return num;
}

int printMenu(int numItems) {
	clearScr();

	cout << "CISP400             Chapter 13 Programming Challenge 2              Brian Moody" << endl;
	cout << endl;
	cout << endl;

	cout << "There are [" << numItems << "] items loaded in the inventory" << endl;
	cout << endl;

	cout << "   [1] Add inventory item" << endl;
	cout << "   [2] Display inventory" << endl;
	cout << "   [3] Exit" << endl;
	cout << endl;

	int option;
	cout << "Enter your choice: ";
	cin >> option;

	if (option < 1 || option > 3) {
        cout << endl;
        cout << "[Error] Invalid option" << endl;
		holdScr();
    }

    return option;
}

void addInventoryItem(vector<InventoryItem> &inventory) {
	clearScr();

	InventoryItem *item = new InventoryItem();
	
	item->setItemId(getPositiveInt("Enter the item's Id: "));
	item->setQuantity(getPositiveDouble("Enter the item's quantity: "));
	item->setCost(getPositiveDouble("Enter the item's cost: "));

	inventory.push_back(*item);
}

void displayInventory(vector<InventoryItem> &inventory) {
	clearScr();

	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);

	int count = 0;
	for (vector<InventoryItem>::iterator it = inventory.begin(); it != inventory.end(); it++) {
		cout << "[" << ++count << "]" << endl;
		cout << "      Item Id: " << it->getItemId() << endl;
		cout << "     Quantity: " << it->getQuantity() << endl;
		cout << "Cost per item: $" << it->getCost() << endl;
		cout << "   Total cost: $" << it->getTotalCost() << endl;
		cout << endl;
	}
}


int main() {
	vector<InventoryItem> inventory;

	int option;
	do {
		option = printMenu(inventory.size());

		switch (option) {
			case 1: 
				addInventoryItem(inventory); 
				break;
			case 2: 
				displayInventory(inventory);
				holdScr();
				break;
		}
	} while (option != 3);

	return 0;
}