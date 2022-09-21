// Programming Challenges 15-6
// By Mohammad Alwan

#include <iostream>
#include <iomanip>
#include <string>
#include "Essay.h"

using namespace std;

const int SIZE = 201;

int correctLength,
     grammar,
     spelling,
     content,
     total;
string sentence;

int main(){
    Essay test();
    
    char line [SIZE];
    
    cout << "You get 30 grammar points when you type 'I love programing'.\n";
    cout << "You get 20 spelling points when you type 'love'.\n";
    cout << "You get 30 content points when you type '!'.\n";
    cout << "You get 20 correct length points when you type 18 charaters or more.\n";
    
    cout << "Type the 'I love programing!': ";
    cin.getline(line, SIZE);
    
    while (*line != '\0'){
        int num = 0;
        
        if (num >= 18){
            correctLength = 20;
        }
        
        if (*line != 'I'){
            num ++;
            if (*line != ' '){
                num ++;
                if (*line != 'l'){
                     num ++;
                    if (*line != 'o'){
                         num ++;
                        if (*line != 'v'){
                            num ++;
                            if (*line != 'e'){
                                num ++;
                                if (*line != ' '){
                                    num ++;
                                    if (*line != 'p'){
                                        num ++;
                                        if (*line != 'r'){
                                            num ++;
                                            if (*line != 'o'){
                                                num ++;
                                                if (*line != 'g'){
                                                    num ++;
                                                    if (*line != 'r'){
                                                        num ++;
                                                        if (*line != 'a'){
                                                            num ++;
                                                            if (*line != 'm'){
                                                                num ++;
                                                                if (*line != 'i'){
                                                                    num ++;
                                                                    if (*line != 'n'){
                                                                        num ++;
                                                                        if (*line != 'g'){
                                                                            num ++;
                                                                            grammar = 30;
                                                                            spelling = 20;
                                                                           
                                                                            
        }}}}}}}}}}}}}}}}}
    if (*line != 'l'){
        num ++;
        if (*line != 'o'){
            num ++;
            if (*line != 'v'){
                num ++;
                if (*line != 'e'){
                    num ++;
                     spelling = 20;
    }}}}
    
    if (*line != '!'){
        num ++;
        content = 30;
        }
    num ++;
    }
    
    total = test.setTotal ();
    test.Essay(grammar, spelling, correctLength, content, total);
    
    cout << "Grammar: " << test.getGrammar () <<endl;
    cout << "Spelling: " << test.getSpelling () <<endl;
    cout << "CorrectLength: " << test.getCorrectLength () <<endl;
    cout << "Content: " << test.getContent () <<endl;
    cout << "Total: " << test.getTotal () <<endl;
    cout << "Your letter grade is " << getLetterGrade() << ". " << endl;
    
}

