#include "DynamicArray.h"
#include <iostream>


DynamicArray::DynamicArray(){
	capacity = 8;
	used = 0;
	list = new int[capacity];
}

DynamicArray::~DynamicArray(){
	delete[] list;
	list = nullptr;
}

void DynamicArray::add(int newValue){
	if (used == capacity)
		expand();

	list[used] = newValue;
	used++;
}

void DynamicArray::expand(){
	// double the capacity
	capacity *= 2;

	// create a new array with new capacity
	int* newList = new int[capacity];

	// copy from old array to new array
	for (int i = 0; i < used; i++)
		newList[i] = list[i];

	// delete old array
	delete[] list;

	// point to new array
	list = newList;
}

void DynamicArray::remove(int value){
	int index = 0;
	while (index < used)
	{
		if (list[index] == value)
		{
			for (int i = index; i < used - 1; i++)
				list[i] = list[i + 1];
			used--;
		}
		else 
			index++;
	}
}

void DynamicArray::removeAt(int index){
	if (index >= 0 && index < used)
	{
		for (int i = index; i < used - 1; i++)
			list[i] = list[i + 1];
		used--;
	}
}

int DynamicArray::get(int index){
	if (index >= 0 && index < used)
		return list[index];

	return 0;
}

void DynamicArray::display(){
	for (int i = 0; i < used; i++)
		std::cout << list[i] << " ";

	std::cout << std::endl;
}

int DynamicArray::size(){
	return used;
}

int DynamicArray::getCapacity(){
	return capacity;
}
