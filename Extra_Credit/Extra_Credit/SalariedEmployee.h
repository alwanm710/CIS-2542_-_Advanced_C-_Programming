#pragma once

#include "Employee.h"

class SalariedEmployee : public Employee
{
private:
	double annualSalary;
	int numPayPeriods;

public:
	SalariedEmployee(std::string name, double salary, int payPeriods)
		: Employee()
	{
		setName(name);
		annualSalary = salary;
		numPayPeriods = payPeriods;
	}

	void display()
	{
		Employee::display();
		std::cout << "Salary:  $" << annualSalary << std::endl;
		std::cout << "Pay periods:  " << numPayPeriods << std::endl;
	}

	double calcPay()
	{
		return annualSalary / numPayPeriods;
	}
};