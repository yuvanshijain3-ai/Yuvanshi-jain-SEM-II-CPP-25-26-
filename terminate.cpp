#include <iostream>
using namespace std;

void Test(int x) throw (int, double)
{
    if (x == 0)
        throw 'x';
    else if (x == 1)
        throw x;
    else if (x == -1)
        throw 1.0;
}

int main()
{
    try
    {
        Test(0);
        Test(1);
        Test(-1);
    }
    catch (char x)
    {
        cout << "Caught char";
    }
    catch (int x)
    {
        cout << "Caught int";
    }
    catch (double x)
    {
        cout << "Caught double";
    }

    return 0;
}