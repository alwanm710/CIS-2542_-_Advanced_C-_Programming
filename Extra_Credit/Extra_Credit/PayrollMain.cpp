// Test program for payroll example

#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include <iostream>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 3;
	Employee* employees[NUM_EMPLOYEES];
	employees[0] = new SalariedEmployee("Sal", 34567.89, 26);
	employees[1] = new HourlyEmployee("Harley", 18.26, 40);
	employees[2] = new CommissionEmployee("lewis", 2000, 10);

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		employees[i]->display();
		cout << "Pay amount:  $" << employees[i]->calcPay() << endl;
		cout << endl;
	}
}
