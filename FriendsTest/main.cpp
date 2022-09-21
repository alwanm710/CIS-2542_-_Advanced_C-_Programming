// Homework Week 1: Part 2/2
// By Mohammad Alwan

#include <iostream> 
#include "Friends.h"
using namespace std;

int main (){
    
    Friends friends[6];
    
    friends[0] = Friends( "Rachel Green", "Jennifer Aniston", "51", "February 11, 1969");
    friends[1] = Friends( "Monica Geller", "Courteney Cox", "56", "June 15, 1964");
    friends[2] = Friends( "Chandler Bing", "Matthew Perry", "51", "August 19, 1969");
    friends[3] = Friends( "Phoebe Buffay", "Lisa Kudrow", "57", "July 30, 1963");
    friends[4] = Friends( "Joey Tribbiani", "Matt LeBlanc", "53", "July 25, 1967");
    friends[5] = Friends( "Ross Geller", "David Schwimmer", "53", "November 2, 1966");
    
    int currentFriend = 0;
    int input = 0;
    
    while (input != 3){
        
        
        cout << "Name Character: " <<  friends[currentFriend].getNameCharacter() << endl;
        cout << "Name Acter: " <<  friends[currentFriend].getNameActer() << endl;
        cout << "Age: " <<  friends[currentFriend].getAge() << endl;
        cout << "Date of birth: " <<  friends[currentFriend].getDateOfBirth() << endl;
        
        
        
        cout << "1. Next Friends cast member" << endl;
        cout << "2. Previous Friends cast member" << endl;
        cout << "3. Quit" << endl;
        
        cin >> input;
        
        while (input > 3 || input < 1){
            cout << "Enter 1, 2, or 3: ";
            cin >> input;
        }
            
        if (input == 1){
            currentFriend++;
            if (currentFriend > 5)
                currentFriend = 0;
        }
        else if (input == 2){
            currentFriend--;
            if (currentFriend < 0)
                currentFriend = 5;
        }
        else{};
    }
    
}