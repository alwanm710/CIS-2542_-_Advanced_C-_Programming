// Programming Challenges 6-4
// By Mohammad Alwan

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main() {
        
        findLowest(getNumAccidents ("north"), getNumAccidents ("south"),
                            getNumAccidents ("east"), getNumAccidents ("west"),
                            getNumAccidents ("center"));
        
}

int getNumAccidents(string region){
        int accidentNumber;
        cout << "How many accident happen at the " << region;
        cout << " of the city?\n";
        cin >> accidentNumber;
        
        while (accidentNumber < 0){
            cout << "Please enter a postive number or zero: ";
            cin >> accidentNumber;
            
        }
        
        
        return accidentNumber;
        
}

void findLowest(int regionN, int regionS, int regionE, int regionW, int regionC) {
    
    
    // This section we try and find the lowest value
    // We use the array to but all the numbers in the list to make things easier
    int region[5] = {regionN, regionS, regionE, regionW, regionC};
    
    int Lowest = region[0];          // We use this as a defualt to compare to the other variables
    
    for (int i = 1; i < 5; i++) {
        if ( region[i] < Lowest){    // Finds the lowest variable in the array
            Lowest = region[i];
        }
    }
    
    string lowestRegion;
    
    if (Lowest == region[0])
        lowestRegion = "north";
    else if (Lowest == region[1])
        lowestRegion = "south";
    else if (Lowest == region[2])
        lowestRegion = "east";
    else if (Lowest == region[3])
        lowestRegion = "west";
    else
        lowestRegion = "center";
    
    cout << "The lowest number of accidents is " << Lowest;
    cout << " at the " << lowestRegion << " region. \n";

}
