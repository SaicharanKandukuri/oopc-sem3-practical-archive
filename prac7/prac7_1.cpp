#include<iostream>
using namespace std;
class Date{
    int dd,mm,yy;
public:
    Date(int x,int y,int z){
        dd=x;
        mm=y;
        yy=z;
    }
    ~Date(){
        cout<<"Destructor called"<<endl;
    }
void display(){
    cout<<"Date is: "<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
};
int main(){
    Date D1(12,02,2019);
    D1.display();
    Date D2(15,3,2019);
    D2.display();
}
