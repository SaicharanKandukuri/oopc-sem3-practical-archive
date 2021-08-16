#include <iostream>

// 3.1 Write a program to print Fibonacci series 0,1,1,2,3,5 using function.(For Looping, Condition,
// Function)
using namespace std;

int fibonacci(int n)
{
    int n1=0;
    int n2=1;
    int nth;
    int count = 0;

    if (n <=0)
    {
        cout << "Neagitive numbers wont work here" << endl;
        return 1;
    }
    else if(n==1)
    {
        cout << "Fibonacci sequence upto" << n << "is :"<< endl;
    }
    else {
        cout << "Fibonacci sequence:" << endl;
        while (count < n)
        {
            cout << n1 << endl;
            nth = n1 + n2;
            n1=n2;
            n2=nth;
            count += 1;
        }
        
    }
return 0;
}
int main()
{
    int terms;
    cout << "How many terms you want \n : ";
    cin >> terms;
    fibonacci(terms);
}