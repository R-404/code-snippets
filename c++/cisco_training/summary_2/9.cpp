#include <iostream>

using namespace std;

int sub(int x, int y)

{

  x -= y;

  return x;
}

int main()

{

  int a = 0, b = 1, c, d;

  c = sub(a, b);

  d = sub(c, b);

  cout << c << d;

  return 0;
}