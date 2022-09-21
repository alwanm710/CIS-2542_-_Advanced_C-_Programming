#pragma once

#include "Node.h"

class LinkedList{
private:
	Node* first;

public:
	LinkedList();
	~LinkedList();
	bool isEmpty();
	void addFront(int value);
	void addBack(int value);
	void removeFront();
	void removeBack();
	void display();
	Node* find(int value);
    void removeDuplicates();
};