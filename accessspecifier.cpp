#include <iostream>
#include <string> 
using namespace std;

class Patient 
{ 
private:
    string name;
    int age;

protected:
    string hospitalID; 
public:
    void setDetails(string n, int a) 
    {
        name = n;
        age = a;
    }

    void getData() 
    {
        cout << "Enter hospital ID: ";
        cin >> hospitalID;
        cout << "ID stored: " << hospitalID << endl;
    }

    void displayDetails() 
    {
       
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() 
{
    Patient obj;
    obj.setDetails("John Doe", 98);
    obj.displayDetails();
    obj.getData();

    return 0; 
}