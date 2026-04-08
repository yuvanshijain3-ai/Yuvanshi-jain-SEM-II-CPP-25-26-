#include <iostream>
using namespace std;

class Swapper {
    int a, b;
public:
    void swapNums(int x, int y) {
        a = x; b = y;
        int temp = a;
        a = b;
        b = temp;
        cout << "After Swap: a=" << a << ", b=" << b;
    }
};

int main() {
    Swapper obj;
    obj.swapNums(10, 20);
    return 0;
}