#include <iostream>
using namespace std;
inline void add(int a, int b)
{
    int   ad  = a+b;
    cout << "| addition -> "        << ad  << " |" << endl;
}
inline void sub(int a, int b)
{
    int   su  = a-b;
    cout << "| substraction -> "    << su  << " |" << endl;
}
inline void mul(int a, int b)
{
    int   mul = a*b;
    cout << "| multiplication -> " << mul << " |" << endl;
}
inline void divi(int a, int b)
{
    float div = (float)a/(float)b;
    cout << "| division -> "  << div << " |" << endl;
}
inline void mod(int a, int b)
{
    int   mod = a%b;
    cout << "| modulus -> "<< mod << " |" << endl;
}
int main()
{
    int a,b;
    cout << "enter two number 1 \n : ";
    cin  >> a;
    cout << "enter two number 1 \n : ";
    cin  >> b;
    add(a,b);
    sub(a,b);
    mul(a,b);
    divi(a,b);
    mod(a,b);
}
