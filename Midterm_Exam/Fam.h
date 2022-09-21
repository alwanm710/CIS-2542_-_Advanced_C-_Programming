// By Mohammad Alwan

#pragma once


#include <string>
using namespace std;

class Friends{
private:
    string nameCharacter;
    string nameActer;
    string age;
    string dateOfBirth;
    
public:
    Friends(){
        nameCharacter = "Unknown";
        nameActer = "Unknown";
        age = "Unknown";
        dateOfBirth = "Unknown";
        
    }
    
    Friends(string nC, string nA, string a, string dOB){
        nameCharacter = nC;
        nameActer = nA;
        age = a;
        dateOfBirth = dOB;
        
    }
    
    string getNameCharacter(){
        return nameCharacter;
    }
    
    string getNameActer(){
        return nameActer;
    }
    
    string getAge(){
        return age;
    }
    
    string getDateOfBirth(){
        return dateOfBirth;
    }
    
};
