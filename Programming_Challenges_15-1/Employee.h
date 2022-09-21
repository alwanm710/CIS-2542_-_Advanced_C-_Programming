// Programming Challenges 15-1 (Employee.h)
// By Mohammad Alwan


#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;


class Employee
{
private:
        string name;                   // Holds the employee's name
        int empNumber;            // Holds the employee's number
        string hireDate;                   // Holds the employee's hiring date

public:

        // Default employee's name and number
        Employee()
            { name = "Blank"; empNumber = 0; hireDate = " ";}
        
        Employee(string na, int nu, string da)
            { name = na; empNumber = nu; hireDate = da}
        
        void setName(string na)
            { name = na; }

        void setEmpID(int nu)
            { empNumber = nu; }

        void setEmpHireDate(string da)
            { hireDate = da; }



        string getName() const
            { return name;}
            
        int   getEmpNumber() const
            { return empNumber;}
            
        int    getHireDate() const
            { return hireDate;}
            

};

#endif

