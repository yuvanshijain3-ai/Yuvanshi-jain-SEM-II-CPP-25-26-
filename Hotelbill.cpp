#include <iostream>
#include <iomanip> // For formatting the bill table
using namespace std;

class HotelBill {
    int tableNo, qty[20], count;
    string custName, contact, items[20];
    float price[20];

public:
    void getInput() {
        cout << "Table No: "; cin >> tableNo;
        cin.ignore(); // Handle newline
        cout << "Customer Name: "; getline(cin, custName);
        cout << "Contact: "; cin >> contact;
        
        cout << "How many items? "; cin >> count;
        for (int i = 0; i < count; i++) {
            cout << "Item " << i + 1 << " (Name Qty Price): ";
            cin >> items[i] >> qty[i] >> price[i];
        }
    }

    void printBill() {
        float total = 0;
        
        // Header
        cout << "\n----------- Hotel Bill -----------" << endl;
        cout << "Table No.: " << tableNo << endl;
        cout << "Customer Name: " << custName << "\nContact: " << contact << endl;
        cout << "Order Details:\n" << left << setw(15) << "Item" << setw(5) << "Qty" << setw(8) << "Price" << "Total" << endl;
        cout << "----------------------------------------" << endl;

        // Print Items & Calculate Total
        for (int i = 0; i < count; i++) {
            float itemTotal = qty[i] * price[i];
            total += itemTotal;
            cout << left << setw(15) << items[i] << setw(5) << qty[i] << setw(8) << price[i] << itemTotal << endl;
        }

        // Discount Logic
        float disc = 0;
        if (total > 5000) disc = total * 0.20;
        else if (total > 3000) disc = total * 0.10;
        else if (total > 1000) disc = total * 0.05;

        // Final Footer
        cout << "----------------------------------------" << endl;
        cout << "Total Amount: " << total << endl;
        cout << "Discount:    -" << disc << endl;
        cout << "Final Amount: " << (total - disc) << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {
    HotelBill bill;
    bill.getInput();
    bill.printBill();
    return 0;
}