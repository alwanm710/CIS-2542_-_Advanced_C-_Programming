// Search algorithm implementations

int linearCount = 0;
int sortedCount = 0;
int binaryCount = 0;

#include <iostream>
using namespace std;

int linearSearch(int values[], int size, int key){
	for (int i = 0; i < size; i++) {
		if (values[i] == key)
			return i;
		linearCount++;
	}
	return -1;
}

int sortedSearch(int values[], int size, int key){
	for (int i = 0; i < size; i++){
		if (values[i] == key)
			return i;
		sortedCount++;
		if (values[i] > key)
			return -1;
	}

	return -1;
}


int binarySearch(int values[], int size, int key){
	int begin = 0;
	int end = size - 1;
	while (begin <= end){
		int mid = (begin + end) / 2;
		if (values[mid] == key)
			return mid;
		else if (values[mid] > key)
			end = mid - 1;
		else
			begin = mid + 1;
		binaryCount++;
	}

	return -1;
}

int main(){
	const int NUM_KEYS = 100;
	int keys[NUM_KEYS];

	const int SIZE = 100;
	int values[SIZE];

	// generate random data
	int x = 0;
	for (int i = 0; i < SIZE; i++){
		x += (rand() % 9) + 1;
		values[i] = x;
	}

	// generate random search keys
	for (int i = 0; i < NUM_KEYS; i++)
		keys[i] = rand() % 400;

	// display array
	for (int i = 0; i < SIZE; i++)
		cout << values[i] << " ";
	cout << endl;

	// Linear search test
	cout << "\n--------\nLINEAR SEARCH\n--------\n";
	for (int i = 0; i < NUM_KEYS; i++){
		int key = keys[i];
		int position = linearSearch(values, SIZE, key);
		if (position == -1)
			cout << "Value " << key << " not found.\n";
		else
			cout << "Value " << key << " found at index " << position << ".\n";
	}

	// Sorted search test
	cout << "\n--------\nSORTED SEARCH\n--------\n";
	for (int i = 0; i < NUM_KEYS; i++){
		int key = keys[i];
		int position = sortedSearch(values, SIZE, key);
		if (position == -1)
			cout << "Value " << key << " not found.\n";
		else
			cout << "Value " << key << " found at index " << position << ".\n";
	}

	// Sorted search test
	cout << "\n--------\nBINARY SEARCH\n--------\n";
	for (int i = 0; i < NUM_KEYS; i++){
		int key = keys[i];
		int position = binarySearch(values, SIZE, key);
		if (position == -1)
			cout << "Value " << key << " not found.\n";
		else
			cout << "Value " << key << " found at index " << position << ".\n";
	}

	// display summary of metrics
	cout << endl << endl;
	cout << "Linear search comparisons:  " << linearCount << endl;
	cout << "Sorted search comparisons:  " << sortedCount << endl;
	cout << "Binary search comparisons:  " << binaryCount << endl;
}