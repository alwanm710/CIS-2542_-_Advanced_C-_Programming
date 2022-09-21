#pragma once

#include "Employee.h"

class CommissionEmployee : public Employee{
private:
	double sales;
	double commissionPercent;

public:
	CommissionEmployee(std::string name, double TotalSales, double Percent)
		: Employee()
	{
		setName(name);
		sales = TotalSales;
		commissionPercent = Percent;
	}

	void display(){
		Employee::display();
		std::cout << "Total Sales:  $" << sales << std::endl;
		std::cout << "Commission Percent:  %" << (commissionPercent / 100) << std::endl;
	}

	double calcPay(){
		return sales * (commissionPercent / 100);
	}
};