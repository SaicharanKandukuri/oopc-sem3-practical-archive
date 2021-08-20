#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// merge contents of two file and copy to third file
void merge(const string& file1, const string& file2, const string& file3)
{
    ifstream ifs1(file1);
    ifstream ifs2(file2);
    ofstream ofs3(file3);
    string line1, line2;
    while (ifs1)
    {
        getline(ifs1, line1);
        getline(ifs2, line2);
        ofs3 << line1 << endl;
        ofs3 << line2 << endl;
    }
    ifs1.close();
    ifs2.close();
}

void fileprint(const string& file3)
{
    ifstream ifs3(file3);
    string line;
    while (ifs3)
    {
        getline(ifs3, line);
        cout << line << endl;
    }
}

int main()
{
    merge("alanwalker.txt", "others.txt", "fav.txt");
    fileprint("fav.txt");
}