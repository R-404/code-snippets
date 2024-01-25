#include <iostream>

using namespace std;

class A {
public:

    A(A *v) { v = v; }
    A(float v) { A::v = 1.0;}
    float v;

    float set(float v) {
        A::v += v;
        return v;
    }

    float get(float v) {
        return A::v + v;
    }

};

int main() {
    A *a = new A(1.0), *b = new A(*a);
    cout << "////////////////";
    cout << a->get(b->set(a->v));
    cout << "////////////////";
    return 0;
}
