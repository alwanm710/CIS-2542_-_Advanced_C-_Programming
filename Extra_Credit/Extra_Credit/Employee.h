#pragma once

#include <string>
#include <iostream>

class Employee
{
private:
	std::string name;

public:
	Employee()
	{
		name = "unknown";
	}

	void setName(std::string empName)
	{
		name = empName;
	}

	virtual void display()
	{
		std::cout << "Employee name:  " << name << std::endl;
	}

	virtual double calcPay() = 0;
};