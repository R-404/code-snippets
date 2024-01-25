#include <iostream>

using namespace std;


int main()
{
    int i, k = 1;

    while(i == 0) {
        if(k > 1)
            i = k;
        ++k;
    }
    
    cout << k;
}