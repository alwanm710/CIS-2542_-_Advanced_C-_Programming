#pragma once

#include <iostream>

template <class T>
class Node{
public:
	T data;
	Node* next; // self-referential

	Node() {
		next = nullptr;
	}

	Node(T value){
		data = value;
		next = nullptr;
	}

	~Node(){
		if (next != nullptr)
			delete next;
	}
};
