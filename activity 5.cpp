#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
public:
    void getData() {
        cout << "Enter Name and Roll: ";
        cin >> name >> roll;
    }
    void display() {
        cout << "Roll: " << roll << " | Name: " << name << endl;
    }
};

int main() {
    Student s[10];
    for(int i=0; i<10; i++) s[i].getData();
    for(int i=0; i<10; i++) s[i].display();
    return 0;
}