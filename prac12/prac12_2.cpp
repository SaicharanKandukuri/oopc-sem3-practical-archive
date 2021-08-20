#include <iostream>

using namespace std;

// class template to add two numbers
template <typename T>
class Add {
public:
  Add(T a, T b) : a(a), b(b) {}
  T operator()() { return a + b; }
private:
  T a, b;
};

// add two numbers in main function with class template
int main() {
  Add<int> add(1, 2);
  cout << add() << endl;
  return 0;
}