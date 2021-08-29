#include <iostream>
using namespace std;
class over
{
    private :
    int a=10;
    int b=20;
    int c;
    public : 
void operator +()
{
    c=a+b;
}
void display()
{
    cout << "value of c"<<c;
}
};
int main()
{
  over d;
  +d;
  d.display();
}