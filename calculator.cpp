#include <iostream>

using namespace std;

template <class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
        cout << "Addition is: " << add() << endl;
        cout << "Subtraction is: " << subtract() << endl;
        cout << "Product is: " << multiply() << endl;
        cout << "Division is: " << divide() << endl;
    }

    T add() { 
        return num1 + num2; 
    }
    
    T subtract() { 
        return num1 - num2; 
    }
    
    T multiply() { 
        return num1 * num2; 
    }
    
    T divide() { 
        return num1 / num2; 
    }
};

int main() {
    Calculator<int> c1(3, 6);
    Calculator<float> c2(3.4, 6.7);

    // Direct method calls from the slide
    cout << "c1 add: " << c1.add() << endl;
    cout << "c2 multiply: " << c2.multiply() << endl;
    
    cout << "\n--- c1 Display Result ---" << endl;
    c1.displayResult();

    return 0;
}