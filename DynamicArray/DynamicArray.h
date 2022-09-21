#pragma once

class DynamicArray
{
public:
	DynamicArray();			// Constructor
	~DynamicArray();		    // Destructor
	void add(int);			        // Add item to array
	void remove(int);		    // Remove item from array
	void removeAt(int);		// Remove value from given index
	int get(int);			            // Retrieve value from given index
	void display();			        // Display array contents
	int size();				            // Return number of elements
	int getCapacity();		    // Return the capacity

private:
	int capacity;			// Total number of values we can hold
	int used;				    // # of used spaces
	int* list;				    // Pointer to array
	void expand();			// Double the array size
};