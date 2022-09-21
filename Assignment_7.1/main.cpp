//  Assignment 7.1
//  By Mohammad Alwan

#include <iostream>
using namespace std;

 void CountDown (int n){
     if (n <= 0)
         cout << "No more parking spaces left.\n";
    else{
        cout << n << " parking spaces left.\n";
        CountDown (n - 1);
    }
 }
 
 
int main(){
    int n = 15;
    CountDown (n);
}
