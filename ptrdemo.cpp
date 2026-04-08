#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    
    cout << "Value of a:" << a << endl;
    cout << "address of a:" << &a << endl;
    cout << "Value stored in p:" << p << endl;
    cout << "Value at address p:" << *p << endl;

    return 0;
}