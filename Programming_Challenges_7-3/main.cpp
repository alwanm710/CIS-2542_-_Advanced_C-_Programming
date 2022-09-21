// Programming Challenges 7-3
// By Mohammad Alwan

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int SIZE = 5;
int mild, medium, sweet, hot, zesty, lowest, highest, sold, iLowest, iHighest;

void findLowest (string , int );
int validSold (int salsaSold []);



int main() {
    
    string salsaTypes [SIZE] = {"mild", "medium", "sweet", "hot", "zesty" };
    int salsaSold [SIZE] = { mild, medium, sweet, hot, zesty};
    
    for (int i = 0; i < SIZE; i++){
        cout << "How much " << salsaTypes [i] << " salsa was sold? ";
        cin >> salsaSold [i];
        
        while (salsaSold [i] < 0){
            cout << "Enter a number equal to or greater than zero:  ";
            cin >> salsaSold [i];
        }
    }
    
    lowest = salsaSold [0];          // We use this as a defualt to compare to the other variables
    
    for (int i = 1; i < 5; i++) {
        if ( salsaSold [i] < lowest){    // Finds the lowest variable in the array
        lowest = salsaSold [i];
        iLowest = i;
        }
    }
    
    highest = salsaSold [0];          // We use this as a defualt to compare to the other variables
    
    for (int i = 1; i < 5; i++) {
        if ( salsaSold [i] > highest){    // Finds the highest variable in the array
        highest = salsaSold [i];
        iHighest = i;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        cout << "You sold "<< salsaSold [i] << " ";
        cout << salsaTypes [i] << " salsa. " << endl;
        
        }
    
    cout << salsaTypes [iHighest] << " salsa is most sold salsa by ";
    cout << highest << ".\n";
    
    cout << salsaTypes [iLowest] << " salsa is lest sold salsa by ";
    cout << lowest << ".\n";
    
}
