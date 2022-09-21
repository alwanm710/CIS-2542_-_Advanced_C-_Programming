#pragma once

#include "TreeNode.h"
#include <iostream>

class Tree{
private:
	TreeNode* root;

	TreeNode* add(int value, TreeNode* p){
		if (p == nullptr)
			p = new TreeNode(value);
		else if (value < p->data)
			p->left = add(value, p->left);
		else if (value > p->data)
			p->right = add(value, p->right);

		return p;
	}

	void postorder(TreeNode* p){
		if (p != nullptr){
			postorder(p->left);
			postorder(p->right);
			std::cout << p->data << " ";
		}
	}
    
    void preorder(TreeNode* p){
		if (p != nullptr){
            std::cout << p->data << " ";
			preorder(p->left);
			preorder(p->right);
		}
	}
    
    void inorder(TreeNode* p){
		if (p != nullptr){
			inorder(p->left);
			std::cout << p->data << " ";
            inorder(p->right);
		}
	}

	bool contains(int key, TreeNode* p){
		if (p == nullptr)
			return false;
		else if (p->data == key)
			return true;
		else if (key < p->data)
			return contains(key, p->left);
		else
			return contains(key, p->right);
	}

public:
	Tree(){
		root = nullptr;
	}

	bool isEmpty(){
		return root == nullptr;
	}

	void add(int value){
		root = add(value, root);
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

	bool contains(int value){
		return contains(value, root);
	}

	~Tree(){
		delete root;
	}
};