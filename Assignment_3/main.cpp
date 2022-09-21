// Program to test and demonstrate the Bag class.
// Mohammad Alwan

#include <iostream>
using namespace std;

#include "Bag.h"

int main(){
	Bag intBag;

	cout << "Size:  " << intBag.size();
	cout << "\tCapacity:  " << intBag.getCapacity();
	cout << endl;
    
	if (intBag.isEmpty()) cout << "Bag is empty." << endl;
	else cout << "Bag contains data." << endl;

	for (int i = 0; i < 10; i++){
		int number = rand() % 10;
        intBag.add(number);
		cout << "Adding " << number;
		cout << "\tSize: " << intBag.size();
		cout << "\tCapacity: " << intBag.getCapacity();
		cout << endl;
	}

	cout << "Bag contents:  ";
	intBag.display();

	if (intBag.isEmpty()) cout << "Bag is empty." << endl;
	else cout << "Bag contains data." << endl;

    cout << "\nRemoving All value 8." << endl;
	intBag.removeAll(8);

	cout << "Bag contents:  ";
	intBag.display();

	cout << "\nOccurences of values:\n\n";
	for (int i = 0; i < 10; i++)
		cout << i << ":  " << intBag.countOccurences(i) << endl;
    
    cout << "\nValue at position 6: " << intBag.get(6) << endl;
	cout << "Removing value at position 6\n";
	intBag.removeAt(6);

	cout << "\nArray contents:  ";
	intBag.display();

	cout << "\nRemoving value 7." << endl;
	intBag.remove(7);

	cout << "\nArray contents:  ";
	intBag.display();
    
	cout << "Size:  " << intBag.size();
	cout << "\tCapacity:  " << intBag.getCapacity();
	cout << endl;
}
