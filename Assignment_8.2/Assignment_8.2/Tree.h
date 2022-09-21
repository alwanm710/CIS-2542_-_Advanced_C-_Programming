#pragma once

#include "TreeNode.h"
#include <iostream>

class Tree {
private:
	TreeNode* root;

	TreeNode* add(Student* stu, TreeNode* p){
		if (p == nullptr)
			p = new TreeNode(stu);
		else if (stu->getID() < p->data->getID())
			p->left = add(stu, p->left);
		else if (stu->getID() > p->data->getID())
			p->right = add(stu, p->right);

		return p;
	}

	void preorder(TreeNode* p) {
		if (p != nullptr) {
			std::cout << "ID:  " << p->data->getID() << std::endl;
			std::cout << "Name:  " << p->data->getLastName()
				<< ", " << p->data->getFirstName() << std::endl;
			std::cout << "Date of Birth:  " << p->data->getDateOfBirth() << std::endl;
			
			preorder(p->left);
			preorder(p->right);
		}
	}

	void postorder(TreeNode* p){
		if (p != nullptr){
			postorder(p->left);
			postorder(p->right);

			std::cout << "ID:  " << p->data->getID() << std::endl;
			std::cout << "Name:  " << p->data->getLastName()
				<< ", " << p->data->getFirstName() << std::endl;
			std::cout << "Date of Birth:  " << p->data->getDateOfBirth() << std::endl;
		}
	}

	void inorder(TreeNode* p){
		if (p != nullptr){
			inorder(p->left);

			std::cout << "ID:  " << p->data->getID() << std::endl;
			std::cout << "Name:  " << p->data->getLastName()
				<< ", " << p->data->getFirstName() << std::endl;
			std::cout << "Date of Birth:  " << p->data->getDateOfBirth() << std::endl;
			std::cout << std::endl;

			inorder(p->right);
		}
	}

	bool contains(int key, TreeNode* p){
		if (p == nullptr)
			return false;
		else if (p->data->getID() == key)
			return true;
		else if (key < p->data->getID())
			return contains(key, p->left);
		else
			return contains(key, p->right);
	}

	Student* find(int key, TreeNode* p){
		if (p == nullptr)
			return nullptr;
		else if (p->data->getID() == key) {
			std::cout << "ID:  " << p->data->getID() << std::endl;
			std::cout << "Name:  " << p->data->getLastName()
				<< ", " << p->data->getFirstName() << std::endl;
			std::cout << "Date of Birth:  " << p->data->getDateOfBirth() << std::endl;
			std::cout << std::endl;
			return p->data;
		}
		else if (key < p->data->getID())
			return find(key, p->left);
		else
			return find(key, p->right);
	}


public:
	Tree(){
		root = nullptr;
	}

	bool isEmpty(){
		return root == nullptr;
	}

	void add(Student* stu){
		root = add(stu, root);
	}

	void preorder(){
		preorder(root);
		std::cout << std::endl;
	}

	void inorder(){
		inorder(root);
		std::cout << std::endl;
	}

	void postorder(){
		postorder(root);
		std::cout << std::endl;
	}

	bool contains(int id){
		return contains(id, root);
	}

	Student* find(int id){
		return find(id, root);
	}

	~Tree(){
		delete root;
	}
};