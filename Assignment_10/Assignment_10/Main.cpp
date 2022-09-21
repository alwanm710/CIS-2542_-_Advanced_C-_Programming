// Selection Sort

#include <iostream>
using namespace std;

void generateData(int values[], int size){
	for (int i = 0; i < size; i++)
		values[i] = rand() % 1000;
}


void display(int values[], int size){
	for (int i = 0; i < size; i++)
		cout << values[i] << " ";

	cout << endl;
}


void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}


void selectionSort(int values[], int size){
	for (int pass = 0; pass < size; pass++)
		for (int i = 0; i < size - 1; i++) 
			if (values[pass] < values[i])
				swap(values[i], values[pass]);
}


int main()	{
	const int SIZE = 500;
	int numbers[SIZE];

	// create a random data set
	generateData(numbers, SIZE);

	// display unsorted data
	cout << "Unsorted data:\n";
	display(numbers, SIZE);

	// sort the data
	selectionSort(numbers, SIZE);

	// display sorted data
	cout << "\nSorted data:\n";
	display(numbers, SIZE);
}