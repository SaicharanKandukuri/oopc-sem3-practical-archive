#include <iostream>
using namespace std;

class Date
{
    private:
    int dd, mm, yy;
    public:
    void assign(int d, int m, int y)
    {
        dd = d; mm = m ; yy = y;
    }
    void display()
    {
        cout << dd << "-" << mm << "-" << yy <<endl;
    }
    void assign()
    {
        cout << "distrctor called";
    }
};
int main()
{
    Date D1,D2;
    D1.display();
    D1.assign(12,02,2019);
    D1.display();
    D1.assign();
    D2.display();
    D2.assign(15,03,2019);
    D2.display();
    D2.assign();
}
//TODO: verify