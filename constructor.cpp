#include <iostream>
using namespace std;

class base {
    int id;
public:
    base(int i) {
        id = i;
        cout << "Base constructor called with id = " << id << endl;
    }
};

class derived : public base {
    double cost;
public:
    
    derived(int i, double c) : base(i) {
        cost = c;
        cout << "Derived constructor called with cost = " << cost << endl;
    }
};

int main() {
    
    derived d(10, 99.99);
    return 0;
}