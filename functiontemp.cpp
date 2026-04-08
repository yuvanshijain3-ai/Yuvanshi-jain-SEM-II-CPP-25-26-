#include <iostream>

using namespace std;

template<class T>
void swapp(T &i, T &k) // Fixed: Added '&' to pass by reference
{
    T temp;
    temp=i;
    i=k;
    k=temp;
}

int main() {
    int e,f;
    char g,r;
    float x,y;

    cout<<"\n Enter 2 Integer Values: ";
    cin>>e>>f;
    swapp(e,f);
    cout<<"\nInteger values after Swapping: ";
    cout<<e<<"\t"<<f<<"\n\n";

    cout<<"\n Enter 2 Character Values: "; 
    cin>>g>>r;
    swapp(g,r);
    cout<<"\n Character Values after Swapping: ";
    cout<<g<<"\t"<<r<<"\n\n";

    cout<<"\n Enter 2 Float Values: ";
    cin>>x>>y;
    swapp(x,y);
    cout<<"\n The resultant float values after swapping: "; // Fixed typo 'resultatnt' from the slide
    cout<<x<<"\t"<<y<<"\n\n";
    
    return 0;
}