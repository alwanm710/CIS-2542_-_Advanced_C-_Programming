#include "Employee.h"


Employee::Employee(string empName, int empID, string empDept, string empPos)
{
    name = empName;
    idNumber = empID;
    department = empDept;
    position = empPos;
}


Employee::Employee(string empName, int empID)
{
    name = empName;
    idNumber = empID;
    department = " ";
    position = " ";
}


Employee::Employee()
{
    name = " ";
    idNumber = 0;
    department = " ";
    position = " ";
}


void Employee::setName(string empName)
{
    name = empName;
}


void Employee::setIdNumber(int empID)
{
    idNumber = empID;
}


void Employee::setDepartment(string empDep)
{
    department = empDep;
}


void Employee::setPosition(string empPos)
{
    position = empPos;
}


string Employee::getName() const
{
    return name;
}


int Employee::getIdNumber() const
{
    return idNumber;
}


string Employee::getDepartment() const
{
    return department;
}


string Employee::getPosition() const
{
    return position;
}