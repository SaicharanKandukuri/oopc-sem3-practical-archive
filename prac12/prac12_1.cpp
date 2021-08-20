#include <iostream>

using namespace std;

// function template for adding two numbers
template <typename T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << add(2,4) << endl;
}