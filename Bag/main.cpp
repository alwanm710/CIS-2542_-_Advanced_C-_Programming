// Program to test and demonstrate the Bag class.
// Mohammad Alwan

#include <iostream>
using namespace std;

#include "Bag.h"

int main(){
	Bag intBag;

	if (intBag.isEmpty()) cout << "Bag is empty." << endl;
	else cout << "Bag contains data." << endl;

	for (int i = 0; i < 8; i++){
		int number = rand() % 10;
		intBag.add(number);
	}

	cout << "Bag contents:  ";
	intBag.display();

	if (intBag.isEmpty()) cout << "Bag is empty." << endl;
	else cout << "Bag contains data." << endl;

	int item;
	cout << "Which item to remove?  ";
	cin >> item;

	intBag.remove(item);
	cout << "Bag contents:  ";
	intBag.display();

	cout << "\nOccurences of values:\n\n";
	for (int i = 0; i < 10; i++)
		cout << i << ":  " << intBag.countOccurences(i) << endl;

}