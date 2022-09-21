#pragma once

#include <iostream>

class TreeNode
{
public:
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode()
	{
		data = 0;
		left = right = nullptr;
	}

	TreeNode(int newValue)
	{
		data = newValue;
		left = right = nullptr;
	}

	~TreeNode()
	{
		if (left != nullptr)
			delete left;

		if (right != nullptr)
			delete right;

		// DEBUG:
		std::cout << "Deleting " << data << std::endl;
	}
};