#include <iostream>

using namespace std;

int main() {
  int i = 1;
  if (--i == 1) {
    cout << i;
  } else {
    cout << --i;
  }
  return 0;
}
