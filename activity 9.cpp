#include <iostream>
using namespace std;

class Date {
public:
    void isLeap(int y) {
        if((y%4==0 && y%100!=0) || (y%400==0)) cout << "Leap Year";
        else cout << "Not a Leap Year";
    }
};

int main() {
    Date d;
    d.isLeap(2024);
    return 0;
}