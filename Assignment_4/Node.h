#pragma once

#include <iostream>


class Node{
public:
	int data;
	Node* next; // self-referential

	Node() {
		data = 0;
		next = nullptr;
	}

	Node(int value){
		data = value;
		next = nullptr;
	}

	~Node(){
		if (next != nullptr)
			delete next;

		// DEBUG:
		std::cout << "Deleting " << data << std::endl;
	}
};