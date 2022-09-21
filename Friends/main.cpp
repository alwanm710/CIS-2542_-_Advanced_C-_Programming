// Homework Week 1: Part 1/2
// By Mohammad Alwan

#pragma once
#include <string>
#include <iomanip>
#include <iostream>



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
    
    Friends(std::string nameCharacter, std::string nameActer, std::string age, std::string dateOfBirth){
        nameCharacter = nameCharacter;
        nameActer = nameActer;
        age = age;
        dateOfBirth = dateOfBirth;
        
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