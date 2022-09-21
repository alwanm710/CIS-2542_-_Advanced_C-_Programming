// Programming Challenges 10-1
// By Mohammad Alwan

#include <iostream>
#include <iomanip>

using namespace std;

int countLine(char *);

const int SIZE = 201;

int main(){
    
    char line [SIZE];
    
    cout << "(Max charater it can count is " << (SIZE - 1) <<").\n";
    cout << "Type a line and I well tell you how many charaters you typed: ";
    cin.getline(line, SIZE);
    
    cout << "You typed " << countLine(line) << " charaters. \n";
    
}

int countLine(char *num){
    int total = 0;
    
    while (*num != '\0'){
        total ++;
        num ++;
    }
    
    return total;
}