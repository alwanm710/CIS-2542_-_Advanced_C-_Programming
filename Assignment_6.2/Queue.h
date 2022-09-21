#pragma once

#include "LinkedList.h"

template <class T>
class Queue{
private:
	LinkedList<T> list;

public:
	void enqueue(T value){
		list.addBack(value);
	}

	void dequeue(){
		list.removeFront();
	}

	void display(){
		list.display();
	}

	T getFront(){
		ListIterator<T>* iter = list.getIterator();
		if (iter->next())
			return iter->getValue();
	}

	bool isEmpty(){
		return list.isEmpty();
	}
};
