#include <iostream>
using namespace std;

float area(float base, float height) {
    return 0.5 * base * height;
}

float area(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    cout << "Area of Triangle (b=5, h=10): " << area(5, 10) << endl;
    cout << "Area of Circle (r=7): " << area(7) << endl;
    return 0;
}