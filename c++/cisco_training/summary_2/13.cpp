#include <cstdlib>

#include <iostream>

using namespace std;

char c;

char *inc(char par1, int par2) {

  c = par1 + par2;

  return &c;
}

int main() {

  int a = 'a', b = 3;

  char *f;

  f = inc(a, b);

  cout << *f;

  return 0;
}