#include <iostream>
using namespace std;

class PrimeCheck {
public:
    void check(int n) {
        int count = 0;
        for(int i=1; i<=n; i++) if(n%i==0) count++;
        if(count == 2) cout << "Prime";
        else cout << "Not Prime";
    }
};

int main() {
    PrimeCheck obj;
    obj.check(13);
    return 0;
}