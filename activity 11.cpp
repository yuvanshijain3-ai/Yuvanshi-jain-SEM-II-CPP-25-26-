#include <iostream>
using namespace std;

class Numbers {
public:
    void print(int n) {
        for(int i=1; i<=n; i++) cout << i << " ";
    }
};

int main() {
    Numbers obj;
    obj.print(10);
    return 0;
}