#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    
	cout << "Enter a word here: ";
    cin >> word;

    cout << "Forword:" << "\t";
    cout << "Backword:" << "\t";
    cout << endl;
    
	for (int i = 0; i < word.length(); i++){
        int f = i;
        int b = (word.length() - 1) - i;
        
		word[f] = toupper(word[f]);
        word[b] = toupper(word[b]);
        
        char letterFront = word[f];
		char letterBack = word[b];
        
		cout << letterFront << "\t\t\t";
        cout << letterBack << "\t";
        cout << endl;
        
        if (i >= (word.length() - 1)){
            cout << word << " is a palindrome! ";
        }
        
        if (letterFront != letterBack){
            for (i++; i < word.length(); i++){
                f = i;
                b = (word.length() - 1) - i;
        
                word[f] = toupper(word[f]);
                word[b] = toupper(word[b]);
        
                letterFront = word[f];
                letterBack = word[b];
        
                cout << letterFront << "\t\t\t";
                cout << letterBack << "\t";
                cout << endl;
            }
            cout << word << " is not a palindrome! ";
            break;
        }
	}
	cout << endl;
	cout << "Original word:  " << word << endl;
}
