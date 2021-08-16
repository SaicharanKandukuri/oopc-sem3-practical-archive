#include <iostream>

using namespace std;

class BOX
{
    private:
    int length=0, width=0, height=0;
    public:
    void assign(int l, int b, int h)
    {
        length = l;
        width = b;
        height = h;
    }
    void display()
    {
        cout << length << width << height << endl;
    }
};

int main()
{
    BOX plug;
    plug.display();
    plug.assign(1,2,3);
    plug.display();
}