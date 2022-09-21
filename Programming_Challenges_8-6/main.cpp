// Programming Challenges 8-6
// By Mohammad Alwan

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

void selectionSort (string [], int );

int main() {
    const int NUM_NAMES = 20;
    
    string names [NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
                                                            "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                                            "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                                                            "Looney, Joe", "Wolfe, Bill", "James, Jean",
                                                            "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                                                            "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                                                            "Pike, Gordon", "Holland, Beth" };
    
    selectionSort ( names, NUM_NAMES);
    
    
    cout << "Here are the names.\n";
    cout << "It is sorted by last name.\n";
    for (int sort = 0; sort < NUM_NAMES; sort++)
        cout << names[sort] << endl;
    
    
}

void selectionSort (string name [], int num){
    
    int minIndex;
    string minValue;
    
    for (int start = 0; start < (num - 1); start++){
        
        minIndex = start;
        minValue = name[start];
        
        for (int i = (start +1); i < num; i++){
            
            if(name[i] <= minValue){
                minValue = name[i];
                minIndex = i;
            }
        }
        swap(name[minIndex], name[start]);
    }
    
}
