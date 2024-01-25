#include <iostream>

using namespace std;

class One {
public:
  void out() { cout << "one"; }
};

int main() {
  One arr[2];
  for (int i = 0; i < 1; i++)
    arr[i].out();
}