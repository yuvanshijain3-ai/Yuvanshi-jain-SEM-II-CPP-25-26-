#include <iostream>
using namespace std;
int count= 0;
class demo 
{
    public :
    demo()
    {
        count ++;
        cout<<"\n No of Objects created"<<count;

    }
    ~ demo()
    {
        cout<<"\n No.of objects destroyed"<<count;
        count--;
    }
};
int main ()
{
    cout<<"\nEnter Main";
    demo d1,d2,d3,d4;
    {
        cout<<"\n\nEnter block1\n";
        demo d5;
        cout<<"\n\nEnter Block2\n";
        demo d6;
    }
    cout<<"\n\n RE-ENTER MAIN\n";
    return 0;
}