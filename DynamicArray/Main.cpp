// Test program for DynamicArray class

#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main()
{
	DynamicArray numbers;

	cout << "Size:  " << numbers.size();
	cout << "\tCapacity:  " << numbers.getCapacity();
	cout << endl;

	for (int i = 0; i < 20; i++)
	{
		int value = i * 2;
		numbers.add(value);
		cout << "Adding " << value;
		cout << "\tSize: " << numbers.size();
		cout << "\tCapacity: " << numbers.getCapacity();
		cout << endl;
	}

	cout << "\nArray contents:  ";
	numbers.display();

	cout << "\nValue at position 6: " << numbers.get(6) << endl;
	cout << "Removing value at position 6\n";
	numbers.removeAt(6);

	cout << "\nArray contents:  ";
	numbers.display();

	cout << "\nRemoving value 22." << endl;
	numbers.remove(22);

	cout << "\nArray contents:  ";
	numbers.display();

	cout << "Size:  " << numbers.size();
	cout << "\tCapacity:  " << numbers.getCapacity();
	cout << endl;
}