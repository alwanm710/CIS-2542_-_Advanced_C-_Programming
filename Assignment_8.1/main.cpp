// Test program for binary search tree

#include "Tree.h"
#include <iostream>
using namespace std;

int main()
{
	Tree tree;
	int testData[9] = { 4, 6, 8, 2, 9, 1, 5, 7, 3 };

	if (tree.isEmpty()) cout << "Tree is empty.\n";
	else cout << "Tree contains data.\n";

	for (int i = 0; i < 9; i++)
		tree.add(testData[i]);

	if (tree.isEmpty()) cout << "Tree is empty.\n";
	else cout << "Tree contains data.\n";

	cout << "\nPreorder:  ";
	tree.preorder();

	cout << "\nInorder:  ";
	tree.inorder();

	cout << "\nPostorder:  ";
	tree.postorder();

	int input = 0;
	while (input != -1)
	{
		cout << "Enter search key (-1 to quit):  ";
		cin >> input;

		if (input != -1)
		{
			if (tree.contains(input))
				cout << "Yes, " << input << " was found.\n";
			else
				cout << "No, " << input << " was not found.\n";
		}
	}

}