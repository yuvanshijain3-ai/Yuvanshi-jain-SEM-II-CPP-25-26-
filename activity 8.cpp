#include <iostream>
using namespace std;

class Bill {
    float units, total;
public:
    void calculate(float u) {
        units = u;
        total = units * 5.0; // Assuming 5 per unit
        float discount = total * 0.02;
        cout << "Final Bill after 2% discount: " << total - discount;
    }
};

int main() {
    Bill b;
    b.calculate(150);
    return 0;
}