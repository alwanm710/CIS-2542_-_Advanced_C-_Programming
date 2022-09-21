// Test program for LinkedList class

#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(){
	LinkedList<int> list;

	if (list.isEmpty()) cout << "List is empty.\n";
	else cout << "List contains data.\n";

	for (int i = 0; i < 40; i++){
		list.addFront(i + 1);
		list.addBack(i + 2);
	}

	if (list.isEmpty()) cout << "List is empty.\n";
	else cout << "List contains data.\n";

	cout << "List contents:  ";
	list.display();  // uses our ListIterator to display contents

	cout << "\nFind a value\n";
	cout << "Enter a value to search:  ";
	int key;
	cin >> key;

	Node<int>* p = list.find(key);
	if (p == nullptr)
		cout << "Did not find " << key << endl;
	else
		cout << "Found " << key << " at " << p << endl;
    cout << endl;
        
    cout << "Removing front...\n";
	list.removeFront();
	list.display();
    cout << endl;

	cout << "\nRemoving back...\n";
	list.removeBack();
	list.display();
    cout << endl;

    cout << "Removing duplicates...\n";    
    list.removeDuplicates();
	list.display();
    cout << endl;
    
}
