#include <iostream>

using namespace std;

int add_with_cbr(int *a, int *b)
{
    return (*a + *b);
}
int add_with_cbv(int a, int b)
{
    return(a + b);
}
int main()
{
    int a =2 , b = 3;
    cout << add_with_cbr(&a,&b) << endl;
    cout << add_with_cbv(a,b) << endl;
    return 0;
}