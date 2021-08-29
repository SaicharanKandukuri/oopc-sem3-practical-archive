/*  C++ Program to find Mean Value of number using Friend function  */
#include<iostream>
using namespace std;
class  base
{
    int val1,val2;
   public:
        void get()
        {
           cout<<"\nEnter 1st value :: ";
           cin>>val1;
           cout<<"\nEnter 2nd value :: ";
           cin>>val2;
        }
        friend float mean(base ob);
};
float mean(base ob)
{
   return float(ob.val1+ob.val2)/2;
}
int main()
{
    base obj;
    obj.get();
    cout<<"\nMean value is :: "<<mean(obj)<<"\n";
    return 0;
}
