#include <iostream>
using namespace std;

class X {
public:
  void shout() { cout << 'X'; }
};

class Y : public X {
  // public:
  //   void shout() { cout << 'Y'; }
};

class Z : public Y {
public:
  void shout() { cout << 'Z'; }
};

int main() {
  Z *z = new Z();
  //   Y *y = new Z();
  //   X *x = new Y();
  static_cast<Y *>(z)->shout();
  return 0;
}