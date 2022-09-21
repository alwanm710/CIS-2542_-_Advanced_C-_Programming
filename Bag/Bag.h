#pragma once

class Bag{
private:
	static const int CAPACITY = 10;     // capacity of bag (max number of things it can hold)
	int list[CAPACITY];	                      // structure for holding data
	int count;                                          // number of elements in the bag

public:
	Bag();                                               // Constructor
	bool isEmpty();                                // Tell if bag is empty
	bool add(int item);                           // Add item to bag
	void remove(int item);                     // Remove item from bag
	void display();                                  // Show bag contents
	int capacity();                                   // Return capacity of bag
	int countOccurences(int item);        // Count occurences of item
	int size();                                          // Return size of bag
	void removeAll(int item);                // Remove all instances of item
};