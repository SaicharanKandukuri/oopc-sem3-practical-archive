#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    // odd or even
    if (a % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}