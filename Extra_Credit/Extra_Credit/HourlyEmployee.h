#pragma once

#include "Employee.h"

class HourlyEmployee : public Employee
{
private:
	double payRate;
	double hours;

public:
	HourlyEmployee(std::string name, double rate, double hoursWorked)
		: Employee()
	{
		setName(name);
		payRate = rate;
		hours = hoursWorked;
	}

	void display()
	{
		Employee::display();
		std::cout << "Hourly rate:  $" << payRate << std::endl;
		std::cout << "Hours worked:  " << hours << std::endl;
	}

	double calcPay()
	{
		return payRate * hours;
	}
};