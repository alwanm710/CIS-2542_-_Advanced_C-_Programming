// Programming Challenges 10-4
// By Mohammad Alwan

#include <iostream>
#include <iomanip>

using namespace std;

int countLine(char *);

const int SIZE = 201;

int main(){
    
    char line [SIZE];
    
    cout << "(Max charater it can take is " << (SIZE - 1) <<").\n";
    cout << "Type a line. I well tell you how many words you typed ";
    cout << "and the average letters for each word: ";
    cin.getline(line, SIZE);
    
    countLine(line);
    
}

int countLine(char *num){
    int word = 1,
         letters = 0,
         oldLetter = 0,
         Currentletter;
    
    while (*num != '\0'){
       if (*num == ' '){
           Currentletter = letters - oldLetter;
           cout << "Word " << word << " has an average of ";
           cout  << Currentletter << " letters. \n";
           oldLetter = letters --;
           word ++;
       }
       letters ++;
       num ++;
    }
    Currentletter = letters - oldLetter;
    cout << "Word " << word << " has an average of ";
    cout << Currentletter << " letters. \n";
    
    return 0;
}