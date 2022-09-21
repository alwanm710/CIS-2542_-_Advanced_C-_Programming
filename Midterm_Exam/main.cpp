// By Mohammad Alwan

#include <iostream> 
#include "Fam.h"
using namespace std;

int main (){
    
    Friends friends[6];
    
    friends[0] = Friends( "Rachel Green", "Jennifer Aniston", "51", "February 11, 1969");
    friends[1] = Friends( "Monica Geller", "Courteney Cox", "56", "June 15, 1964");
    friends[2] = Friends( "Chandler Bing", "Matthew Perry", "51", "August 19, 1969");
    friends[3] = Friends( "Phoebe Buffay", "Lisa Kudrow", "57", "July 30, 1963");
    friends[4] = Friends( "Joey Tribbiani", "Matt LeBlanc", "53", "July 25, 1967");
    friends[5] = Friends( "Ross Geller", "David Schwimmer", "53", "November 2, 1966");
    
    
    for(int currentFriend = 0; currentFriend < 5; currentFriend++){
        for(int nextFriend = currentFriend + 1; nextFriend < 5; nextFriend++){
            if (friends[currentFriend].getAge() < friends[nextFriend].getAge()){
                string nextNameC = friends[nextFriend].getNameCharacter();
                string nextNameA = friends[nextFriend].getNameActer();
                string nextAge = friends[nextFriend].getAge();
                string nextDOB = friends[nextFriend].getDateOfBirth();
                
                friends[nextFriend] = Friends( friends[currentFriend].getNameCharacter(), friends[currentFriend].getNameActer(), friends[currentFriend].getAge(), friends[currentFriend].getDateOfBirth());
                
                friends[currentFriend] = Friends( nextNameC, nextNameA, nextAge, nextDOB);
            }
        }
    }
    
    cout << "The cast of Friend from oldest to youngest...\n\n";
    
    for(int currentFam = 0; currentFam < 5; currentFam++){
        cout << "Name Character: " <<  friends[currentFam].getNameCharacter() << endl;
        cout << "Name Acter: " <<  friends[currentFam].getNameActer() << endl;
        cout << "Age: " <<  friends[currentFam].getAge() << endl;
        cout << "Date of birth: " <<  friends[currentFam].getDateOfBirth() << endl;
        cout << endl;
    }
    
    
}