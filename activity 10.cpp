#include <iostream>
using namespace std;

class Palindrome {
public:
    inline void check(int n) {
        int r, sum=0, temp=n;
        while(n>0) {
            r = n % 10;
            sum = (sum * 10) + r;
            n /= 10;
        }
        if(temp == sum) cout << "Palindrome";
        else cout << "Not Palindrome";
    }
};

int main() {
    Palindrome p;
    p.check(121);
    return 0;
}