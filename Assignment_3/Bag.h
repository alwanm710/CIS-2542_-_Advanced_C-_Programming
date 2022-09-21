#pragma once

class Bag{
private:
    int capacity;     
	int* list;	                      
	int count;                                          // number of elements in the bag
    void expand();			                         // Double the array size

public:
	Bag();                                               // Constructor
    ~Bag();                                             // Destructor
	bool isEmpty();                                // Tell if bag is empty
	bool add(int);                           // Add item to bag
	void remove(int);                     // Remove item from bag
	void display();                                  // Show bag contents
	int getCapacity();                                   // Return capacity of bag
	int countOccurences(int);        // Count occurences of item
	int size();                                          // Return size of bag
	void removeAll(int);                // Remove all instances of item
    void removeAt(int);		// Remove value from given index
    int get(int);			            // Retrieve value from given index
};