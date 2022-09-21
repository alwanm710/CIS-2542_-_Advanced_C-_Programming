// Programming Challenges 6-14
// By Mohammad Alwan

#include <iostream>
#include <iomanip>

using namespace std;

int validOrder (int);
int validStock (int);
int readyShip (int, int);
int backOrder (int, int);

int const shipAndHandle = 10,
               spoolCost = 100;

int spoolOrder,
     spoolStock,
     ship,
     back;
     
float handling,
        subTotal,
        Total;

int main() {
    
    cout << "How many spools where ordered? ";
    cin >> spoolOrder;
    spoolOrder = validOrder (spoolOrder);
    
    cout << "How many spools are in stock? ";
    cin >> spoolStock;
    spoolStock = validStock (spoolStock);
    
    ship = readyShip (spoolOrder, spoolStock);
    back = backOrder (spoolOrder, spoolStock);
    
    handling = shipAndHandle * ship;
    subTotal = ship * spoolCost;
    Total = handling + subTotal;
    
    
    cout << "\n";
    cout << "\n";
    cout << setw(52) << "The amount of spools ready to be ship:  " << ship << endl;
    cout << setw(52) << "The amount of spools in backorder:  " << back << endl;
    
    cout << setprecision(2) << fixed;
    cout << setw(53) << "The subtotal cost for orders ready to be shipped: $"  << setw(8) << subTotal << endl;
    cout << setw(53) << "The cost for shiping and handling: $" << setw(8) << handling << endl;
    cout << setw(53) << "The total cost for orders ready to be shipped: $" << setw(8) << Total << endl;
    
}


int validOrder (int num){
    while (num < 0){
        cout << "Enter a number equal to or greater than one:  ";
        cin >> num;
        
    }
    return num;
}

int validStock (int spoolStock){
    while (spoolStock <= 0){
        cout << "Enter a number equal to or greater than zero:  ";
        cin >> spoolStock;
    }
    return spoolStock;
}


int readyShip (int order, int stock){
    if (order < stock){
        ship = order;
    }
    else {
        ship = stock;
    }
    return ship;
}


int backOrder (int order, int stock){
    if (order > stock){
        back = order - stock;
    }
    else {
        back = 0;
    }
    return back;
}