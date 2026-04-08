#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Constructor to initialize the object's value
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
        cout << "The initial value of Feet & Inches: " << feet << " " << inch << endl;
    }

    // Overloading (--) operator to perform decrement operation
    void operator--() {
        feet--;
        inch--;
        cout << "The value of Feet & Inches after Decrement: " << feet << " " << inch << endl;
    }
};

int main() {
    // Create object with initial values
    Distance d1(8, 9);

    // Use (--) unary operator on the object
    --d1;

    return 0;
} 