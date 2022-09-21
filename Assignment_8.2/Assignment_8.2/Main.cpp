// Test program for binary search tree

#include "Tree.h"
#include <iostream>
using namespace std;

int main(){
	Tree tree;
	
	if (tree.isEmpty()) cout << "Tree is empty.\n";
	else cout << "Tree contains data.\n";

	tree.add(new Student(5, "Buddy", "Parrot", "10/09/1990"));
	tree.add(new Student(25, "Tom", "Elf", "02/29/1979"));
	tree.add(new Student(27, "Bob", "Tree", "02/06/1998"));
	tree.add(new Student(9, "April", "Rose", "03/16/2000"));
	tree.add(new Student(4, "Lewis", "Bread", "12/16/2002"));
	tree.add(new Student(100, "Judy", "Funbread", "11/28/1986"));

	if (tree.isEmpty()) cout << "Tree is empty.\n";
	else cout << "Tree contains data.\n";

	cout << "\nInorder:  " << endl;
	tree.inorder();

	/*cout << "\nPreorder:  " << endl;
	tree.preorder();

	cout << "\nPostorder:  " << endl;
	tree.postorder();*/

	int input = 0;
	while (input != -1){
		cout << "Enter search key (-1 to quit):  ";
		cin >> input;

		if (input != -1){
			if (tree.contains(input)) {
				cout << "Yes, " << input << " was found.\n\n";
				tree.find(input);
			}
			else
				cout << "No, " << input << " was not found.\n";
		}
	}

}