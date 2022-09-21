// Example program for Assignment 1
//Mohammad Alwan

#include <iostream>
#include "language.h"

int main(){
    Language languages[3];
    
    languages[0] = Language ("C++", "Compiled", "Hybrid");
    languages[1] = Language ("Java", "Bytecode", "Object-Oriented");
    languages[2] = Language ("JavaScript", "interpreted", "Object-Oriented");
    
    int currentLanguage = 0;
    int input = 0;
    
    while (input != 3){
        
        cout << "Language name: " << languages[currentLanguage].getName() << endl;
        cout << "Translation Type: " << languages[currentLanguage].getTranslationType() << endl;
        cout << "Language name: " << languages[currentLanguage].getName() << endl;
        
        cout << "1. Next language" << endl;
        cout << "2. Previous language" << endl;
        cout << "3. Quit Program" << endl;
        
        switch (input){
            case 1: currentLanguage = (currentLanguage + 1) % 3;
                break;
            case 2: currentLanguage --;
                if (currentLanguage < 0)
                    currentLanguage = 2;
                break;
        }
    }
    
    
    
}