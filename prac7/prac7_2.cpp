#include <iostream>

using namespace std;

// program to demostrate copy constructor
// 7/24/21
// * Copyright (C) <2021> zman-1x1  ヾ(≧▽≦*)o
// Dont copy (╯▔皿▔)╯彡┻━┻

class Gg
{
    private:
        int a;
    public:
        Gg(int a1) { a = a1; };
        Gg (const Gg &gg) { a = gg.a; }
        int geta() { return a; }
};
int main()
{
    Gg gg(1);
    Gg g2 = gg;

    cout << "gg.x" << gg.geta() << endl;
    cout << "g1.x" << g2.geta() << endl;
}