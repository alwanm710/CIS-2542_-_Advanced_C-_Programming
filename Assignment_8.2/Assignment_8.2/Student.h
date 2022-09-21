#pragma once

#include <string>

class Student{
private:
	int studentID;
	std::string firstName;
	std::string lastName;
	std::string dateOfBirth;

public:
	Student(int id, std::string first, std::string last, std::string DOB){
		studentID = id;
		firstName = first;
		lastName = last;
		dateOfBirth = DOB;
	}

	int getID(){
		return studentID;
	}

	void setFirstName(std::string name){
		firstName = name;
	}

	void setLastName(std::string name){
		lastName = name;
	}

	void setDateOfBirth(std::string DOB){
		dateOfBirth = DOB;
	}

	std::string getFirstName(){
		return firstName;
	}

	std::string getLastName(){
		return lastName;
	}

	std::string getDateOfBirth(){
		return dateOfBirth;
	}
};