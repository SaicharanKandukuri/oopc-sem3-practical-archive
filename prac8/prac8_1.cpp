#include <iostream>

using namespace std;

class Uni
{
    private:
        int d = 1;
        int n = 2;
    public:
    Uni(int nv)
    {
        d = nv;   
    }
    Uni(int nv)
    {
        n = nv;
    }

    Uni operator+(int nv) { }
};
// TODO: