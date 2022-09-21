// Programming Challenges 15-1 (ProductionWorker.cpp)
// By Mohammad Alwan

#include <iostream>
#include <iomanip>
#include <string>
#include "ProductionWorker.h"

using namespace std;


ProductionWorker::ProductionWorker() : Employee()
{}

ProductionWorker::ProductionWorker(int Time, double perHour, string name, int number, string date) :
            Employee(string name, int number, string date)
{}


