//  Assignment 7.2
//  By Mohammad Alwan

#include <iostream>
using namespace std;

int const CAPACITY = 5;
int sum = 0;

int Array [CAPACITY] = {1, 2, 3, 4, 5};


int TotalSum (int n){
    if (n >= 0)
         sum = Array [n] + TotalSum (n - 1);
    else
        return sum;
 }


int main(){
    cout << "Array contains: ";
    for (int m = 0; m <= (CAPACITY - 1); m++){
        cout << Array[m];
        if ( m >= (CAPACITY - 1))
            cout << ". " << endl;
        else
            cout << ", ";
    }
    
    cout << "The total sum: " << TotalSum(CAPACITY - 1) << endl;
}