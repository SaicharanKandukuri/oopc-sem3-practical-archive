#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// read a text file and count the number of words in it
int main()
{
    int x;
    fstream file;
    file.open("prac13_1.txt", ios::in);
    while(file)
    {
        string word;
        word = file.get();
        x++;
    }
    cout << x << endl;
}