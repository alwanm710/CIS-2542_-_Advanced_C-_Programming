#pragma once

#include "Student.h"
#include <iostream>

class TreeNode{
public:
	Student* data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(){
		data = nullptr;
		left = right = nullptr;
	}

	TreeNode(Student* student){
		data = student;
		left = right = nullptr;
	}

	~TreeNode(){
		delete data;

		if (left != nullptr)
			delete left;

		if (right != nullptr)
			delete right;

		// DEBUG:
		std::cout << "Deleting " << data << std::endl;
	}
};