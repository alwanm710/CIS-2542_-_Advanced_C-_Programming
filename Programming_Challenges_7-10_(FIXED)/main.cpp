// Programming Challenges 7-10
// By Mohammad Alwan

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int answerSize = 20;

int rightAnswer, wrongAnswer;

string correctAnswer [ answerSize];
string question [ answerSize];


int main() {
    
    string correctAnswer [answerSize] = {"A", "D", "B", "B", "C",
                                                                  "B", "A", "B", "C", "D",
                                                                  "A", "C", "D", "B", "D",
                                                                  "C", "C", "A", "D", "B"};
    
    // Asks for answer
    for (int i = 0; i < answerSize; i++){
        cout << "Question " << (i + 1) << " answer : ";
        cin >> question [i] ;
        
        // Validates the answer
        while ( "A" != question [i] && "B" != question [i] && "C" != question [i] && "D" != question [i]){
            cout << "Enter A, B, C, or D: ";
            cin >> question [i] ;
        }
        
    }
    
    // Checks for right and wrong answer
    for (int i = 0; i < answerSize; i++){
        if  (correctAnswer [i] == question [i]){
            rightAnswer = rightAnswer +1;
        }
        else{
            wrongAnswer = wrongAnswer + 1;
            cout << "You got question " << (i + 1) << " wrong.\n";
        }
    }
    
    if (rightAnswer >= 15){
        cout << "Congratulation!! You Pass!!";
    }
    else{
        cout << "You fail. Try again.";
    }
    
    cout << "You got " << rightAnswer << " right answers.\n";
    cout << "You got " << wrongAnswer << " wrong answers.\n";
    
}