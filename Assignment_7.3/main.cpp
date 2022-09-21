//  Assignment 7.3
//  By Mohammad Alwan

#include <iostream>
using namespace std;

int const CAPACITY = 5;
int sum = 0;

int Array [CAPACITY] = {1, 2, 3, 4, 5};


int DisplayReverse (int n){
    cout << Array[n];
    if ( n <= 0)
        cout << ". \n" << endl;
    else{
        cout << ", ";
        DisplayReverse (n - 1);
    }
}


int main(){
    cout << "Array contains:            ";
    for (int m = 0; m <= (CAPACITY - 1); m++){
        cout << Array[m];
        if ( m >= (CAPACITY - 1))
            cout << ". \n" << endl;
        else
            cout << ", ";
    }
    
    cout << "Array contains in reverse: " << DisplayReverse (CAPACITY - 1);
    
}