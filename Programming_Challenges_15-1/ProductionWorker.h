// Programming Challenges 15-1 (ProductionWorker.h)
// By Mohammad Alwan

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include <string>
#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee{
    
private:
    int shift;
    double perHourlyRate;
    
public:
    
    ProductionWorker()
	{  shift = 0 ; perHourlyRate = 0;}
    
    ProductionWorker(int sh, double pe)
	{  shift = sh; perHourlyRate = pe;}



    void setPerHourlyRate(double pay)
        {  perHourlyRate = pay ;  }
    
    void setShift(int ti)
        {  shift = ti;  }    



    int getShift()
        {  return shift;  }
    
    int getPerHourlyRate()
        {  return shift;  }
    
};
#endif