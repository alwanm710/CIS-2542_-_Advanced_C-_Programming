// Homework Week 1: Part 1/2
// By Mohammad Alwan

#pragma once


#include <string>


class Friends{
private:
    std::string nameCharacter;
    std::string nameActer;
    std::string age;
    std::string dateOfBirth;
    
public:
    Friends(){
        nameCharacter = "Unknown";
        nameActer = "Unknown";
        age = "Unknown";
        dateOfBirth = "Unknown";
        
    }
    
    Friends(std::string nC, std::string nA, std::string a, std::string dOB){
        nameCharacter = nC;
        nameActer = nA;
        age = a;
        dateOfBirth = dOB;
        
    }
    
    std::string getNameCharacter(){
        return nameCharacter;
    }
    
    std::string getNameActer(){
        return nameActer;
    }
    
    std::string getAge(){
        return age;
    }
    
    std::string getDateOfBirth(){
        return dateOfBirth;
    }
    
};
