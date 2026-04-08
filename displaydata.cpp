#include<iostream>
using namespace std;
class student 
{
    int roll_no ; 
    int marks ;
    public:
    void getdata ()
    {
        cout<<"Enter the roll number";
        cin>>roll_no;
        cout<<"Enter the mark:";
        cin>>marks;

    }
    void displaydata ()
    {
        cout<<"Roll number:" <<roll_no<<endl;
        cout<<"Marks="<<marks<<endl;

    }
};
int main ()
{
    cout<<"Welcome to object oriented programming "<<endl;
    student s[5];
    int i ; 
    for (i=0;i<5;i++)
    {
         s[i].getdata ();
    }
    cout<<"you have entered below student detail ";
    for(i=0;i<5;i++)
    {
        s[i].displaydata (); 
    }
   
    
}