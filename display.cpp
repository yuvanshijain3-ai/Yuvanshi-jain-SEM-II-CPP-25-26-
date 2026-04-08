#include<iostream>
using namespace std;
class studentMarks
{
    int marks[5];
public:

    void acceptMarks()
    {
        cout<<"enter marks of 5 students:";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void displayMarks(){
        cout<<"\nMarks of students are:";
        for (int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }

    double averageMarks() {
        int sum=0;
        for (int i=0; i<5;i++){
            sum+= marks[i];
        }
        return sum/5;
    }
};
int main(){
    studentMarks sm;
    sm.acceptMarks();
    sm.displayMarks();
    cout<<"average Marks=" << sm.averageMarks() << endl;
}