//TODO:

#include <iostream>
using namespace std;
// print output of a function using pointer
void print(int *p)
{
    cout << *p << endl;
}
int main()
{
    int a = 10;
    print(&a);
    return 0;
}