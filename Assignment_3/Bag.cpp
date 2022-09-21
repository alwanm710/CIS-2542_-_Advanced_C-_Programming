#include "Bag.h"
#include <iostream>

Bag::Bag(){
	capacity = 8;
	count = 0;
	list = new int[capacity];
}

Bag::~Bag(){
	delete[] list;
	list = nullptr;
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
    if (count == capacity)
		expand();

	list[count] = item;
	count++;
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

int Bag::getCapacity(){
	return capacity;
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
	return count;
}

void Bag::removeAll(int item){
	// TODO:  Finish this function.
    for(int i = 0; i < count; i++){
        while (list[i] != item && i < count)
            i++;
        if (i < count){
            list[i] = list[count - 1];
            count--;
            i--;
        }
    }
}

void Bag::expand(){
	// double the capacity
	capacity *= 2;

	// create a new array with new capacity
	int* newList = new int[capacity];

	// copy from old array to new array
	for (int i = 0; i < count; i++)
		newList[i] = list[i];

	// delete old array
	delete[] list;

	// point to new array
	list = newList;
}

void Bag::removeAt(int index){
	if (index >= 0 && index < count){
		for (int i = index; i < count - 1; i++)
			list[i] = list[i + 1];
		count--;
	}
}

int Bag::get(int index){
	if (index >= 0 && index < count)
		return list[index];
	return 0;
}
