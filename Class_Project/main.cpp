// Program description: Review of C++ basic
// Author: Mohammad Alwan

// Preprocessor directives
#include <iostream>  // Basic I/O capabilities
#include <string>
#include <iomanip>
using namespace std;

// Funtions or protoypes
// <return type> <function name> (<parameter list>)
double calcTip(double billAmt, double tipPct){
    double tipAmt = billAmt * tipPct;
    
    return tipAmt;
    
}

// Main function
int main (){
    string name;
    double billAmt, tipPct;
    
    // Prompt user for name
    cout << "What is your name? ";
    cin >> name;
    
    cout << "Hello, world!" << endl;
    cout << "Hello, " << name << "!\n";
    
    cout << endl << "Enter bill amount:  $";
    cin >> billAmt;
    
    cout << "Enter tip percent: ";
    cin >> tipPct;
    
    double tipAmt = calcTip ( billAmt, tipPct);
    double total = tipAmt + billAmt;
    
    cout << fixed << setprecision (2);
    cout << "Tip amount:  $" << tipAmt << endl;
    cout << "Total:  $" << total << endl;
    
    
    cout << endl << endl;
    
}