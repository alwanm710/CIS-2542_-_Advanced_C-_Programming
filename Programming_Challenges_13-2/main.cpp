// Programming Challenges 13-2
// By Mohammad Alwan

#include <iostream>
#include <iomanip>
#include "Employee.h"

void updateEmpData(Employee &, Employee &);
void displayEmpData(const Employee);

int main()
{
    Employee susanM("Susan Mayers", 47899, "Accounting", "Vice President");
    Employee markJ("Mark Jones", 39119);
    Employee joyR;

    std::cout << "ISHIKAWA FRUIT COMPANY - EMPLOYEE DATABASE\n\n";


    std::cout << "\nCurrent Employee Data:\n"
               << "----------------------------------------";
    displayEmpData(susanM);
    displayEmpData(markJ);
    displayEmpData(joyR);


    updateEmpData(markJ, joyR);


    std::cout << "\n\nUpdated Employee Data:\n"
               << "----------------------------------------";
    displayEmpData(susanM);
    displayEmpData(markJ);
    displayEmpData(joyR);

    std::cout << "\n\nISHIKAWA FRUIT COMPANY - Your number one fruits supplier!";

    std::cin.ignore();
    std::cin.get();

    return 0;
}



void updateEmpData(Employee &markJ, Employee &joyR)
{
    // Update the data for the markJ object
    markJ.setDepartment("IT");
    markJ.setPosition("Programmer");

    // Set data for the joyR object
    joyR.setName("Joy Rogers");
    joyR.setIdNumber(81774);
    joyR.setDepartment("Manufacturing");
    joyR.setPosition("Engineer");
}


void displayEmpData(const Employee empData)
{
    std::cout << "\nEmployee Name: " << std::setw(25) << empData.getName() << "\n"
                 << "ID Number:     "    << std::setw(25) << empData.getIdNumber() << "\n"
                 << "Department:    "   << std::setw(25) << empData.getDepartment() << "\n"
                 << "Position:      "   << std::setw(25) << empData.getPosition() << "\n";
}