// Programming Challenges 9-3
// By Mohammad Alwan

#include <iostream>
#include <iomanip>


using namespace std;


int validNumTest (int);

int valideInput(double [], int);

void selectionSort (double [], int );



int main() {
    
    double *tests = nullptr,
                Total = 0,
                average;
    
    int numTest, count;
    
    cout << "How many test(s) are you going to input? ";
    cin >> numTest;
    numTest = validNumTest (numTest);
    
    tests = new double [numTest];
    
    cout << "Enter you test score(s) below.\n";
    
    for (count = 0; count < numTest; count++){
        cout << "Test " << (count + 1 ) << ": ";
        cin >> tests[count];
        
        tests[count] = valideInput(tests, count);
        
    }
    
    selectionSort (tests, numTest);
    
    for (count = 2; count < numTest; count++)
        Total += tests[count];
    
    average = Total / (numTest - 2);
    
    cout << "Your average test score is " << average << endl;
    
    cout << "You test score(s) are : ";
    
    for (count = 0; count < (numTest - 1); count++ )
        cout << tests[count] << ", " ;
    
    int num = (numTest - 1);
     cout << tests[num] << ". \n" ;
    
    delete [] tests;
    tests = nullptr;
    
}


int validNumTest (int num){
    while (num < 0){
        cout << "Enter a number equal to or greater than one:  ";
        cin >> num;
        
    }
    return num;
}

int valideInput(double test[], int num){
while (test[num] < 0 || test[num] > 100 ){
        cout << "Enter a number greater than or equal to 0 , " << endl;
        cout << "and less than or equal to 100: ";
        cin >> test[num];
        
    }
    return test[num];
}

void selectionSort (double name [], int num){
    
    int minIndex;
    double minValue;
    
    for (int start = 0; start < (num - 1); start++){
        
        minIndex = start;
        minValue = name[start];
        
        for (int i = (start +1); i < num; i++){
            
            if (name[i] <= minValue){
                minValue = name[i];
                minIndex = i;
            }
        }
        swap(name[minIndex], name[start]);
    }
    
}
