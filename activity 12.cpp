#include <iostream>
using namespace std;

class MedicalBill {
public:
    MedicalBill(float consultation, float medicine) {
        cout << "Total Medical Bill: " << (consultation + medicine);
    }
};

int main() {
    MedicalBill patient1(500.0, 1200.50);
    return 0;
}