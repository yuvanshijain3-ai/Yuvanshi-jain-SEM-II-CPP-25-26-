#include <iostream>
using namespace std;

class employee {
private:
    int salary;

public:
    employee(int s) {
        salary = s;
    }

    // declare friend function
    friend void displaysalary(employee emp);
};

void displaysalary(employee emp) {
    cout << "salary:" << emp.salary;
}

int main() {
    employee myemp(50000);
    displaysalary(myemp);
    
    return 0;
}