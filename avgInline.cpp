#include <iostream>
using namespace std;

inline void displayAvg(int a, int b, int c)
{
    float avg;
    avg = (a + b + c) / 3.0;
    cout << avg << endl;
}

int main()
{
    displayAvg(5, 8, 666);

    return 0;
}