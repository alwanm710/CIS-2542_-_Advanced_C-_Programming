// Programming Challenges 15-1
// By Mohammad Alwan

#include <iostream>
#include <iomanip>
#include <string>
#include "ProductionWorker.h"

using namespace std;

string name;
int number;
string date;
int Time;
string shift;
double perHour;


int main(){
    ProductionWorker work;
    
    work.Employee();
    work.ProductionWorker();
    
    cout << "Enter emplyee's name: ";
    cin >> name;
    
    cout << "Enter emplyee's number: ";
    cin >> number;
    
    cout << "Enter emplyee's hiring date (Ex 01/05/1999): ";
    cin >> date;
    
    work.Employee(name, number, date);
    
    cout << "Emplyee's shift time (1. Day,  2. Night ): ";
    cin >> Time;
    
    while (Time != 1 && Time !=2 ){
        cout << "Emplyee's shift time (1. Day,  2. Night ): ";
        cin >> Time;
    }
    
    if (Time == 1)
        shift = "Day";
    else
        shift = "Night";
    
    cout << "Emplyee's hourly pay rate: ";
    cin >> perHour;
    
    work.setPerHourlyRate(perHour);
    
     cout << "Emplyee's name is " << name << endl;
     cout << "Emplyee's number is " << number << endl;
     cout << "Emplyee's hiring date is " << date << endl;
     cout << "Emplyee's shift time is " << shift << endl;
     cout << "Emplyee's hourly pay rate is " << perHour << endl;
}
