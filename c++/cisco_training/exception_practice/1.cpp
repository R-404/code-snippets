#include <exception>
#include <iostream>

using namespace std;

int main() {
  try {
    throw exception();
  } catch (exception &x) {
    cout << x.what();
  }
  return 0;
}
