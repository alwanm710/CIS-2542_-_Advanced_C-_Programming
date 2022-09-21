//  This program gets a series of test scores and
//  calculates the average of the scores with the
//  lowest score  dropped.

#include <iostream>
#include <iomanip>
using namespace std;

//  Function prototypes
void getTestScores (double [], int);
double getTotal (const double [], int);
double getLowest (const double [], int);

int main(){
    const int SIZE = 4;                  //  Array size
    double testScores [SIZE],       //  Array of test scores
                total,                            //  Total of test scores
                lowestScore,                //  Lowest test score
                average;                       //  Average test score
    
    //  Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);
    
    
    
}
