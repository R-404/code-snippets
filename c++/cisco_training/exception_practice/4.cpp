#include <exception>
#include <iostream>
#include <stdexcept>

using namespace std;

class X : public logic_error {
public:
  X() : logic_error("0"){};
};

void z() {
  X x;
  throw x;
  cout << 1;
}

int main(void) {
  X x;
  try {
    z();
  } catch (logic_error &i) {
    cout << i.what();
  }
  return 0;
}