// FUNCTION INSIDE THE CLASS:
#include<iostream>
using namespace std; 
class Box{
    int l,b,h;
    public:
    void assignval(){
        cout<<"Length:";cin>>l;
        cout<<"Breadth:";cin>>b;
        cout<<"Height:";cin>>h;
    }
    void printval(){
        cout<<"\nLength is :"<<l<<"\nBreadthis :"<<b<<"\nHeightis :"<<h<<endl;
    }
};
int main(){
    Box B[4];
    for(int i=0;i<4;i++){
        cout<<"For Box "<<i+1<<endl;
        B[i].assignval();
        B[i].printval();
    }
}
