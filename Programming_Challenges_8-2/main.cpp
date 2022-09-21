// Programming Challenges 8-2
// By Mohammad Alwan

#include <iostream>
#include <iomanip>


using namespace std;

int winningTicket;
int const TICKET = 10;

int luckNumbers[TICKET] = { 13579, 26791, 
                                                   26792, 33445,
                                                   55555, 62483,
                                                   77777, 79422,
                                                   85647, 93121};
                                                   
int valideInput(int);

int main() {
    
     cout << "If you enter 7, then your ticket number well be 00007." << endl;
    cout << "Enter winning numbers for this week: ";
    cin >> winningTicket;
    winningTicket = valideInput(winningTicket);
    
    
     for (int i = 0; i < TICKET; i++){
        if  (luckNumbers [i] == winningTicket){
            cout << "You won the lottery!!" << endl;
            cout << "Your winning ticket is " << winningTicket << "."<< endl;
        }
        else if ( i == (TICKET - 1)){
            cout << "You didn't win anything. " << endl;
        }
    }
}


int valideInput(int num){
    while (num < 00000 || num > 99999 ){
        cout << "Enter a number greater than or equal to 00000 , " << endl;
        cout << "and less than or equal to 99999: ";
        cin >> num;
        
    }
    return num;
}