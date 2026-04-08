#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // 1. Get user input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // 2. Swap logic using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // 3. Display the result
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}