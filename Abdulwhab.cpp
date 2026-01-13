#include <iostream>
using namespace std;

int main() {
    double consumption;
    double pricePerUnit;
    double totalBill;
    
    cout << "ادخل استهلاك الكهرباء (كيلووات ساعة): ";
    cin >> consumption;
    
    if (consumption <= 100) {
        pricePerUnit = 0.5;
    } 
    else if (consumption <= 300) {
        pricePerUnit = 1.0;
    } 
    else {
        pricePerUnit = 1.5;
    }
    
    totalBill = consumption * pricePerUnit;
    
    cout << "\nالاستهلاك: " << consumption << " كيلووات ساعة\n";
    cout << "سعر الوحدة: " << pricePerUnit << " دينار\n";
    cout << "الفاتورة الكلية: " << totalBill << " دينار\n";
    
    if (totalBill > 300) {
        cout << "الاستهلاك عالي\n";
    } 
    else {
        cout << "الاستهلاك طبيعي\n";
    }
    
    return 0;
}

