#include "Bag.h"
#include <iostream>

Bag::Bag(){
	count = 0;
}

bool Bag::isEmpty(){
	return count == 0;
}

void Bag::display(){
	for (int i = 0; i < count; i++)
		std::cout << list[i] << " ";

	std::cout << std::endl;
}

bool Bag::add(int item){
	if (count < CAPACITY){
		list[count] = item;
		count++;
		return true;
	}
	return false;
}

void Bag::remove(int item){
	int pos = 0;
	while (list[pos] != item && pos < count)
		pos++;

	if (pos < count){
		list[pos] = list[count - 1];
		count--;
	}
}

int Bag::capacity(){
	return CAPACITY;
}

int Bag::countOccurences(int item){
	int counter = 0;
	for (int i = 0; i < count; i++)
		if (list[i] == item)
			++counter;

	return counter;
}

int Bag::size(){
	// TODO:  Finish this function.
	return 0;
}

void Bag::removeAll(int item){
	// TODO:  Finish this function.
}
