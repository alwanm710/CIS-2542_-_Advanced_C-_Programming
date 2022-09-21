// Programming Challenges 10-3
// By Mohammad Alwan

#include <iostream>
#include <iomanip>

using namespace std;

int countLine(char *);

const int SIZE = 201;

int main(){
    
    char line [SIZE];
    
    cout << "(Max charater it can take is " << (SIZE - 1) <<").\n";
    cout << "Type a line and I well tell you how many words you typed: ";
    cin.getline(line, SIZE);
    
    cout << "You typed " << countLine(line) << " words. \n";
    
}

int countLine(char *num){
    int total = 1;
    
    while (*num != '\0'){
       if (*num == ' ')
           total ++;
        num ++;
    }
    
    return total;
}