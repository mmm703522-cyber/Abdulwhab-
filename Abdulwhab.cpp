#include <iostream>
using namespace std;

int main() {
    int consumption;
    int pricePerUnit;
    int totalBill;
    
    cout << "Enter electricity consumption (units): ";
    cin >> consumption;
    
    if (consumption <= 100) {
        pricePerUnit = 250;
    } 
    else if (consumption <= 300) {
        pricePerUnit = 300;
    } 
    else {
        pricePerUnit = 350;
    }
    
    totalBill = consumption * pricePerUnit;
    
    cout << "\nElectricity consumption: " << consumption << " units\n";
    cout << "Price per unit: " << pricePerUnit << " IQD\n";
    cout << "Total bill: " << totalBill << " IQD\n";
    
    if (totalBill > 100000) {
        cout << "High consumption - Please reduce usage\n";
    } 
    else {
        cout << "Normal consumption\n";
    }
    
    return 0;
}
